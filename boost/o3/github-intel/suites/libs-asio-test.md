# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.673250 | 4.430295 | 3.713798 | 0.001704 | 0.002278 | 0.002309 |
| any_completion_executor_select.test | RUN | 0.701532 | 4.442969 | 3.919338 | 0.001895 | 0.002162 | 0.002039 |
| any_completion_handler.test | RUN | 0.777465 | 4.058287 | 3.394237 | 0.001463 | 0.001846 | 0.001564 |
| any_completion_handler_select.test | RUN | 0.778707 | 4.132733 | 3.588453 | 0.001506 | 0.001780 | 0.001502 |
| any_io_executor.test | RUN | 0.724798 | 4.718744 | 4.054933 | 0.001839 | 0.002240 | 0.001885 |
| any_io_executor_select.test | RUN | 0.746855 | 4.655526 | 4.203905 | 0.001677 | 0.001899 | 0.002068 |
| append.test | RUN | 0.659913 | 3.799102 | 3.043336 | 0.001408 | 0.001828 | 0.001573 |
| append_select.test | RUN | 0.670987 | 3.843749 | 3.031087 | 0.001461 | 0.001681 | 0.001320 |
| as_tuple.test | RUN | 0.856170 | 4.538505 | 4.190386 | 0.001702 | 0.001680 | 0.001531 |
| as_tuple_select.test | RUN | 0.863447 | 4.454624 | 4.195029 | 0.001444 | 0.001696 | 0.001436 |
| associated_allocator.test | LINK | 0.169661 | 0.380193 | 0.460760 | — | — | — |
| associated_allocator_select.test | LINK | 0.165793 | 0.385855 | 0.449118 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.180356 | 0.420307 | 0.485316 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.181639 | 0.423497 | 0.490417 | — | — | — |
| associated_executor.test | LINK | 0.273720 | 0.713610 | 0.784856 | — | — | — |
| associated_executor_select.test | LINK | 0.272109 | 0.713037 | 0.782846 | — | — | — |
| associated_immediate_executor.test | LINK | 0.248516 | 0.658160 | 0.709695 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.250309 | 0.663595 | 0.720173 | — | — | — |
| associator.test | LINK | 0.135180 | 0.307888 | 0.364801 | — | — | — |
| associator_select.test | LINK | 0.133772 | 0.317342 | 0.373063 | — | — | — |
| awaitable.test | LINK | 0.132613 | 0.311070 | 0.375214 | — | — | — |
| awaitable_select.test | LINK | 0.137115 | 0.315759 | 0.377271 | — | — | — |
| basic_datagram_socket.test | LINK | 0.426929 | 0.978833 | 1.396163 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.426635 | 1.024306 | 1.454524 | — | — | — |
| basic_deadline_timer.test | LINK | 0.505697 | 1.182816 | 1.624875 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.509458 | 1.189048 | 1.639882 | — | — | — |
| basic_file.test | LINK | 0.133098 | 0.319391 | 0.379181 | — | — | — |
| basic_file_select.test | LINK | 0.136137 | 0.307302 | 0.375056 | — | — | — |
| basic_random_access_file.test | LINK | 0.143172 | 0.314166 | 0.369699 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.138483 | 0.309331 | 0.376222 | — | — | — |
| basic_raw_socket.test | LINK | 0.429750 | 0.998077 | 1.416479 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.432832 | 1.018828 | 1.430978 | — | — | — |
| basic_readable_pipe.test | LINK | 0.414144 | 0.939999 | 1.215749 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.430367 | 1.010995 | 1.476660 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.429245 | 1.000041 | 1.417011 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.438090 | 1.010285 | 1.445829 | — | — | — |
| basic_signal_set.test | LINK | 0.400219 | 0.932434 | 1.115444 | — | — | — |
| basic_signal_set_select.test | LINK | 0.411150 | 0.977200 | 1.362412 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.444336 | 0.998920 | 1.419324 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.443179 | 1.027734 | 1.437080 | — | — | — |
| basic_stream_file.test | LINK | 0.136102 | 0.309436 | 0.360935 | — | — | — |
| basic_stream_file_select.test | LINK | 0.132397 | 0.313508 | 0.367462 | — | — | — |
| basic_stream_socket.test | LINK | 0.430956 | 0.992642 | 1.400000 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.435370 | 1.026550 | 1.423242 | — | — | — |
| basic_streambuf.test | LINK | 0.204578 | 0.447745 | 0.559020 | — | — | — |
| basic_streambuf_select.test | LINK | 0.204290 | 0.462487 | 0.557236 | — | — | — |
| basic_waitable_timer.test | LINK | 0.406045 | 0.950695 | 1.309831 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.414184 | 0.980634 | 1.323385 | — | — | — |
| basic_writable_pipe.test | LINK | 0.412462 | 0.978346 | 1.216810 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.426327 | 1.039517 | 1.475206 | — | — | — |
| bind_allocator.test | RUN | 0.711195 | 3.900103 | 3.297109 | 0.002016 | 0.001940 | 0.001750 |
| bind_allocator_select.test | RUN | 0.731760 | 3.948957 | 3.293987 | 0.001552 | 0.001984 | 0.001347 |
| bind_cancellation_slot.test | RUN | 0.733491 | 3.950392 | 3.353054 | 0.001154 | 0.001183 | 0.001058 |
| bind_cancellation_slot_select.test | RUN | 0.749827 | 3.944614 | 3.241382 | 0.001118 | 0.001186 | 0.001066 |
| bind_executor.test | RUN | 0.484822 | 2.561126 | 2.049886 | 0.001772 | 0.001914 | 0.001744 |
| bind_executor_select.test | RUN | 0.490025 | 2.627407 | 2.004029 | 0.001484 | 0.001828 | 0.001604 |
| bind_immediate_executor.test | RUN | 0.358607 | 2.111731 | 1.291029 | 0.001199 | 0.001229 | 0.001137 |
| bind_immediate_executor_select.test | RUN | 0.374608 | 2.036206 | 1.435563 | 0.001147 | 0.001127 | 0.001048 |
| buffer.test | RUN | 0.212579 | 0.867941 | 0.771752 | 0.001082 | 0.001136 | 0.001075 |
| buffer_select.test | RUN | 0.213354 | 0.856017 | 0.774136 | 0.001036 | 0.001064 | 0.001025 |
| buffer_registration.test | LINK | 0.157405 | 0.429329 | 0.442750 | — | — | — |
| buffer_registration_select.test | LINK | 0.160322 | 0.431913 | 0.453195 | — | — | — |
| buffered_read_stream.test | RUN | 0.824041 | 6.008977 | 4.958568 | 0.001466 | 0.001868 | 0.001939 |
| buffered_read_stream_select.test | RUN | 0.834442 | 6.061191 | 4.971203 | 0.001346 | 0.001870 | 0.001828 |
| buffered_stream.test | RUN | 1.379439 | 9.343882 | 8.375268 | 0.001918 | 0.001986 | 0.002054 |
| buffered_stream_select.test | RUN | 1.423586 | 9.323330 | 8.186766 | 0.001754 | 0.001935 | 0.001891 |
| buffered_write_stream.test | RUN | 1.390906 | 7.958812 | 7.235370 | 0.001777 | 0.001838 | 0.001816 |
| buffered_write_stream_select.test | RUN | 1.396471 | 8.026608 | 6.992392 | 0.001748 | 0.001824 | 0.001812 |
| buffers_iterator.test | RUN | 0.418083 | 0.719593 | 1.160081 | 0.001204 | 0.001574 | 0.001389 |
| buffers_iterator_select.test | RUN | 0.414184 | 0.727823 | 1.150463 | 0.001247 | 0.001394 | 0.001379 |
| cancel_after.test | RUN | 1.083166 | 6.114071 | 5.314223 | 0.002842 | 0.003591 | 0.003107 |
| cancel_after_select.test | RUN | 1.101512 | 6.124635 | 5.248840 | 0.002571 | 0.002847 | 0.003112 |
| cancel_at.test | RUN | 1.089043 | 5.311787 | 4.924952 | 0.002632 | 0.002942 | 0.002891 |
| cancel_at_select.test | RUN | 1.092434 | 5.258922 | 4.931836 | 0.002599 | 0.002893 | 0.002715 |
| cancellation_signal.test | LINK | 0.158275 | 0.249470 | 0.287809 | — | — | — |
| cancellation_signal_select.test | LINK | 0.146833 | 0.260794 | 0.280219 | — | — | — |
| cancellation_state.test | LINK | 0.183437 | 0.246314 | 0.285460 | — | — | — |
| cancellation_state_select.test | LINK | 0.177787 | 0.246891 | 0.285100 | — | — | — |
| cancellation_type.test | LINK | 0.125250 | 0.197675 | 0.381132 | — | — | — |
| cancellation_type_select.test | LINK | 0.133428 | 0.199470 | 0.378518 | — | — | — |
| co_composed.test | RUN | 0.131718 | 0.199919 | 0.377187 | 0.001413 | 0.001129 | 0.001318 |
| co_composed_select.test | RUN | 0.137362 | 0.202861 | 0.380357 | 0.001218 | 0.001096 | 0.001233 |
| co_spawn.test | LINK | 0.134996 | 0.195477 | 0.380461 | — | — | — |
| co_spawn_select.test | LINK | 0.136153 | 0.194109 | 0.377936 | — | — | — |
| completion_condition.test | LINK | 0.175063 | 0.449377 | 0.495903 | — | — | — |
| completion_condition_select.test | LINK | 0.177223 | 0.466188 | 0.496850 | — | — | — |
| compose.test | RUN | 0.886814 | 4.808983 | 4.222982 | 0.001880 | 0.001898 | 0.001809 |
| compose_select.test | RUN | 0.896723 | 4.731249 | 4.189076 | 0.001559 | 0.002008 | 0.001742 |
| composed.test | RUN | 0.869835 | 4.664193 | 4.194519 | 0.001568 | 0.001522 | 0.001520 |
| composed_select.test | RUN | 0.864964 | 4.597750 | 4.183790 | 0.001458 | 0.001645 | 0.001311 |
| config.test | RUN | 0.413374 | 2.989776 | 2.009901 | 0.001532 | 0.001591 | 0.001457 |
| config_select.test | RUN | 0.450115 | 3.102272 | 2.225831 | 0.001541 | 0.001695 | 0.001584 |
| connect.test | LINK | 1.478012 | 10.051612 | 8.855949 | — | — | — |
| connect_select.test | LINK | 1.487970 | 10.042759 | 8.913208 | — | — | — |
| connect_pipe.test | RUN | 0.770491 | 3.870174 | 3.300408 | 0.001521 | 0.001552 | 0.001624 |
| connect_pipe_select.test | RUN | 0.800063 | 3.984353 | 3.525222 | 0.001494 | 0.001641 | 0.001566 |
| consign.test | RUN | 0.665047 | 3.770847 | 3.018227 | 0.001435 | 0.001521 | 0.001666 |
| consign_select.test | RUN | 0.668745 | 3.823201 | 2.988198 | 0.001394 | 0.001583 | 0.001343 |
| coroutine.test | LINK | 0.148884 | 0.378816 | 0.401088 | — | — | — |
| coroutine_select.test | LINK | 0.154678 | 0.376992 | 0.423451 | — | — | — |
| deadline_timer.test | RUN | 0.972795 | 4.949996 | 4.269373 | 0.002847 | 0.002538 | 0.003199 |
| deadline_timer_select.test | RUN | 0.977066 | 4.877395 | 4.247076 | 0.002304 | 0.003264 | 0.002846 |
| deferred.test | RUN | 0.161060 | 0.345689 | 0.417098 | 0.001533 | 0.001583 | 0.001406 |
| deferred_select.test | RUN | 0.152043 | 0.355582 | 0.415419 | 0.001517 | 0.001453 | 0.001374 |
| detached.test | LINK | 0.174667 | 0.384776 | 0.452461 | — | — | — |
| detached_select.test | LINK | 0.170124 | 0.386239 | 0.456649 | — | — | — |
| disposition.test | RUN | 0.182486 | 0.921828 | 0.836617 | 0.001090 | 0.001600 | 0.001597 |
| disposition_select.test | RUN | 0.166345 | 0.918738 | 0.838190 | 0.001107 | 0.001506 | 0.001387 |
| error.test | RUN | 0.144860 | 0.878597 | 0.763368 | 0.001136 | 0.001547 | 0.001519 |
| error_select.test | RUN | 0.141992 | 0.877734 | 0.766990 | 0.001088 | 0.001536 | 0.001248 |
| file_base.test | LINK | 0.173141 | 0.710139 | 0.791049 | — | — | — |
| file_base_select.test | LINK | 0.172852 | 0.718919 | 0.726762 | — | — | — |
| fwd_first.test | LINK | 0.407828 | 1.191845 | 1.403840 | — | — | — |
| fwd_last.test | LINK | 0.401548 | 1.116169 | 1.419400 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.154205 | 0.392641 | 0.510092 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.151043 | 0.397059 | 0.494291 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.708150 | 3.696694 | 3.011735 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.701194 | 3.846304 | 2.938809 | — | — | — |
| generic_raw_protocol.test | LINK | 0.718853 | 3.715031 | 2.942924 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.704467 | 3.855891 | 2.957417 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.601008 | 3.159091 | 2.557396 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.608900 | 3.247420 | 2.505452 | — | — | — |
| generic_stream_protocol.test | LINK | 0.651696 | 3.438042 | 2.686248 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.645206 | 3.557149 | 2.712084 | — | — | — |
| high_resolution_timer.test | LINK | 0.256097 | 0.604263 | 0.793495 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.257916 | 0.617710 | 0.824522 | — | — | — |
| immediate.test | LINK | 0.177062 | 0.453755 | 0.486454 | — | — | — |
| immediate_select.test | LINK | 0.175816 | 0.461734 | 0.491627 | — | — | — |
| inline_executor.test | RUN | 0.215352 | 0.729751 | 0.732294 | 0.001084 | 0.001637 | 0.001088 |
| inline_executor_select.test | RUN | 0.218721 | 0.733585 | 0.737903 | 0.001034 | 0.001142 | 0.001064 |
| inline_or_executor.test | RUN | 0.366798 | 2.188329 | 1.478799 | 0.001217 | 0.001236 | 0.001108 |
| inline_or_executor_select.test | RUN | 0.383044 | 2.206394 | 1.622491 | 0.001159 | 0.001166 | 0.001098 |
| io_context.test | RUN | 0.557981 | 3.344022 | 2.585258 | 0.001986 | 0.002104 | 0.002004 |
| io_context_select.test | RUN | 0.551847 | 3.245013 | 2.602672 | 0.001753 | 0.002156 | 0.001882 |
| io_context_strand.test | RUN | 0.522817 | 2.937888 | 2.224777 | 0.001922 | 0.002378 | 0.001934 |
| io_context_strand_select.test | RUN | 0.532817 | 2.984735 | 2.243267 | 0.001642 | 0.001976 | 0.001869 |
| ip_address.test | LINK | 0.187239 | 0.960271 | 0.645147 | — | — | — |
| ip_address_select.test | LINK | 0.187019 | 0.944869 | 0.656683 | — | — | — |
| ip_address_v4.test | LINK | 0.182507 | 0.665974 | 0.697816 | — | — | — |
| ip_address_v4_select.test | LINK | 0.184925 | 0.669914 | 0.697364 | — | — | — |
| ip_address_v6.test | LINK | 0.207936 | 0.890496 | 0.832438 | — | — | — |
| ip_address_v6_select.test | LINK | 0.208804 | 0.898970 | 0.850645 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.155260 | 0.419032 | 0.534827 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.154982 | 0.421914 | 0.541216 | — | — | — |
| ip_basic_resolver.test | LINK | 0.262929 | 0.592929 | 0.798789 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.268149 | 0.614092 | 0.834751 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.087043 | 0.197858 | 0.225059 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.085895 | 0.197838 | 0.229889 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.158989 | 0.399888 | 0.687671 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.153674 | 0.403706 | 0.827911 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.146611 | 0.388273 | 0.848152 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.144042 | 0.389633 | 0.838155 | — | — | — |
| ip_host_name.test | RUN | 0.159127 | 0.533862 | 0.954888 | 0.001076 | 0.001060 | 0.001430 |
| ip_host_name_select.test | RUN | 0.160897 | 0.536795 | 0.960413 | 0.001052 | 0.001094 | 0.001402 |
| ip_icmp.test | RUN | 0.922146 | 6.729368 | 6.288764 | 0.001018 | 0.001509 | 0.001501 |
| ip_icmp_select.test | RUN | 0.884799 | 7.032551 | 6.139156 | 0.001135 | 0.001606 | 0.001281 |
| ip_multicast.test | RUN | 0.504228 | 4.051601 | 3.505406 | 0.001270 | 0.001822 | 0.001582 |
| ip_multicast_select.test | RUN | 0.508243 | 4.036544 | 3.482843 | 0.001172 | 0.001692 | 0.001534 |
| ip_resolver_query_base.test | LINK | 0.100338 | 0.346368 | 0.380865 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.097069 | 0.340924 | 0.384706 | — | — | — |
| ip_tcp.test | RUN | 1.373741 | 11.859875 | 9.575018 | 0.001617 | 0.002124 | 0.001846 |
| ip_tcp_select.test | RUN | 1.361168 | 12.373042 | 9.291392 | 0.001495 | 0.002302 | 0.001915 |
| ip_udp.test | RUN | 0.928051 | 8.422246 | 6.642099 | 0.001252 | 0.001818 | 0.001636 |
| ip_udp_select.test | RUN | 0.932380 | 8.588549 | 6.474710 | 0.001185 | 0.001524 | 0.001603 |
| ip_unicast.test | RUN | 0.445420 | 3.665863 | 3.134801 | 0.001106 | 0.001556 | 0.001520 |
| ip_unicast_select.test | RUN | 0.453104 | 3.687710 | 3.101358 | 0.001110 | 0.001493 | 0.001385 |
| ip_v6_only.test | RUN | 0.460174 | 3.863247 | 3.205521 | 0.001206 | 0.001766 | 0.001436 |
| ip_v6_only_select.test | RUN | 0.467957 | 3.947761 | 3.163527 | 0.001102 | 0.001520 | 0.001387 |
| is_read_buffered.test | RUN | 0.295944 | 1.126703 | 1.652831 | 0.001097 | 0.001521 | 0.001251 |
| is_read_buffered_select.test | RUN | 0.308941 | 1.162968 | 1.692811 | 0.001096 | 0.001364 | 0.001186 |
| is_write_buffered.test | RUN | 0.311662 | 1.139972 | 1.646614 | 0.001104 | 0.001380 | 0.001297 |
| is_write_buffered_select.test | RUN | 0.313526 | 1.176465 | 1.672387 | 0.001101 | 0.001407 | 0.001240 |
| local_basic_endpoint.test | LINK | 0.146415 | 0.641146 | 0.857768 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.144983 | 0.645176 | 0.852355 | — | — | — |
| local_connect_pair.test | LINK | 0.431154 | 3.759863 | 2.949490 | — | — | — |
| local_connect_pair_select.test | LINK | 0.431827 | 3.732220 | 2.929838 | — | — | — |
| local_datagram_protocol.test | LINK | 0.845546 | 4.897860 | 4.182857 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.919182 | 4.959416 | 4.063475 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.921188 | 4.779211 | 4.139935 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.948115 | 4.868653 | 4.078821 | — | — | — |
| local_stream_protocol.test | LINK | 0.856828 | 4.581708 | 3.895184 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.887629 | 4.626302 | 3.873345 | — | — | — |
| placeholders.test | LINK | 0.149366 | 0.347592 | 0.415465 | — | — | — |
| placeholders_select.test | LINK | 0.149219 | 0.349430 | 0.418001 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.423665 | 0.947571 | 1.204510 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.431798 | 0.997174 | 1.468858 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.411935 | 0.954009 | 1.182803 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.429038 | 1.013288 | 1.445765 | — | — | — |
| posix_descriptor_base.test | LINK | 0.161033 | 0.368605 | 0.404071 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.159149 | 0.356059 | 0.396942 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.888933 | 4.716346 | 3.768173 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.914750 | 4.766437 | 3.838336 | — | — | — |
| prepend.test | RUN | 0.668483 | 3.841788 | 2.981803 | 0.001573 | 0.001579 | 0.001365 |
| prepend_select.test | RUN | 0.673319 | 3.907571 | 2.958670 | 0.001588 | 0.001547 | 0.001472 |
| random_access_file.test | LINK | 0.389995 | 0.861544 | 0.968693 | — | — | — |
| random_access_file_select.test | LINK | 0.394058 | 0.916179 | 1.233581 | — | — | — |
| read.test | RUN | 2.212876 | 22.739648 | 17.149526 | 0.002112 | 0.002155 | 0.002163 |
| read_select.test | RUN | 2.248624 | 22.724371 | 17.544692 | 0.002155 | 0.002188 | 0.001930 |
| read_at.test | RUN | 2.186434 | 29.099357 | 23.177482 | 0.002671 | 0.002958 | 0.002411 |
| read_at_select.test | RUN | 2.175218 | 29.004947 | 23.097787 | 0.002764 | 0.002787 | 0.002495 |
| read_until.test | RUN | 1.135183 | 9.011888 | 6.378468 | 0.001811 | 0.001677 | 0.001679 |
| read_until_select.test | RUN | 1.150489 | 9.090540 | 6.678464 | 0.001566 | 0.001820 | 0.001578 |
| readable_pipe.test | LINK | 0.702568 | 3.717018 | 3.006215 | — | — | — |
| readable_pipe_select.test | LINK | 0.722153 | 3.914030 | 3.127715 | — | — | — |
| recycling_allocator.test | RUN | 0.198862 | 0.544248 | 0.604210 | 0.001478 | 0.001382 | 0.001277 |
| recycling_allocator_select.test | RUN | 0.197572 | 0.543614 | 0.585842 | 0.001501 | 0.001516 | 0.001273 |
| redirect_disposition.test | LINK | 0.906628 | 5.267728 | 4.609777 | — | — | — |
| redirect_disposition_select.test | LINK | 0.924469 | 5.157790 | 4.560281 | — | — | — |
| redirect_error.test | LINK | 0.809368 | 4.306548 | 4.019579 | — | — | — |
| redirect_error_select.test | LINK | 0.826719 | 4.330725 | 3.977279 | — | — | — |
| registered_buffer.test | LINK | 0.196900 | 0.434323 | 0.546006 | — | — | — |
| registered_buffer_select.test | LINK | 0.196827 | 0.439031 | 0.534327 | — | — | — |
| signal_set.test | RUN | 0.677621 | 3.668812 | 2.812462 | 0.001425 | 0.001557 | 0.001420 |
| signal_set_select.test | RUN | 0.714717 | 3.843441 | 3.061996 | 0.001528 | 0.001612 | 0.001556 |
| signal_set_base.test | LINK | 0.161005 | 0.342869 | 0.403885 | — | — | — |
| signal_set_base_select.test | LINK | 0.164404 | 0.346794 | 0.408256 | — | — | — |
| socket_base.test | RUN | 0.826241 | 5.228493 | 4.301135 | 0.001834 | 0.001483 | 0.001602 |
| socket_base_select.test | RUN | 0.831555 | 5.136951 | 4.244607 | 0.001631 | 0.001598 | 0.001520 |
| spawn.test | RUN | 1.376440 | 8.791896 | 7.356899 | 0.001882 | 0.001765 | 0.001662 |
| spawn_select.test | RUN | 1.387894 | 8.773026 | 7.336099 | 0.001546 | 0.001825 | 0.001676 |
| static_thread_pool.test | RUN | 0.362951 | 0.829042 | 0.965257 | 0.001375 | 0.001668 | 0.001384 |
| static_thread_pool_select.test | RUN | 0.379915 | 0.880213 | 1.248851 | 0.001303 | 0.001391 | 0.001332 |
| steady_timer.test | LINK | 0.397060 | 0.933631 | 1.349420 | — | — | — |
| steady_timer_select.test | LINK | 0.400848 | 0.958999 | 1.390625 | — | — | — |
| strand.test | RUN | 0.880158 | 4.953142 | 4.401359 | 0.002238 | 0.002390 | 0.002234 |
| strand_select.test | RUN | 0.889430 | 4.889678 | 4.378414 | 0.002181 | 0.001878 | 0.001945 |
| stream_file.test | LINK | 0.373322 | 0.748727 | 1.010825 | — | — | — |
| stream_file_select.test | LINK | 0.391718 | 0.618451 | 1.260231 | — | — | — |
| streambuf.test | RUN | 0.231480 | 0.453639 | 0.704494 | 0.001533 | 0.001169 | 0.001017 |
| streambuf_select.test | RUN | 0.224580 | 0.468396 | 0.679473 | 0.001046 | 0.001152 | 0.001049 |
| system_timer.test | LINK | 0.544729 | 3.108086 | 2.544713 | — | — | — |
| system_timer_select.test | LINK | 0.559076 | 3.015151 | 2.444361 | — | — | — |
| system_context.test | LINK | 0.230179 | 0.524676 | 0.589037 | — | — | — |
| system_context_select.test | LINK | 0.241511 | 0.555330 | 0.739415 | — | — | — |
| system_executor.test | LINK | 0.331056 | 1.760732 | 1.206660 | — | — | — |
| system_executor_select.test | LINK | 0.333156 | 1.696623 | 1.306186 | — | — | — |
| this_coro.test | LINK | 0.088565 | 0.199260 | 0.232340 | — | — | — |
| this_coro_select.test | LINK | 0.087540 | 0.199370 | 0.235308 | — | — | — |
| thread_pool.test | RUN | 0.396295 | 2.989202 | 1.560782 | 0.002380 | 0.002874 | 0.002260 |
| thread_pool_select.test | RUN | 0.416773 | 3.089596 | 1.710794 | 0.002206 | 0.002601 | 0.002179 |
| time_traits.test | LINK | 0.204049 | 0.653296 | 0.468727 | — | — | — |
| time_traits_select.test | LINK | 0.196651 | 0.656256 | 0.473316 | — | — | — |
| ts_buffer.test | LINK | 0.190456 | 0.731420 | 0.680792 | — | — | — |
| ts_buffer_select.test | LINK | 0.195149 | 0.729811 | 0.607562 | — | — | — |
| ts_executor.test | LINK | 0.278704 | 1.016845 | 1.294882 | — | — | — |
| ts_executor_select.test | LINK | 0.287811 | 1.071774 | 1.571215 | — | — | — |
| ts_internet.test | LINK | 0.297672 | 1.092170 | 1.618878 | — | — | — |
| ts_internet_select.test | LINK | 0.309686 | 1.150584 | 1.647684 | — | — | — |
| ts_io_context.test | LINK | 0.247365 | 0.863670 | 0.998983 | — | — | — |
| ts_io_context_select.test | LINK | 0.259368 | 0.906671 | 1.263844 | — | — | — |
| ts_net.test | LINK | 0.360980 | 1.345991 | 1.993666 | — | — | — |
| ts_net_select.test | LINK | 0.371210 | 1.372854 | 2.028171 | — | — | — |
| ts_netfwd.test | LINK | 0.364895 | 1.353808 | 2.015409 | — | — | — |
| ts_netfwd_select.test | LINK | 0.374629 | 1.386327 | 2.039557 | — | — | — |
| ts_socket.test | LINK | 0.293239 | 1.076927 | 1.529816 | — | — | — |
| ts_socket_select.test | LINK | 0.303992 | 1.098077 | 1.567830 | — | — | — |
| ts_timer.test | LINK | 0.264516 | 0.962776 | 1.337756 | — | — | — |
| ts_timer_select.test | LINK | 0.271902 | 0.980712 | 1.366562 | — | — | — |
| use_awaitable.test | LINK | 0.083407 | 0.314363 | 0.378030 | — | — | — |
| use_awaitable_select.test | LINK | 0.084978 | 0.314143 | 0.381649 | — | — | — |
| wait_traits.test | LINK | 0.084938 | 0.315370 | 0.372791 | — | — | — |
| wait_traits_select.test | LINK | 0.086413 | 0.319472 | 0.374600 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.083202 | 0.317873 | 0.371654 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.088744 | 0.309739 | 0.372529 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.088893 | 0.308036 | 0.371584 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.084359 | 0.321862 | 0.377028 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.083856 | 0.319787 | 0.379239 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.086180 | 0.318489 | 0.367704 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.086407 | 0.314948 | 0.373990 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.087824 | 0.316415 | 0.363254 | — | — | — |
| windows_object_handle.test | LINK | 0.244869 | 0.872375 | 1.015128 | — | — | — |
| windows_object_handle_select.test | LINK | 0.252738 | 0.929650 | 1.271943 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.306477 | 0.921666 | 1.094510 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.391133 | 0.974732 | 1.354167 | — | — | — |
| windows_random_access_handle.test | LINK | 0.380591 | 0.862932 | 0.996326 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.400822 | 0.915285 | 1.270430 | — | — | — |
| windows_stream_handle.test | LINK | 0.376336 | 0.860864 | 1.011377 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.401540 | 0.915663 | 1.269183 | — | — | — |
| writable_pipe.test | LINK | 0.722558 | 3.755354 | 3.186165 | — | — | — |
| writable_pipe_select.test | LINK | 0.754988 | 3.954874 | 3.335083 | — | — | — |
| write.test | RUN | 2.201244 | 18.895116 | 17.244744 | 0.002202 | 0.002108 | 0.002094 |
| write_select.test | RUN | 2.205151 | 18.838596 | 17.508368 | 0.002026 | 0.002137 | 0.002062 |
| write_at.test | RUN | 2.226522 | 24.730980 | 21.781986 | 0.002480 | 0.002460 | 0.002284 |
| write_at_select.test | RUN | 2.231775 | 24.613394 | 22.035706 | 0.002505 | 0.002565 | 0.002323 |
| any_executor.test | RUN | 0.856283 | 8.169101 | 6.967045 | 0.002180 | 0.002038 | 0.002075 |
| blocking.test | RUN | 1.921597 | 11.116458 | 14.530797 | 0.004884 | 0.004868 | 0.004640 |
| blocking_adaptation.test | RUN | 0.967033 | 4.816989 | 6.660141 | 0.002625 | 0.002859 | 0.002782 |
| context_as.test | RUN | 0.565946 | 3.370150 | 2.226972 | 0.001434 | 0.001749 | 0.001699 |
| executor.test | RUN | 0.142196 | 0.324635 | 0.375250 | 0.001600 | 0.001535 | 0.001392 |
| inline_exception_handling.test | RUN | 1.949427 | 10.627031 | 14.471455 | 0.004720 | 0.002895 | 0.003156 |
| invocable_archetype.test | RUN | 0.143545 | 0.328614 | 0.398075 | 0.001468 | 0.001534 | 0.001406 |
| mapping.test | RUN | 1.734968 | 10.054924 | 14.672179 | 0.003204 | 0.003082 | 0.003163 |
| outstanding_work.test | RUN | 0.904151 | 4.692677 | 6.351141 | 0.002793 | 0.002757 | 0.002809 |
| prefer_only.test | RUN | 0.286639 | 1.803805 | 1.419934 | 0.001527 | 0.001477 | 0.001375 |
| relationship.test | RUN | 0.745081 | 4.461655 | 5.375347 | 0.001917 | 0.002860 | 0.001954 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.989×, 0.989× | 1.004× |
| clang | 0.983× | 0.972×, 0.995× | 0.990× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001631s | 0.001609s | 0.001567s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001566s | 0.001561s | 0.001583s | byte equality observed |
| any_completion_handler.test | 8 | 0.001317s | 0.001280s | 0.001294s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001306s | 0.001288s | 0.001266s | byte equality observed |
| any_io_executor.test | 4 | 0.001546s | 0.001577s | 0.001569s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001597s | 0.001597s | 0.001601s | byte equality observed |
| append.test | 10 | 0.001229s | 0.001236s | 0.001232s | byte equality observed |
| append_select.test | 6 | 0.001223s | 0.001212s | 0.001194s | byte equality observed |
| as_tuple.test | 10 | 0.001312s | 0.001309s | 0.001267s | byte equality observed |
| as_tuple_select.test | 9 | 0.001252s | 0.001237s | 0.001227s | byte equality observed |
| bind_allocator.test | 1 | 0.001632s | 0.001562s | 0.001599s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001427s | 0.001422s | 0.001438s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001114s | 0.001082s | 0.001098s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001022s | 0.000998s | 0.001001s | byte equality observed |
| bind_executor.test | 1 | 0.001554s | 0.001533s | 0.001606s | byte equality observed |
| bind_executor_select.test | 1 | 0.001771s | 0.001741s | 0.001715s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001108s | 0.001132s | 0.001106s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001076s | 0.001110s | 0.001049s | byte equality observed |
| buffer.test | 10 | 0.001030s | 0.001055s | 0.001018s | byte equality observed |
| buffer_select.test | 10 | 0.001026s | 0.001020s | 0.001048s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001285s | 0.001292s | 0.001266s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001258s | 0.001298s | 0.001340s | byte equality observed |
| buffered_stream.test | 10 | 0.001264s | 0.001280s | 0.001269s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001254s | 0.001270s | 0.001266s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001267s | 0.001282s | 0.001272s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001270s | 0.001333s | 0.001267s | byte equality observed |
| buffers_iterator.test | 10 | 0.001042s | 0.001000s | 0.000990s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001023s | 0.001001s | 0.001016s | byte equality observed |
| cancel_after.test | 1 | 0.002828s | 0.002855s | 0.002724s | byte equality observed |
| cancel_after_select.test | 1 | 0.002532s | 0.002526s | 0.002222s | byte equality observed |
| cancel_at.test | 1 | 0.002825s | 0.002832s | 0.002799s | byte equality observed |
| cancel_at_select.test | 1 | 0.002860s | 0.002736s | 0.002750s | byte equality observed |
| co_composed.test | 10 | 0.001093s | 0.001029s | 0.001071s | byte equality observed |
| co_composed_select.test | 10 | 0.001041s | 0.000996s | 0.001043s | byte equality observed |
| compose.test | 1 | 0.001537s | 0.001594s | 0.001531s | byte equality observed |
| compose_select.test | 1 | 0.001360s | 0.001316s | 0.001342s | byte equality observed |
| composed.test | 1 | 0.001765s | 0.001736s | 0.001698s | byte equality observed |
| composed_select.test | 1 | 0.001565s | 0.001458s | 0.001463s | byte equality observed |
| config.test | 10 | 0.001140s | 0.001132s | 0.001116s | byte equality observed |
| config_select.test | 10 | 0.001107s | 0.001110s | 0.001114s | byte equality observed |
| connect_pipe.test | 10 | 0.001142s | 0.001118s | 0.001098s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001116s | 0.001059s | 0.001088s | byte equality observed |
| consign.test | 10 | 0.001092s | 0.001069s | 0.001096s | byte equality observed |
| consign_select.test | 10 | 0.001083s | 0.001021s | 0.001070s | byte equality observed |
| deadline_timer.test | 1 | 0.002222s | 0.002195s | 0.002294s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002021s | 0.002060s | 0.002047s | byte equality observed |
| deferred.test | 10 | 0.000997s | 0.000991s | 0.000999s | byte equality observed |
| deferred_select.test | 10 | 0.000932s | 0.000939s | 0.000918s | byte equality observed |
| disposition.test | 10 | 0.000990s | 0.000997s | 0.000975s | byte equality observed |
| disposition_select.test | 10 | 0.000995s | 0.000966s | 0.000985s | byte equality observed |
| error.test | 10 | 0.000972s | 0.000948s | 0.000953s | byte equality observed |
| error_select.test | 10 | 0.000962s | 0.000963s | 0.000935s | byte equality observed |
| inline_executor.test | 10 | 0.000964s | 0.000962s | 0.000940s | byte equality observed |
| inline_executor_select.test | 10 | 0.000954s | 0.000950s | 0.000946s | byte equality observed |
| inline_or_executor.test | 10 | 0.000964s | 0.000948s | 0.000955s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000968s | 0.000959s | 0.000946s | byte equality observed |
| io_context.test | 1 | 0.001877s | 0.001939s | 0.001896s | byte equality observed |
| io_context_select.test | 1 | 0.002056s | 0.002009s | 0.002109s | byte equality observed |
| io_context_strand.test | 1 | 0.002136s | 0.002128s | 0.002126s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001880s | 0.001883s | 0.001975s | byte equality observed |
| ip_host_name.test | 10 | 0.000996s | 0.000996s | 0.001009s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000915s | 0.000937s | 0.000927s | byte equality observed |
| ip_icmp.test | 10 | 0.000947s | 0.000958s | 0.000940s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000943s | 0.000966s | 0.000945s | byte equality observed |
| ip_multicast.test | 10 | 0.001041s | 0.001043s | 0.001023s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001023s | 0.000999s | 0.000996s | byte equality observed |
| ip_tcp.test | 10 | 0.001331s | 0.001298s | 0.001276s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001306s | 0.001234s | 0.001274s | byte equality observed |
| ip_udp.test | 10 | 0.001079s | 0.001021s | 0.001047s | byte equality observed |
| ip_udp_select.test | 10 | 0.001059s | 0.001033s | 0.001041s | byte equality observed |
| ip_unicast.test | 10 | 0.001012s | 0.000994s | 0.000997s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001007s | 0.000990s | 0.000988s | byte equality observed |
| ip_v6_only.test | 10 | 0.001011s | 0.000995s | 0.001015s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001015s | 0.000999s | 0.000986s | byte equality observed |
| is_read_buffered.test | 10 | 0.000940s | 0.000905s | 0.000927s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000934s | 0.000920s | 0.000924s | byte equality observed |
| is_write_buffered.test | 10 | 0.000938s | 0.000923s | 0.000929s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000953s | 0.000953s | 0.000896s | byte equality observed |
| prepend.test | 10 | 0.001004s | 0.001069s | 0.000973s | byte equality observed |
| prepend_select.test | 10 | 0.000980s | 0.001025s | 0.000940s | byte equality observed |
| read.test | 10 | 0.001399s | 0.001440s | 0.001337s | byte equality observed |
| read_at.test | 10 | 0.001904s | 0.001924s | 0.001708s | byte equality observed |
| read_at_select.test | 10 | 0.001920s | 0.001964s | 0.001739s | byte equality observed |
| read_select.test | 10 | 0.001501s | 0.001482s | 0.001420s | byte equality observed |
| read_until.test | 10 | 0.001213s | 0.001181s | 0.001209s | byte equality observed |
| read_until_select.test | 10 | 0.001221s | 0.001163s | 0.001213s | byte equality observed |
| recycling_allocator.test | 10 | 0.000979s | 0.000971s | 0.001014s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001014s | 0.001031s | 0.000988s | byte equality observed |
| signal_set.test | 10 | 0.001035s | 0.001061s | 0.001029s | byte equality observed |
| signal_set_select.test | 10 | 0.001033s | 0.001032s | 0.001063s | byte equality observed |
| socket_base.test | 10 | 0.001115s | 0.001124s | 0.001135s | byte equality observed |
| socket_base_select.test | 10 | 0.001122s | 0.001086s | 0.001117s | byte equality observed |
| spawn.test | 10 | 0.001214s | 0.001202s | 0.001200s | byte equality observed |
| spawn_select.test | 10 | 0.001243s | 0.001220s | 0.001242s | byte equality observed |
| static_thread_pool.test | 10 | 0.001004s | 0.001002s | 0.001002s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000970s | 0.000963s | 0.000958s | byte equality observed |
| strand.test | 1 | 0.001902s | 0.001867s | 0.001856s | byte equality observed |
| strand_select.test | 1 | 0.001578s | 0.001571s | 0.001673s | byte equality observed |
| streambuf.test | 10 | 0.001059s | 0.001052s | 0.001066s | byte equality observed |
| streambuf_select.test | 10 | 0.001072s | 0.001055s | 0.001050s | byte equality observed |
| thread_pool.test | 9 | 0.002324s | 0.002257s | 0.002288s | byte equality observed |
| thread_pool_select.test | 9 | 0.002309s | 0.002228s | 0.002245s | byte equality observed |
| write.test | 10 | 0.001572s | 0.001452s | 0.001482s | byte equality observed |
| write_at.test | 10 | 0.001694s | 0.001672s | 0.001615s | byte equality observed |
| write_at_select.test | 10 | 0.001624s | 0.001598s | 0.001631s | byte equality observed |
| write_select.test | 10 | 0.001522s | 0.001445s | 0.001491s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43654890423).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
