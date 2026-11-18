# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.524011 | 3.476557 | 2.956649 | 0.001735 | 0.002027 | 0.001702 |
| any_completion_executor_select.test | RUN | 0.537008 | 3.521119 | 3.130983 | 0.001797 | 0.001956 | 0.001759 |
| any_completion_handler.test | RUN | 0.602048 | 3.174675 | 2.729439 | 0.001355 | 0.001379 | 0.001420 |
| any_completion_handler_select.test | RUN | 0.594280 | 3.250253 | 2.919384 | 0.001292 | 0.001511 | 0.001311 |
| any_io_executor.test | RUN | 0.552892 | 3.741815 | 3.235684 | 0.001738 | 0.001855 | 0.002027 |
| any_io_executor_select.test | RUN | 0.572777 | 3.690756 | 3.377841 | 0.001843 | 0.002017 | 0.001634 |
| append.test | RUN | 0.493637 | 3.001403 | 2.418235 | 0.001288 | 0.001525 | 0.001429 |
| append_select.test | RUN | 0.521658 | 3.041775 | 2.414079 | 0.001426 | 0.001509 | 0.001491 |
| as_tuple.test | RUN | 0.627484 | 3.654573 | 3.436654 | 0.001456 | 0.001550 | 0.001531 |
| as_tuple_select.test | RUN | 0.686513 | 3.608317 | 3.399660 | 0.001370 | 0.001688 | 0.001378 |
| associated_allocator.test | LINK | 0.128587 | 0.281265 | 0.358623 | — | — | — |
| associated_allocator_select.test | LINK | 0.133888 | 0.288973 | 0.365940 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.145235 | 0.312304 | 0.387016 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.139551 | 0.320564 | 0.393016 | — | — | — |
| associated_executor.test | LINK | 0.214460 | 0.551566 | 0.677525 | — | — | — |
| associated_executor_select.test | LINK | 0.206807 | 0.551203 | 0.666316 | — | — | — |
| associated_immediate_executor.test | LINK | 0.197328 | 0.511850 | 0.588981 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.191827 | 0.511730 | 0.588170 | — | — | — |
| associator.test | LINK | 0.108222 | 0.240354 | 0.297857 | — | — | — |
| associator_select.test | LINK | 0.104707 | 0.240928 | 0.297600 | — | — | — |
| awaitable.test | LINK | 0.107833 | 0.240380 | 0.291559 | — | — | — |
| awaitable_select.test | LINK | 0.108471 | 0.243171 | 0.296693 | — | — | — |
| basic_datagram_socket.test | LINK | 0.330948 | 0.779832 | 1.120557 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.329105 | 0.805969 | 1.148747 | — | — | — |
| basic_deadline_timer.test | LINK | 0.394948 | 0.898781 | 1.272268 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.400557 | 0.936692 | 1.294278 | — | — | — |
| basic_file.test | LINK | 0.104760 | 0.244778 | 0.293069 | — | — | — |
| basic_file_select.test | LINK | 0.108222 | 0.244655 | 0.291690 | — | — | — |
| basic_random_access_file.test | LINK | 0.103375 | 0.236639 | 0.289452 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.109287 | 0.242776 | 0.301160 | — | — | — |
| basic_raw_socket.test | LINK | 0.326772 | 0.774909 | 1.122463 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.334850 | 0.793306 | 1.148550 | — | — | — |
| basic_readable_pipe.test | LINK | 0.320685 | 0.746268 | 0.967607 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.324851 | 0.794484 | 1.182687 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.326862 | 0.771278 | 1.133475 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.333418 | 0.788118 | 1.164869 | — | — | — |
| basic_signal_set.test | LINK | 0.307258 | 0.714353 | 0.890389 | — | — | — |
| basic_signal_set_select.test | LINK | 0.309703 | 0.765291 | 1.107599 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.333991 | 0.774440 | 1.130131 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.352703 | 0.791613 | 1.143219 | — | — | — |
| basic_stream_file.test | LINK | 0.108891 | 0.247457 | 0.301098 | — | — | — |
| basic_stream_file_select.test | LINK | 0.105262 | 0.245391 | 0.300553 | — | — | — |
| basic_stream_socket.test | LINK | 0.335467 | 0.771320 | 1.118398 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.336390 | 0.793677 | 1.144534 | — | — | — |
| basic_streambuf.test | LINK | 0.159151 | 0.349709 | 0.435391 | — | — | — |
| basic_streambuf_select.test | LINK | 0.167172 | 0.348011 | 0.424769 | — | — | — |
| basic_waitable_timer.test | LINK | 0.314943 | 0.713276 | 1.067113 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.309945 | 0.722391 | 1.075258 | — | — | — |
| basic_writable_pipe.test | LINK | 0.316386 | 0.744347 | 0.988132 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.321303 | 0.794757 | 1.188906 | — | — | — |
| bind_allocator.test | RUN | 0.545405 | 3.005690 | 2.637890 | 0.001739 | 0.001840 | 0.001685 |
| bind_allocator_select.test | RUN | 0.561890 | 3.108129 | 2.664739 | 0.001652 | 0.001436 | 0.001600 |
| bind_cancellation_slot.test | RUN | 0.549662 | 3.080022 | 2.663903 | 0.001611 | 0.001070 | 0.000931 |
| bind_cancellation_slot_select.test | RUN | 0.570938 | 3.045493 | 2.595615 | 0.000927 | 0.001057 | 0.001017 |
| bind_executor.test | RUN | 0.379554 | 2.095509 | 1.675392 | 0.001562 | 0.001714 | 0.001639 |
| bind_executor_select.test | RUN | 0.393796 | 2.133270 | 1.665675 | 0.001413 | 0.001765 | 0.001532 |
| bind_immediate_executor.test | RUN | 0.281728 | 1.728955 | 1.062951 | 0.000987 | 0.001100 | 0.000984 |
| bind_immediate_executor_select.test | RUN | 0.289357 | 1.698967 | 1.172391 | 0.000904 | 0.001047 | 0.000983 |
| buffer.test | RUN | 0.165484 | 0.716719 | 0.626046 | 0.000902 | 0.001567 | 0.000988 |
| buffer_select.test | RUN | 0.164729 | 0.715669 | 0.629836 | 0.000933 | 0.000974 | 0.000962 |
| buffer_registration.test | LINK | 0.128068 | 0.353388 | 0.367499 | — | — | — |
| buffer_registration_select.test | LINK | 0.126678 | 0.349500 | 0.364821 | — | — | — |
| buffered_read_stream.test | RUN | 0.642512 | 4.608942 | 3.845770 | 0.001215 | 0.001846 | 0.001710 |
| buffered_read_stream_select.test | RUN | 0.657241 | 4.805549 | 3.842100 | 0.001144 | 0.001863 | 0.001773 |
| buffered_stream.test | RUN | 0.845106 | 7.458148 | 6.437096 | 0.001619 | 0.002080 | 0.001602 |
| buffered_stream_select.test | RUN | 0.933094 | 7.477052 | 6.413127 | 0.001774 | 0.001921 | 0.001624 |
| buffered_write_stream.test | RUN | 1.082383 | 6.475810 | 5.649654 | 0.001830 | 0.002036 | 0.001538 |
| buffered_write_stream_select.test | RUN | 1.108701 | 6.559554 | 5.425851 | 0.001716 | 0.001794 | 0.001614 |
| buffers_iterator.test | RUN | 0.311471 | 0.567328 | 0.886844 | 0.001213 | 0.001564 | 0.001406 |
| buffers_iterator_select.test | RUN | 0.322468 | 0.563876 | 0.904776 | 0.001256 | 0.001437 | 0.001314 |
| cancel_after.test | RUN | 0.898483 | 5.031305 | 4.119114 | 0.003791 | 0.004062 | 0.003406 |
| cancel_after_select.test | RUN | 0.925585 | 5.001791 | 4.040698 | 0.003444 | 0.003120 | 0.002923 |
| cancel_at.test | RUN | 0.824310 | 4.512715 | 4.009245 | 0.003014 | 0.003384 | 0.003011 |
| cancel_at_select.test | RUN | 0.723051 | 4.392384 | 3.975290 | 0.003107 | 0.003437 | 0.002888 |
| cancellation_signal.test | LINK | 0.090432 | 0.202589 | 0.237117 | — | — | — |
| cancellation_signal_select.test | LINK | 0.088263 | 0.201962 | 0.233137 | — | — | — |
| cancellation_state.test | LINK | 0.091353 | 0.202491 | 0.278330 | — | — | — |
| cancellation_state_select.test | LINK | 0.089983 | 0.203815 | 0.365296 | — | — | — |
| cancellation_type.test | LINK | 0.095300 | 0.160848 | 0.292242 | — | — | — |
| cancellation_type_select.test | LINK | 0.101298 | 0.158566 | 0.290696 | — | — | — |
| co_composed.test | RUN | 0.104849 | 0.160046 | 0.287965 | 0.001077 | 0.000901 | 0.001120 |
| co_composed_select.test | RUN | 0.099923 | 0.159605 | 0.287068 | 0.001109 | 0.001247 | 0.001110 |
| co_spawn.test | LINK | 0.105481 | 0.218198 | 0.290724 | — | — | — |
| co_spawn_select.test | LINK | 0.099909 | 0.243328 | 0.290859 | — | — | — |
| completion_condition.test | LINK | 0.129757 | 0.372300 | 0.388076 | — | — | — |
| completion_condition_select.test | LINK | 0.130282 | 0.373079 | 0.396307 | — | — | — |
| compose.test | RUN | 0.680726 | 3.805005 | 3.351860 | 0.001983 | 0.002284 | 0.001756 |
| compose_select.test | RUN | 0.688271 | 3.778936 | 3.260789 | 0.001482 | 0.002066 | 0.001779 |
| composed.test | RUN | 0.674066 | 3.754246 | 3.239147 | 0.001378 | 0.001638 | 0.001377 |
| composed_select.test | RUN | 0.685930 | 3.711046 | 3.197779 | 0.001287 | 0.001559 | 0.001440 |
| config.test | RUN | 0.361834 | 2.464781 | 1.448638 | 0.001430 | 0.001464 | 0.001280 |
| config_select.test | RUN | 0.381887 | 2.537368 | 1.597097 | 0.001313 | 0.001636 | 0.001419 |
| connect.test | LINK | 1.092526 | 8.111906 | 6.962058 | — | — | — |
| connect_select.test | LINK | 1.106585 | 8.090869 | 6.986473 | — | — | — |
| connect_pipe.test | RUN | 0.572060 | 3.052255 | 2.570611 | 0.001401 | 0.001478 | 0.001319 |
| connect_pipe_select.test | RUN | 0.598127 | 3.191728 | 2.741858 | 0.001341 | 0.001556 | 0.001390 |
| consign.test | RUN | 0.500755 | 2.996275 | 2.366858 | 0.001409 | 0.001382 | 0.001268 |
| consign_select.test | RUN | 0.505399 | 3.041242 | 2.360711 | 0.001367 | 0.001570 | 0.001360 |
| coroutine.test | LINK | 0.104617 | 0.289186 | 0.318367 | — | — | — |
| coroutine_select.test | LINK | 0.104984 | 0.287866 | 0.332544 | — | — | — |
| deadline_timer.test | RUN | 0.743055 | 3.936134 | 3.414640 | 0.002664 | 0.003266 | 0.002974 |
| deadline_timer_select.test | RUN | 0.751536 | 3.873329 | 3.384802 | 0.002501 | 0.002824 | 0.002654 |
| deferred.test | RUN | 0.114255 | 0.268220 | 0.323884 | 0.001181 | 0.001418 | 0.001216 |
| deferred_select.test | RUN | 0.112028 | 0.267135 | 0.318148 | 0.001136 | 0.001516 | 0.001224 |
| detached.test | LINK | 0.127915 | 0.295040 | 0.352818 | — | — | — |
| detached_select.test | LINK | 0.131294 | 0.291733 | 0.360784 | — | — | — |
| disposition.test | RUN | 0.123523 | 0.710346 | 0.664343 | 0.000993 | 0.001416 | 0.001263 |
| disposition_select.test | RUN | 0.122389 | 0.700750 | 0.664214 | 0.000919 | 0.001406 | 0.001339 |
| error.test | RUN | 0.113688 | 0.679222 | 0.606081 | 0.000916 | 0.001511 | 0.001193 |
| error_select.test | RUN | 0.113700 | 0.677181 | 0.588791 | 0.000933 | 0.001490 | 0.001243 |
| file_base.test | LINK | 0.138732 | 0.558020 | 0.638589 | — | — | — |
| file_base_select.test | LINK | 0.138023 | 0.561428 | 0.552894 | — | — | — |
| fwd_first.test | LINK | 0.324114 | 0.928664 | 1.160581 | — | — | — |
| fwd_last.test | LINK | 0.322610 | 0.827595 | 1.150540 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.118686 | 0.323435 | 0.410729 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.117891 | 0.324944 | 0.406264 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.556256 | 3.051115 | 2.453215 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.552615 | 3.156188 | 2.412516 | — | — | — |
| generic_raw_protocol.test | LINK | 0.548392 | 3.064655 | 2.450807 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.546063 | 3.164067 | 2.399447 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.480320 | 2.597927 | 2.096380 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.479197 | 2.631864 | 2.057988 | — | — | — |
| generic_stream_protocol.test | LINK | 0.503185 | 2.787375 | 2.223704 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.505062 | 2.853941 | 2.227688 | — | — | — |
| high_resolution_timer.test | LINK | 0.205455 | 0.490998 | 0.650811 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.208806 | 0.507252 | 0.662852 | — | — | — |
| immediate.test | LINK | 0.139847 | 0.376276 | 0.399736 | — | — | — |
| immediate_select.test | LINK | 0.139192 | 0.377479 | 0.401491 | — | — | — |
| inline_executor.test | RUN | 0.173708 | 0.590306 | 0.598837 | 0.000937 | 0.001056 | 0.000930 |
| inline_executor_select.test | RUN | 0.172151 | 0.589479 | 0.597980 | 0.000950 | 0.001027 | 0.000908 |
| inline_or_executor.test | RUN | 0.293449 | 1.814333 | 1.214717 | 0.000897 | 0.001119 | 0.000970 |
| inline_or_executor_select.test | RUN | 0.300203 | 1.839154 | 1.321330 | 0.001181 | 0.001077 | 0.000937 |
| io_context.test | RUN | 0.435617 | 2.775870 | 2.097586 | 0.001954 | 0.002179 | 0.001919 |
| io_context_select.test | RUN | 0.439646 | 2.735144 | 2.108314 | 0.001684 | 0.002172 | 0.001824 |
| io_context_strand.test | RUN | 0.417237 | 2.347878 | 1.833526 | 0.001819 | 0.001821 | 0.001806 |
| io_context_strand_select.test | RUN | 0.421716 | 2.341766 | 1.836646 | 0.001419 | 0.001693 | 0.001762 |
| ip_address.test | LINK | 0.146714 | 0.523966 | 0.514300 | — | — | — |
| ip_address_select.test | LINK | 0.144737 | 0.520900 | 0.506347 | — | — | — |
| ip_address_v4.test | LINK | 0.150204 | 0.553951 | 0.900329 | — | — | — |
| ip_address_v4_select.test | LINK | 0.150233 | 0.552655 | 0.858038 | — | — | — |
| ip_address_v6.test | LINK | 0.171822 | 0.724017 | 1.112995 | — | — | — |
| ip_address_v6_select.test | LINK | 0.172898 | 0.722952 | 1.096903 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.126077 | 0.343355 | 0.707615 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.124769 | 0.341950 | 0.700572 | — | — | — |
| ip_basic_resolver.test | LINK | 0.208565 | 0.503536 | 1.053649 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.211892 | 0.511748 | 1.085703 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.069920 | 0.162614 | 0.295177 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.068541 | 0.161504 | 0.296180 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.127422 | 0.415999 | 0.685741 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.126621 | 0.481708 | 0.684058 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.119638 | 0.375288 | 0.657556 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.118934 | 0.487351 | 0.657903 | — | — | — |
| ip_host_name.test | RUN | 0.129490 | 0.665135 | 0.750319 | 0.000904 | 0.001313 | 0.001272 |
| ip_host_name_select.test | RUN | 0.129269 | 0.653537 | 0.748295 | 0.000952 | 0.001247 | 0.001117 |
| ip_icmp.test | RUN | 0.691955 | 6.476938 | 5.008418 | 0.000938 | 0.001484 | 0.001178 |
| ip_icmp_select.test | RUN | 0.691373 | 6.594674 | 4.864770 | 0.000964 | 0.001690 | 0.001194 |
| ip_multicast.test | RUN | 0.378020 | 3.189237 | 2.775988 | 0.001032 | 0.001496 | 0.001280 |
| ip_multicast_select.test | RUN | 0.382909 | 3.176967 | 2.740738 | 0.000982 | 0.001282 | 0.001404 |
| ip_resolver_query_base.test | LINK | 0.079727 | 0.266786 | 0.313669 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.079491 | 0.264935 | 0.309380 | — | — | — |
| ip_tcp.test | RUN | 1.018453 | 9.440725 | 7.781454 | 0.001277 | 0.002085 | 0.001758 |
| ip_tcp_select.test | RUN | 1.022806 | 9.886050 | 7.542489 | 0.001193 | 0.002104 | 0.001846 |
| ip_udp.test | RUN | 0.738694 | 6.800818 | 5.303423 | 0.001156 | 0.001700 | 0.001339 |
| ip_udp_select.test | RUN | 0.734105 | 6.923691 | 5.172349 | 0.000962 | 0.001834 | 0.001564 |
| ip_unicast.test | RUN | 0.352563 | 2.918404 | 2.443304 | 0.001016 | 0.001497 | 0.001232 |
| ip_unicast_select.test | RUN | 0.355950 | 2.916142 | 2.411679 | 0.000940 | 0.001487 | 0.000999 |
| ip_v6_only.test | RUN | 0.364640 | 2.994145 | 2.521557 | 0.000972 | 0.001490 | 0.001449 |
| ip_v6_only_select.test | RUN | 0.373480 | 3.100217 | 2.516538 | 0.000953 | 0.001510 | 0.001428 |
| is_read_buffered.test | RUN | 0.245531 | 0.878358 | 1.286608 | 0.000878 | 0.001220 | 0.001172 |
| is_read_buffered_select.test | RUN | 0.250615 | 0.898953 | 1.310398 | 0.000935 | 0.001374 | 0.001108 |
| is_write_buffered.test | RUN | 0.242644 | 0.871512 | 1.284553 | 0.000943 | 0.001268 | 0.001364 |
| is_write_buffered_select.test | RUN | 0.247021 | 0.890178 | 1.318256 | 0.000891 | 0.001480 | 0.001285 |
| local_basic_endpoint.test | LINK | 0.120230 | 0.482291 | 0.674096 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.120196 | 0.478030 | 0.670037 | — | — | — |
| local_connect_pair.test | LINK | 0.337447 | 2.956015 | 2.354134 | — | — | — |
| local_connect_pair_select.test | LINK | 0.344074 | 2.924452 | 2.339545 | — | — | — |
| local_datagram_protocol.test | LINK | 0.469191 | 3.876121 | 3.371376 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.480093 | 3.918988 | 3.292958 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.478854 | 3.759759 | 3.335864 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.482469 | 3.830209 | 3.307082 | — | — | — |
| local_stream_protocol.test | LINK | 0.442544 | 3.559550 | 3.174251 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.451743 | 3.597956 | 3.113650 | — | — | — |
| placeholders.test | LINK | 0.077966 | 0.261949 | 0.336246 | — | — | — |
| placeholders_select.test | LINK | 0.076970 | 0.261379 | 0.334280 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.214678 | 0.722335 | 0.976273 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.221192 | 0.763398 | 1.179560 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.216889 | 0.727582 | 0.981705 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.224197 | 0.774829 | 1.176522 | — | — | — |
| posix_descriptor_base.test | LINK | 0.087172 | 0.267064 | 0.330781 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.086126 | 0.269581 | 0.320591 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.469592 | 3.569553 | 3.131281 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.481762 | 3.598945 | 3.191514 | — | — | — |
| prepend.test | RUN | 0.353631 | 2.883158 | 2.423501 | 0.001354 | 0.001322 | 0.001677 |
| prepend_select.test | RUN | 0.374134 | 2.960215 | 2.415062 | 0.001227 | 0.001450 | 0.001266 |
| random_access_file.test | LINK | 0.295860 | 0.657479 | 0.786719 | — | — | — |
| random_access_file_select.test | LINK | 0.303818 | 0.689913 | 0.987382 | — | — | — |
| read.test | RUN | 1.690203 | 18.058736 | 14.359264 | 0.001920 | 0.001962 | 0.002016 |
| read_select.test | RUN | 1.705070 | 18.072565 | 14.595211 | 0.001739 | 0.001668 | 0.002028 |
| read_at.test | RUN | 1.690625 | 23.827419 | 19.077862 | 0.002371 | 0.002514 | 0.002307 |
| read_at_select.test | RUN | 1.693538 | 23.850282 | 19.162303 | 0.002177 | 0.002316 | 0.002094 |
| read_until.test | RUN | 0.886951 | 7.162240 | 5.419053 | 0.001370 | 0.001347 | 0.001520 |
| read_until_select.test | RUN | 0.901469 | 7.168036 | 5.606655 | 0.001513 | 0.001403 | 0.001526 |
| readable_pipe.test | LINK | 0.539409 | 2.973213 | 2.441300 | — | — | — |
| readable_pipe_select.test | LINK | 0.559081 | 3.133498 | 2.591776 | — | — | — |
| recycling_allocator.test | RUN | 0.156230 | 0.403816 | 0.477411 | 0.001294 | 0.001222 | 0.001370 |
| recycling_allocator_select.test | RUN | 0.157953 | 0.415068 | 0.471660 | 0.001198 | 0.001355 | 0.001375 |
| redirect_disposition.test | LINK | 0.710231 | 4.101788 | 3.743633 | — | — | — |
| redirect_disposition_select.test | LINK | 0.723044 | 4.126888 | 3.732721 | — | — | — |
| redirect_error.test | LINK | 0.629158 | 3.436218 | 3.240007 | — | — | — |
| redirect_error_select.test | LINK | 0.640065 | 3.402388 | 3.238668 | — | — | — |
| registered_buffer.test | LINK | 0.159703 | 0.333664 | 0.432482 | — | — | — |
| registered_buffer_select.test | LINK | 0.152817 | 0.332792 | 0.431762 | — | — | — |
| signal_set.test | RUN | 0.517059 | 2.849837 | 2.270354 | 0.001230 | 0.001417 | 0.001277 |
| signal_set_select.test | RUN | 0.538905 | 2.988472 | 2.487783 | 0.001484 | 0.001285 | 0.001379 |
| signal_set_base.test | LINK | 0.118785 | 0.264495 | 0.307489 | — | — | — |
| signal_set_base_select.test | LINK | 0.121649 | 0.254758 | 0.307674 | — | — | — |
| socket_base.test | RUN | 0.643536 | 4.206521 | 3.412296 | 0.001544 | 0.001575 | 0.001605 |
| socket_base_select.test | RUN | 0.651128 | 4.070716 | 3.420369 | 0.001528 | 0.001516 | 0.001487 |
| spawn.test | RUN | 1.129928 | 7.055988 | 5.888694 | 0.001714 | 0.001595 | 0.001633 |
| spawn_select.test | RUN | 1.144075 | 6.955193 | 5.873491 | 0.001555 | 0.001633 | 0.001674 |
| static_thread_pool.test | RUN | 0.283109 | 0.641793 | 0.766647 | 0.001344 | 0.001258 | 0.001153 |
| static_thread_pool_select.test | RUN | 0.294794 | 0.686455 | 0.981185 | 0.001463 | 0.001156 | 0.001220 |
| steady_timer.test | LINK | 0.314689 | 0.717310 | 1.054548 | — | — | — |
| steady_timer_select.test | LINK | 0.324435 | 0.736086 | 1.093111 | — | — | — |
| strand.test | RUN | 0.698374 | 3.910772 | 3.589248 | 0.002178 | 0.001978 | 0.002182 |
| strand_select.test | RUN | 0.708406 | 3.894996 | 3.592499 | 0.001970 | 0.001596 | 0.002255 |
| stream_file.test | LINK | 0.290631 | 0.665373 | 0.788655 | — | — | — |
| stream_file_select.test | LINK | 0.308732 | 0.682226 | 1.007330 | — | — | — |
| streambuf.test | RUN | 0.183523 | 0.371456 | 0.563157 | 0.000980 | 0.000972 | 0.001228 |
| streambuf_select.test | RUN | 0.176665 | 0.371257 | 0.400485 | 0.000979 | 0.000952 | 0.000926 |
| system_timer.test | LINK | 0.462788 | 2.520306 | 2.286220 | — | — | — |
| system_timer_select.test | LINK | 0.465465 | 2.468818 | 2.094106 | — | — | — |
| system_context.test | LINK | 0.193773 | 0.427156 | 0.475624 | — | — | — |
| system_context_select.test | LINK | 0.202699 | 0.453488 | 0.596399 | — | — | — |
| system_executor.test | LINK | 0.264711 | 1.444793 | 0.966322 | — | — | — |
| system_executor_select.test | LINK | 0.275467 | 1.396297 | 1.069727 | — | — | — |
| this_coro.test | LINK | 0.072914 | 0.157901 | 0.188948 | — | — | — |
| this_coro_select.test | LINK | 0.073054 | 0.157970 | 0.189362 | — | — | — |
| thread_pool.test | RUN | 0.314768 | 1.849893 | 1.260869 | 0.001663 | 0.001722 | 0.001712 |
| thread_pool_select.test | RUN | 0.325582 | 1.883363 | 1.370714 | 0.001656 | 0.001723 | 0.001667 |
| time_traits.test | LINK | 0.163345 | 0.336043 | 0.385111 | — | — | — |
| time_traits_select.test | LINK | 0.168207 | 0.341119 | 0.384845 | — | — | — |
| ts_buffer.test | LINK | 0.158447 | 0.559865 | 0.408598 | — | — | — |
| ts_buffer_select.test | LINK | 0.156044 | 0.563789 | 0.406050 | — | — | — |
| ts_executor.test | LINK | 0.224408 | 0.791885 | 0.643332 | — | — | — |
| ts_executor_select.test | LINK | 0.236053 | 0.838078 | 0.789163 | — | — | — |
| ts_internet.test | LINK | 0.243778 | 0.854077 | 1.095606 | — | — | — |
| ts_internet_select.test | LINK | 0.252003 | 0.876419 | 1.298946 | — | — | — |
| ts_io_context.test | LINK | 0.199852 | 0.661225 | 0.544651 | — | — | — |
| ts_io_context_select.test | LINK | 0.206996 | 0.696219 | 0.977154 | — | — | — |
| ts_net.test | LINK | 0.297743 | 1.034753 | 1.567927 | — | — | — |
| ts_net_select.test | LINK | 0.301293 | 1.058098 | 1.600377 | — | — | — |
| ts_netfwd.test | LINK | 0.296037 | 1.042752 | 1.590607 | — | — | — |
| ts_netfwd_select.test | LINK | 0.300032 | 1.058844 | 1.630685 | — | — | — |
| ts_socket.test | LINK | 0.243638 | 0.813057 | 1.204997 | — | — | — |
| ts_socket_select.test | LINK | 0.246797 | 0.831365 | 1.231880 | — | — | — |
| ts_timer.test | LINK | 0.215525 | 0.722906 | 1.048624 | — | — | — |
| ts_timer_select.test | LINK | 0.222352 | 0.756062 | 1.083996 | — | — | — |
| use_awaitable.test | LINK | 0.072996 | 0.240986 | 0.295360 | — | — | — |
| use_awaitable_select.test | LINK | 0.083522 | 0.238323 | 0.290774 | — | — | — |
| wait_traits.test | LINK | 0.085809 | 0.242391 | 0.293020 | — | — | — |
| wait_traits_select.test | LINK | 0.073849 | 0.241174 | 0.293273 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.072804 | 0.241169 | 0.292409 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.071912 | 0.241508 | 0.301669 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.071629 | 0.239106 | 0.301319 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.071610 | 0.239185 | 0.292523 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.071590 | 0.237888 | 0.297536 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.071044 | 0.241354 | 0.298172 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.070993 | 0.235082 | 0.298354 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.071433 | 0.243053 | 0.298378 | — | — | — |
| windows_object_handle.test | LINK | 0.199027 | 0.662674 | 0.798550 | — | — | — |
| windows_object_handle_select.test | LINK | 0.209368 | 0.708135 | 1.009016 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.205808 | 0.694899 | 0.878472 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.216765 | 0.748901 | 1.082810 | — | — | — |
| windows_random_access_handle.test | LINK | 0.200604 | 0.667877 | 0.802431 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.211311 | 0.701697 | 0.984634 | — | — | — |
| windows_stream_handle.test | LINK | 0.202453 | 0.665781 | 0.800038 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.207967 | 0.712888 | 0.993559 | — | — | — |
| writable_pipe.test | LINK | 0.378751 | 2.988796 | 2.542368 | — | — | — |
| writable_pipe_select.test | LINK | 0.472032 | 3.102306 | 2.682321 | — | — | — |
| write.test | RUN | 1.685875 | 15.435329 | 13.990502 | 0.001863 | 0.001840 | 0.002138 |
| write_select.test | RUN | 1.706550 | 15.596857 | 14.268881 | 0.001801 | 0.001909 | 0.001874 |
| write_at.test | RUN | 1.750299 | 20.646277 | 18.263110 | 0.001994 | 0.002033 | 0.002251 |
| write_at_select.test | RUN | 1.747242 | 20.683571 | 18.429049 | 0.002083 | 0.001967 | 0.002333 |
| any_executor.test | RUN | 0.677626 | 6.835024 | 5.829648 | 0.001995 | 0.001913 | 0.002264 |
| blocking.test | RUN | 1.468276 | 9.048364 | 11.558902 | 0.003337 | 0.003325 | 0.003530 |
| blocking_adaptation.test | RUN | 0.742545 | 3.837348 | 5.191167 | 0.002036 | 0.001984 | 0.002053 |
| context_as.test | RUN | 0.429797 | 2.670553 | 1.760119 | 0.001469 | 0.001501 | 0.001579 |
| executor.test | RUN | 0.109431 | 0.245057 | 0.322883 | 0.001188 | 0.001373 | 0.001489 |
| inline_exception_handling.test | RUN | 1.469274 | 8.141552 | 10.805165 | 0.002778 | 0.002361 | 0.002408 |
| invocable_archetype.test | RUN | 0.106960 | 0.241649 | 0.301082 | 0.001333 | 0.001429 | 0.001500 |
| mapping.test | RUN | 1.357988 | 8.556762 | 11.561486 | 0.002997 | 0.002416 | 0.002374 |
| outstanding_work.test | RUN | 0.664360 | 3.577078 | 5.020974 | 0.002079 | 0.002132 | 0.002218 |
| prefer_only.test | RUN | 0.218538 | 1.466191 | 1.105787 | 0.001309 | 0.001386 | 0.001320 |
| relationship.test | RUN | 0.597404 | 3.513652 | 4.979127 | 0.001490 | 0.002160 | 0.001535 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.996×, 0.991× | 1.005× |
| clang | 0.981× | 0.987×, 0.976× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001197s | 0.001277s | 0.001233s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001215s | 0.001265s | 0.001231s | byte equality observed |
| any_completion_handler.test | 10 | 0.001020s | 0.001020s | 0.001005s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.000989s | 0.001030s | 0.001021s | byte equality observed |
| any_io_executor.test | 7 | 0.001195s | 0.001218s | 0.001201s | byte equality observed |
| any_io_executor_select.test | 10 | 0.001196s | 0.001218s | 0.001222s | byte equality observed |
| append.test | 9 | 0.000967s | 0.000977s | 0.000985s | byte equality observed |
| append_select.test | 10 | 0.000974s | 0.000960s | 0.000962s | byte equality observed |
| as_tuple.test | 10 | 0.001048s | 0.001041s | 0.001046s | byte equality observed |
| as_tuple_select.test | 10 | 0.000952s | 0.000989s | 0.000960s | byte equality observed |
| bind_allocator.test | 1 | 0.001462s | 0.001503s | 0.001476s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001108s | 0.001255s | 0.001191s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000908s | 0.000892s | 0.000880s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000821s | 0.000817s | 0.000808s | byte equality observed |
| bind_executor.test | 1 | 0.001491s | 0.001497s | 0.001451s | byte equality observed |
| bind_executor_select.test | 1 | 0.001778s | 0.001739s | 0.001611s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000888s | 0.000925s | 0.000902s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000865s | 0.000862s | 0.000844s | byte equality observed |
| buffer.test | 10 | 0.000851s | 0.000828s | 0.000808s | byte equality observed |
| buffer_select.test | 10 | 0.000827s | 0.000835s | 0.000823s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001028s | 0.001020s | 0.001014s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001006s | 0.001002s | 0.000997s | byte equality observed |
| buffered_stream.test | 10 | 0.001001s | 0.001023s | 0.000998s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001023s | 0.001017s | 0.000996s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001017s | 0.001003s | 0.001012s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001007s | 0.000995s | 0.001012s | byte equality observed |
| buffers_iterator.test | 10 | 0.000830s | 0.000815s | 0.000814s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000783s | 0.000800s | 0.000759s | byte equality observed |
| cancel_after.test | 1 | 0.003470s | 0.003323s | 0.002918s | byte equality observed |
| cancel_after_select.test | 1 | 0.002935s | 0.002782s | 0.002413s | byte equality observed |
| cancel_at.test | 1 | 0.003468s | 0.003472s | 0.003116s | byte equality observed |
| cancel_at_select.test | 1 | 0.003574s | 0.003549s | 0.002842s | byte equality observed |
| co_composed.test | 10 | 0.000859s | 0.000868s | 0.000840s | byte equality observed |
| co_composed_select.test | 10 | 0.000779s | 0.000802s | 0.000779s | byte equality observed |
| compose.test | 1 | 0.001550s | 0.001543s | 0.001450s | byte equality observed |
| compose_select.test | 1 | 0.001256s | 0.001197s | 0.001144s | byte equality observed |
| composed.test | 1 | 0.001827s | 0.001794s | 0.001671s | byte equality observed |
| composed_select.test | 1 | 0.001412s | 0.001365s | 0.001260s | byte equality observed |
| config.test | 10 | 0.000919s | 0.000922s | 0.000892s | byte equality observed |
| config_select.test | 10 | 0.000890s | 0.000860s | 0.000855s | byte equality observed |
| connect_pipe.test | 10 | 0.000911s | 0.000889s | 0.000881s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000883s | 0.000895s | 0.000876s | byte equality observed |
| consign.test | 10 | 0.000889s | 0.000893s | 0.000895s | byte equality observed |
| consign_select.test | 10 | 0.000822s | 0.000843s | 0.000828s | byte equality observed |
| deadline_timer.test | 1 | 0.002272s | 0.002240s | 0.002224s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001994s | 0.001936s | 0.001950s | byte equality observed |
| deferred.test | 10 | 0.000825s | 0.000824s | 0.000844s | byte equality observed |
| deferred_select.test | 10 | 0.000751s | 0.000746s | 0.000754s | byte equality observed |
| disposition.test | 10 | 0.000781s | 0.000776s | 0.000788s | byte equality observed |
| disposition_select.test | 10 | 0.000782s | 0.000776s | 0.000783s | byte equality observed |
| error.test | 10 | 0.000758s | 0.000767s | 0.000774s | byte equality observed |
| error_select.test | 10 | 0.000757s | 0.000762s | 0.000769s | byte equality observed |
| inline_executor.test | 10 | 0.000775s | 0.000761s | 0.000760s | byte equality observed |
| inline_executor_select.test | 10 | 0.000771s | 0.000762s | 0.000774s | byte equality observed |
| inline_or_executor.test | 10 | 0.000788s | 0.000774s | 0.000768s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000784s | 0.000785s | 0.000777s | byte equality observed |
| io_context.test | 1 | 0.001847s | 0.001822s | 0.001807s | byte equality observed |
| io_context_select.test | 1 | 0.002069s | 0.002148s | 0.002002s | byte equality observed |
| io_context_strand.test | 1 | 0.002116s | 0.002115s | 0.002095s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001800s | 0.001753s | 0.001816s | byte equality observed |
| ip_host_name.test | 10 | 0.000846s | 0.000859s | 0.000851s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000763s | 0.000766s | 0.000759s | byte equality observed |
| ip_icmp.test | 10 | 0.000789s | 0.000793s | 0.000763s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000783s | 0.000783s | 0.000765s | byte equality observed |
| ip_multicast.test | 10 | 0.000855s | 0.000854s | 0.000837s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000829s | 0.000824s | 0.000820s | byte equality observed |
| ip_tcp.test | 10 | 0.001056s | 0.001046s | 0.001038s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001019s | 0.001007s | 0.001004s | byte equality observed |
| ip_udp.test | 10 | 0.000865s | 0.000857s | 0.000838s | byte equality observed |
| ip_udp_select.test | 10 | 0.000854s | 0.000845s | 0.000841s | byte equality observed |
| ip_unicast.test | 10 | 0.000819s | 0.000812s | 0.000810s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000812s | 0.000796s | 0.000799s | byte equality observed |
| ip_v6_only.test | 10 | 0.000814s | 0.000822s | 0.000801s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000809s | 0.000811s | 0.000792s | byte equality observed |
| is_read_buffered.test | 10 | 0.000752s | 0.000744s | 0.000731s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000756s | 0.000737s | 0.000742s | byte equality observed |
| is_write_buffered.test | 10 | 0.000754s | 0.000752s | 0.000737s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000759s | 0.000737s | 0.000739s | byte equality observed |
| prepend.test | 10 | 0.000808s | 0.000813s | 0.000798s | byte equality observed |
| prepend_select.test | 10 | 0.000786s | 0.000802s | 0.000781s | byte equality observed |
| read.test | 10 | 0.001103s | 0.001125s | 0.001063s | byte equality observed |
| read_at.test | 10 | 0.001318s | 0.001469s | 0.001308s | byte equality observed |
| read_at_select.test | 10 | 0.001319s | 0.001465s | 0.001300s | byte equality observed |
| read_select.test | 10 | 0.001106s | 0.001138s | 0.001062s | byte equality observed |
| read_until.test | 10 | 0.000907s | 0.000966s | 0.000887s | byte equality observed |
| read_until_select.test | 10 | 0.000955s | 0.000967s | 0.000875s | byte equality observed |
| recycling_allocator.test | 10 | 0.000811s | 0.000834s | 0.000804s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000828s | 0.000834s | 0.000824s | byte equality observed |
| signal_set.test | 10 | 0.000846s | 0.000851s | 0.000821s | byte equality observed |
| signal_set_select.test | 10 | 0.000845s | 0.000835s | 0.000811s | byte equality observed |
| socket_base.test | 10 | 0.000901s | 0.000918s | 0.000865s | byte equality observed |
| socket_base_select.test | 10 | 0.000902s | 0.000929s | 0.000883s | byte equality observed |
| spawn.test | 10 | 0.000973s | 0.000969s | 0.001000s | byte equality observed |
| spawn_select.test | 10 | 0.000971s | 0.000966s | 0.000960s | byte equality observed |
| static_thread_pool.test | 10 | 0.000836s | 0.000819s | 0.000808s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000770s | 0.000764s | 0.000795s | byte equality observed |
| strand.test | 1 | 0.001718s | 0.001739s | 0.001700s | byte equality observed |
| strand_select.test | 1 | 0.001446s | 0.001525s | 0.001446s | byte equality observed |
| streambuf.test | 10 | 0.000871s | 0.000881s | 0.000878s | byte equality observed |
| streambuf_select.test | 10 | 0.000845s | 0.000847s | 0.000833s | byte equality observed |
| thread_pool.test | 10 | 0.001528s | 0.001549s | 0.001545s | byte equality observed |
| thread_pool_select.test | 10 | 0.001508s | 0.001535s | 0.001549s | byte equality observed |
| write.test | 10 | 0.001191s | 0.001180s | 0.001197s | byte equality observed |
| write_at.test | 10 | 0.001335s | 0.001315s | 0.001272s | byte equality observed |
| write_at_select.test | 10 | 0.001298s | 0.001303s | 0.001275s | byte equality observed |
| write_select.test | 10 | 0.001214s | 0.001142s | 0.001177s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44362912212).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
