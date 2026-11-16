# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.642370 | 3.724631 | 3.580243 | 0.002488 | 0.002430 | 0.002544 |
| any_completion_executor_select.test | RUN | 0.667353 | 3.766992 | 3.742169 | 0.002497 | 0.002059 | 0.002652 |
| any_completion_handler.test | RUN | 0.711667 | 3.360589 | 3.233517 | 0.001826 | 0.001962 | 0.001958 |
| any_completion_handler_select.test | RUN | 0.729400 | 3.483535 | 3.492592 | 0.001978 | 0.001976 | 0.002068 |
| any_io_executor.test | RUN | 0.672843 | 4.032591 | 3.964376 | 0.002373 | 0.002270 | 0.002246 |
| any_io_executor_select.test | RUN | 0.653775 | 3.962710 | 3.995711 | 0.001774 | 0.002454 | 0.002426 |
| append.test | RUN | 0.606163 | 3.180966 | 2.936473 | 0.001659 | 0.002098 | 0.001637 |
| append_select.test | RUN | 0.611011 | 3.236771 | 2.897688 | 0.001914 | 0.002048 | 0.001856 |
| as_tuple.test | RUN | 0.772638 | 3.891737 | 3.944509 | 0.001656 | 0.002036 | 0.001658 |
| as_tuple_select.test | RUN | 0.762050 | 3.851474 | 3.977324 | 0.001915 | 0.001828 | 0.001574 |
| associated_allocator.test | LINK | 0.165288 | 0.350135 | 0.483386 | — | — | — |
| associated_allocator_select.test | LINK | 0.175623 | 0.331624 | 0.478146 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.183674 | 0.362532 | 0.516497 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.179285 | 0.355312 | 0.515433 | — | — | — |
| associated_executor.test | LINK | 0.266154 | 0.623707 | 0.840069 | — | — | — |
| associated_executor_select.test | LINK | 0.264239 | 0.627152 | 0.838189 | — | — | — |
| associated_immediate_executor.test | LINK | 0.241148 | 0.581406 | 0.725579 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.240610 | 0.586527 | 0.738246 | — | — | — |
| associator.test | LINK | 0.133883 | 0.278727 | 0.392442 | — | — | — |
| associator_select.test | LINK | 0.132341 | 0.288774 | 0.386655 | — | — | — |
| awaitable.test | LINK | 0.139568 | 0.270498 | 0.385430 | — | — | — |
| awaitable_select.test | LINK | 0.138129 | 0.249037 | 0.379031 | — | — | — |
| basic_datagram_socket.test | LINK | 0.406045 | 0.875669 | 1.480892 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.414404 | 0.911707 | 1.506146 | — | — | — |
| basic_deadline_timer.test | LINK | 0.491031 | 1.045147 | 1.673249 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.495331 | 1.083000 | 1.694616 | — | — | — |
| basic_file.test | LINK | 0.136213 | 0.294758 | 0.395302 | — | — | — |
| basic_file_select.test | LINK | 0.137697 | 0.281088 | 0.396682 | — | — | — |
| basic_random_access_file.test | LINK | 0.139078 | 0.276652 | 0.381956 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.134538 | 0.273252 | 0.391506 | — | — | — |
| basic_raw_socket.test | LINK | 0.407511 | 0.886426 | 1.450998 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.409818 | 0.913482 | 1.477184 | — | — | — |
| basic_readable_pipe.test | LINK | 0.391906 | 0.845516 | 1.243779 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.409212 | 0.907741 | 1.511548 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.404905 | 0.903365 | 1.424368 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.415170 | 0.921609 | 1.483111 | — | — | — |
| basic_signal_set.test | LINK | 0.381259 | 0.814347 | 1.134852 | — | — | — |
| basic_signal_set_select.test | LINK | 0.393949 | 0.869763 | 1.393146 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.411451 | 0.873838 | 1.493562 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.420539 | 0.916692 | 1.521540 | — | — | — |
| basic_stream_file.test | LINK | 0.136863 | 0.281787 | 0.372963 | — | — | — |
| basic_stream_file_select.test | LINK | 0.139418 | 0.291807 | 0.374256 | — | — | — |
| basic_stream_socket.test | LINK | 0.405260 | 0.908127 | 1.444847 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.414019 | 0.907454 | 1.486727 | — | — | — |
| basic_streambuf.test | LINK | 0.202155 | 0.424324 | 0.575380 | — | — | — |
| basic_streambuf_select.test | LINK | 0.202924 | 0.416295 | 0.579244 | — | — | — |
| basic_waitable_timer.test | LINK | 0.384271 | 0.840626 | 1.358516 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.387319 | 0.864944 | 1.395576 | — | — | — |
| basic_writable_pipe.test | LINK | 0.387954 | 0.846431 | 1.282922 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.406352 | 0.916747 | 1.526477 | — | — | — |
| bind_allocator.test | RUN | 0.640834 | 3.239946 | 3.241876 | 0.002196 | 0.002260 | 0.002259 |
| bind_allocator_select.test | RUN | 0.656983 | 3.274042 | 3.174058 | 0.003639 | 0.001985 | 0.002276 |
| bind_cancellation_slot.test | RUN | 0.657405 | 3.242622 | 3.225184 | 0.003604 | 0.001560 | 0.001557 |
| bind_cancellation_slot_select.test | RUN | 0.671973 | 3.295552 | 3.123510 | 0.001432 | 0.001475 | 0.001528 |
| bind_executor.test | RUN | 0.439097 | 2.295499 | 2.023245 | 0.002219 | 0.002171 | 0.002054 |
| bind_executor_select.test | RUN | 0.453983 | 2.354846 | 1.955159 | 0.001937 | 0.001946 | 0.001869 |
| bind_immediate_executor.test | RUN | 0.333832 | 1.880379 | 1.231162 | 0.001421 | 0.001456 | 0.001474 |
| bind_immediate_executor_select.test | RUN | 0.343295 | 1.849325 | 1.364082 | 0.001452 | 0.001515 | 0.001407 |
| buffer.test | RUN | 0.207263 | 0.790943 | 0.762826 | 0.001466 | 0.001401 | 0.001325 |
| buffer_select.test | RUN | 0.209762 | 0.793592 | 0.769112 | 0.001459 | 0.001397 | 0.001420 |
| buffer_registration.test | LINK | 0.170277 | 0.403751 | 0.455634 | — | — | — |
| buffer_registration_select.test | LINK | 0.169246 | 0.410781 | 0.452748 | — | — | — |
| buffered_read_stream.test | RUN | 0.723248 | 4.954655 | 4.474602 | 0.001710 | 0.002354 | 0.002318 |
| buffered_read_stream_select.test | RUN | 0.739363 | 5.104190 | 4.654306 | 0.001741 | 0.002378 | 0.002462 |
| buffered_stream.test | RUN | 1.099742 | 7.774078 | 7.580039 | 0.002222 | 0.002402 | 0.002244 |
| buffered_stream_select.test | RUN | 1.177031 | 7.824284 | 7.361901 | 0.002370 | 0.002308 | 0.001986 |
| buffered_write_stream.test | RUN | 1.243202 | 6.644158 | 6.666899 | 0.002202 | 0.002440 | 0.002121 |
| buffered_write_stream_select.test | RUN | 1.251778 | 6.752585 | 6.354345 | 0.001808 | 0.002392 | 0.002090 |
| buffers_iterator.test | RUN | 0.374386 | 0.644534 | 1.111682 | 0.001726 | 0.001850 | 0.001513 |
| buffers_iterator_select.test | RUN | 0.364153 | 0.634916 | 1.110504 | 0.001771 | 0.001804 | 0.001554 |
| cancel_after.test | RUN | 1.012103 | 5.234638 | 4.905203 | 0.003928 | 0.004002 | 0.003684 |
| cancel_after_select.test | RUN | 1.015804 | 5.195255 | 4.888339 | 0.003601 | 0.003796 | 0.003529 |
| cancel_at.test | RUN | 1.006481 | 4.801465 | 4.643567 | 0.003612 | 0.003520 | 0.003434 |
| cancel_at_select.test | RUN | 1.007338 | 4.575774 | 4.602522 | 0.003276 | 0.003460 | 0.003156 |
| cancellation_signal.test | LINK | 0.125022 | 0.236620 | 0.294400 | — | — | — |
| cancellation_signal_select.test | LINK | 0.177934 | 0.248569 | 0.297384 | — | — | — |
| cancellation_state.test | LINK | 0.175336 | 0.241056 | 0.345245 | — | — | — |
| cancellation_state_select.test | LINK | 0.179539 | 0.242340 | 0.407747 | — | — | — |
| cancellation_type.test | LINK | 0.136792 | 0.188403 | 0.388531 | — | — | — |
| cancellation_type_select.test | LINK | 0.138164 | 0.196456 | 0.348444 | — | — | — |
| co_composed.test | RUN | 0.135553 | 0.196213 | 0.369666 | 0.001545 | 0.001713 | 0.001853 |
| co_composed_select.test | RUN | 0.138447 | 0.239708 | 0.366654 | 0.001534 | 0.001618 | 0.001730 |
| co_spawn.test | LINK | 0.139090 | 0.265985 | 0.344855 | — | — | — |
| co_spawn_select.test | LINK | 0.138352 | 0.291566 | 0.376170 | — | — | — |
| completion_condition.test | LINK | 0.175893 | 0.431185 | 0.492129 | — | — | — |
| completion_condition_select.test | LINK | 0.182251 | 0.426744 | 0.519050 | — | — | — |
| compose.test | RUN | 0.786376 | 4.049818 | 4.085510 | 0.002364 | 0.002338 | 0.002452 |
| compose_select.test | RUN | 0.800915 | 4.008669 | 4.032251 | 0.002229 | 0.001968 | 0.002380 |
| composed.test | RUN | 0.752543 | 4.008121 | 3.962985 | 0.002080 | 0.002008 | 0.002016 |
| composed_select.test | RUN | 0.770950 | 3.888851 | 3.901684 | 0.001878 | 0.001973 | 0.001894 |
| config.test | RUN | 0.354463 | 2.494754 | 1.745729 | 0.001908 | 0.001888 | 0.001887 |
| config_select.test | RUN | 0.451787 | 2.683709 | 2.019995 | 0.001912 | 0.001868 | 0.001850 |
| connect.test | LINK | 1.223678 | 8.482961 | 8.289111 | — | — | — |
| connect_select.test | LINK | 1.239414 | 8.473034 | 8.411283 | — | — | — |
| connect_pipe.test | RUN | 0.688654 | 3.213300 | 3.099380 | 0.001864 | 0.001957 | 0.001930 |
| connect_pipe_select.test | RUN | 0.702412 | 3.325778 | 3.316086 | 0.001901 | 0.002034 | 0.001848 |
| consign.test | RUN | 0.587297 | 3.114579 | 2.809382 | 0.001837 | 0.001932 | 0.001855 |
| consign_select.test | RUN | 0.599744 | 3.154251 | 2.730100 | 0.001862 | 0.001912 | 0.001523 |
| coroutine.test | LINK | 0.146500 | 0.334501 | 0.421471 | — | — | — |
| coroutine_select.test | LINK | 0.143486 | 0.340004 | 0.402175 | — | — | — |
| deadline_timer.test | RUN | 0.854044 | 4.140803 | 4.113271 | 0.003216 | 0.003231 | 0.003114 |
| deadline_timer_select.test | RUN | 0.862550 | 4.069809 | 4.095988 | 0.003238 | 0.003112 | 0.002801 |
| deferred.test | RUN | 0.150590 | 0.310601 | 0.391089 | 0.001798 | 0.001881 | 0.001816 |
| deferred_select.test | RUN | 0.157293 | 0.317798 | 0.382452 | 0.001806 | 0.001865 | 0.001744 |
| detached.test | LINK | 0.174860 | 0.344332 | 0.434798 | — | — | — |
| detached_select.test | LINK | 0.173718 | 0.343704 | 0.437631 | — | — | — |
| disposition.test | RUN | 0.201451 | 0.798970 | 0.808640 | 0.001512 | 0.001840 | 0.001898 |
| disposition_select.test | RUN | 0.158041 | 0.796764 | 0.805068 | 0.001452 | 0.001911 | 0.001836 |
| error.test | RUN | 0.147973 | 0.773204 | 0.711729 | 0.001471 | 0.001833 | 0.001893 |
| error_select.test | RUN | 0.149335 | 0.764685 | 0.717033 | 0.001473 | 0.001849 | 0.001756 |
| file_base.test | LINK | 0.183779 | 0.644831 | 0.798938 | — | — | — |
| file_base_select.test | LINK | 0.184951 | 0.635359 | 0.713533 | — | — | — |
| fwd_first.test | LINK | 0.413387 | 0.970245 | 1.431307 | — | — | — |
| fwd_last.test | LINK | 0.422083 | 0.912160 | 1.440933 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.163398 | 0.381596 | 0.516472 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.163085 | 0.373269 | 0.512092 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.617177 | 3.264435 | 2.768027 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.615624 | 3.377163 | 2.780383 | — | — | — |
| generic_raw_protocol.test | LINK | 0.619585 | 3.270872 | 2.775824 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.613149 | 3.379774 | 2.766984 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.532571 | 2.783157 | 2.367865 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.534644 | 2.803999 | 2.373244 | — | — | — |
| generic_stream_protocol.test | LINK | 0.572103 | 2.972340 | 2.619957 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.571133 | 3.057184 | 2.614471 | — | — | — |
| high_resolution_timer.test | LINK | 0.262788 | 0.578664 | 0.806225 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.267370 | 0.594130 | 0.815152 | — | — | — |
| immediate.test | LINK | 0.186564 | 0.438025 | 0.501529 | — | — | — |
| immediate_select.test | LINK | 0.186758 | 0.432627 | 0.501148 | — | — | — |
| inline_executor.test | RUN | 0.227180 | 0.684686 | 0.758831 | 0.001442 | 0.001498 | 0.001438 |
| inline_executor_select.test | RUN | 0.222037 | 0.669782 | 0.774593 | 0.001429 | 0.001463 | 0.001311 |
| inline_or_executor.test | RUN | 0.351425 | 1.934096 | 1.413672 | 0.001440 | 0.001486 | 0.001326 |
| inline_or_executor_select.test | RUN | 0.361011 | 1.983497 | 1.544143 | 0.001459 | 0.001394 | 0.001352 |
| io_context.test | RUN | 0.502199 | 2.952815 | 2.428055 | 0.002424 | 0.002338 | 0.002264 |
| io_context_select.test | RUN | 0.506998 | 2.893125 | 2.434824 | 0.002070 | 0.002158 | 0.002221 |
| io_context_strand.test | RUN | 0.477064 | 2.500125 | 2.113993 | 0.002214 | 0.002280 | 0.002318 |
| io_context_strand_select.test | RUN | 0.483550 | 2.473354 | 2.114443 | 0.002074 | 0.002129 | 0.002093 |
| ip_address.test | LINK | 0.183860 | 0.591014 | 0.614502 | — | — | — |
| ip_address_select.test | LINK | 0.190389 | 0.590822 | 0.621375 | — | — | — |
| ip_address_v4.test | LINK | 0.197849 | 0.630126 | 0.680224 | — | — | — |
| ip_address_v4_select.test | LINK | 0.190911 | 0.631030 | 0.691289 | — | — | — |
| ip_address_v6.test | LINK | 0.216330 | 0.826154 | 0.831555 | — | — | — |
| ip_address_v6_select.test | LINK | 0.214741 | 0.831283 | 0.829190 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.178575 | 0.402748 | 0.538026 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.175836 | 0.404664 | 0.539827 | — | — | — |
| ip_basic_resolver.test | LINK | 0.260850 | 0.577518 | 0.839044 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.278226 | 0.591845 | 1.071593 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.097568 | 0.193584 | 0.400053 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.094757 | 0.192287 | 0.397268 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.167527 | 0.386784 | 0.882903 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.171594 | 0.387570 | 0.888572 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.160506 | 0.378259 | 0.853322 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.160056 | 0.378867 | 0.865676 | — | — | — |
| ip_host_name.test | RUN | 0.171425 | 0.510396 | 0.958189 | 0.001448 | 0.001686 | 0.001775 |
| ip_host_name_select.test | RUN | 0.172962 | 0.533296 | 0.964737 | 0.001343 | 0.001972 | 0.001768 |
| ip_icmp.test | RUN | 0.750940 | 6.798504 | 5.941973 | 0.001540 | 0.001970 | 0.001648 |
| ip_icmp_select.test | RUN | 0.765264 | 6.932467 | 5.800985 | 0.001475 | 0.002005 | 0.001606 |
| ip_multicast.test | RUN | 0.442903 | 3.499684 | 3.346466 | 0.001536 | 0.002046 | 0.002009 |
| ip_multicast_select.test | RUN | 0.452247 | 3.444593 | 3.367877 | 0.001473 | 0.002047 | 0.002076 |
| ip_resolver_query_base.test | LINK | 0.113845 | 0.328829 | 0.388806 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.111478 | 0.323560 | 0.399054 | — | — | — |
| ip_tcp.test | RUN | 1.119427 | 9.932615 | 9.065536 | 0.001966 | 0.002548 | 0.002604 |
| ip_tcp_select.test | RUN | 1.098134 | 10.250616 | 8.853543 | 0.001972 | 0.002668 | 0.002432 |
| ip_udp.test | RUN | 0.818669 | 7.117823 | 6.232617 | 0.001679 | 0.002158 | 0.002020 |
| ip_udp_select.test | RUN | 0.809410 | 7.207167 | 6.038656 | 0.001824 | 0.001948 | 0.002056 |
| ip_unicast.test | RUN | 0.419722 | 3.088974 | 2.935634 | 0.001550 | 0.002032 | 0.001974 |
| ip_unicast_select.test | RUN | 0.426116 | 3.133533 | 2.903042 | 0.001539 | 0.001914 | 0.002074 |
| ip_v6_only.test | RUN | 0.467821 | 3.193769 | 3.085201 | 0.001580 | 0.001918 | 0.001659 |
| ip_v6_only_select.test | RUN | 0.479076 | 3.287505 | 3.027397 | 0.001578 | 0.001989 | 0.001932 |
| is_read_buffered.test | RUN | 0.321279 | 0.996046 | 1.691945 | 0.001493 | 0.001829 | 0.001514 |
| is_read_buffered_select.test | RUN | 0.327814 | 1.030664 | 1.685694 | 0.001415 | 0.001898 | 0.001776 |
| is_write_buffered.test | RUN | 0.322937 | 0.994263 | 1.673366 | 0.001489 | 0.001672 | 0.001666 |
| is_write_buffered_select.test | RUN | 0.324082 | 1.046907 | 1.713201 | 0.001472 | 0.001968 | 0.001513 |
| local_basic_endpoint.test | LINK | 0.166136 | 0.552378 | 0.867803 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.165320 | 0.564972 | 0.866631 | — | — | — |
| local_connect_pair.test | LINK | 0.416613 | 3.139384 | 2.829131 | — | — | — |
| local_connect_pair_select.test | LINK | 0.407495 | 3.146784 | 2.803916 | — | — | — |
| local_datagram_protocol.test | LINK | 0.526548 | 4.066367 | 3.887178 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.533089 | 4.107947 | 3.814957 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.698823 | 4.014424 | 3.909793 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.765398 | 4.095408 | 3.883515 | — | — | — |
| local_stream_protocol.test | LINK | 0.734840 | 3.803811 | 3.668281 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.763152 | 3.820622 | 3.620984 | — | — | — |
| placeholders.test | LINK | 0.154438 | 0.293911 | 0.411588 | — | — | — |
| placeholders_select.test | LINK | 0.146934 | 0.297172 | 0.413275 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.390568 | 0.844831 | 1.278199 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.403706 | 0.894449 | 1.527913 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.389429 | 0.848985 | 1.287569 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.410877 | 0.891104 | 1.542109 | — | — | — |
| posix_descriptor_base.test | LINK | 0.168416 | 0.337426 | 0.381653 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.167412 | 0.326334 | 0.386381 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.777747 | 3.885133 | 3.651464 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.783330 | 3.905447 | 3.729470 | — | — | — |
| prepend.test | RUN | 0.602395 | 3.187697 | 2.906737 | 0.001816 | 0.002040 | 0.001978 |
| prepend_select.test | RUN | 0.610179 | 3.216715 | 2.901445 | 0.001744 | 0.001759 | 0.001925 |
| random_access_file.test | LINK | 0.361522 | 0.768024 | 0.996824 | — | — | — |
| random_access_file_select.test | LINK | 0.375711 | 0.821514 | 1.276335 | — | — | — |
| read.test | RUN | 1.815522 | 19.549855 | 16.524441 | 0.002492 | 0.002562 | 0.002539 |
| read_select.test | RUN | 1.828477 | 19.582632 | 16.690104 | 0.002268 | 0.002454 | 0.002336 |
| read_at.test | RUN | 1.834484 | 28.205750 | 23.245637 | 0.003180 | 0.003025 | 0.002806 |
| read_at_select.test | RUN | 1.859945 | 28.076196 | 23.362747 | 0.003004 | 0.002888 | 0.002792 |
| read_until.test | RUN | 0.962645 | 7.511085 | 5.917402 | 0.001934 | 0.002082 | 0.002062 |
| read_until_select.test | RUN | 0.976042 | 7.520601 | 6.181138 | 0.001849 | 0.002102 | 0.001886 |
| readable_pipe.test | LINK | 0.615296 | 3.183319 | 2.932563 | — | — | — |
| readable_pipe_select.test | LINK | 0.644741 | 3.356161 | 3.141036 | — | — | — |
| recycling_allocator.test | RUN | 0.201552 | 0.484384 | 0.583368 | 0.001735 | 0.001670 | 0.001588 |
| recycling_allocator_select.test | RUN | 0.197912 | 0.487862 | 0.595357 | 0.001544 | 0.001780 | 0.001682 |
| redirect_disposition.test | LINK | 0.800656 | 4.483457 | 4.443261 | — | — | — |
| redirect_disposition_select.test | LINK | 0.810739 | 4.450682 | 4.386910 | — | — | — |
| redirect_error.test | LINK | 0.718726 | 3.691627 | 3.847980 | — | — | — |
| redirect_error_select.test | LINK | 0.731857 | 3.715899 | 3.861689 | — | — | — |
| registered_buffer.test | LINK | 0.198902 | 0.404208 | 0.564107 | — | — | — |
| registered_buffer_select.test | LINK | 0.198052 | 0.386381 | 0.578514 | — | — | — |
| signal_set.test | RUN | 0.608161 | 3.091379 | 2.788045 | 0.001858 | 0.001908 | 0.001797 |
| signal_set_select.test | RUN | 0.624679 | 3.240886 | 3.038628 | 0.001914 | 0.001885 | 0.001808 |
| signal_set_base.test | LINK | 0.159492 | 0.320689 | 0.427746 | — | — | — |
| signal_set_base_select.test | LINK | 0.163509 | 0.325397 | 0.427998 | — | — | — |
| socket_base.test | RUN | 0.733275 | 4.912350 | 4.224837 | 0.002062 | 0.002028 | 0.002026 |
| socket_base_select.test | RUN | 0.749438 | 4.650637 | 4.151891 | 0.001939 | 0.001704 | 0.001770 |
| spawn.test | RUN | 1.259428 | 7.618613 | 7.052298 | 0.002154 | 0.002018 | 0.002082 |
| spawn_select.test | RUN | 1.269616 | 7.588806 | 7.045176 | 0.002020 | 0.002120 | 0.002144 |
| static_thread_pool.test | RUN | 0.343011 | 0.745882 | 0.996830 | 0.001775 | 0.002156 | 0.001778 |
| static_thread_pool_select.test | RUN | 0.360553 | 0.810795 | 1.263771 | 0.001757 | 0.001860 | 0.001727 |
| steady_timer.test | LINK | 0.386157 | 0.873053 | 1.402705 | — | — | — |
| steady_timer_select.test | LINK | 0.399375 | 0.879987 | 1.392957 | — | — | — |
| strand.test | RUN | 0.798315 | 4.259868 | 4.214996 | 0.002332 | 0.002539 | 0.002650 |
| strand_select.test | RUN | 0.813189 | 4.171382 | 4.124651 | 0.002596 | 0.002666 | 0.002684 |
| stream_file.test | LINK | 0.360637 | 0.790611 | 1.004770 | — | — | — |
| stream_file_select.test | LINK | 0.380077 | 0.830583 | 1.330573 | — | — | — |
| streambuf.test | RUN | 0.229881 | 0.580306 | 0.685718 | 0.001375 | 0.001374 | 0.001860 |
| streambuf_select.test | RUN | 0.175799 | 0.503978 | 0.698808 | 0.001359 | 0.001464 | 0.001386 |
| system_timer.test | LINK | 0.503906 | 2.791027 | 2.617224 | — | — | — |
| system_timer_select.test | LINK | 0.512642 | 2.750055 | 2.339276 | — | — | — |
| system_context.test | LINK | 0.237220 | 0.501594 | 0.589731 | — | — | — |
| system_context_select.test | LINK | 0.250280 | 0.551592 | 0.732552 | — | — | — |
| system_executor.test | LINK | 0.313416 | 1.601267 | 1.130467 | — | — | — |
| system_executor_select.test | LINK | 0.333079 | 1.552001 | 1.268238 | — | — | — |
| this_coro.test | LINK | 0.099015 | 0.193027 | 0.232722 | — | — | — |
| this_coro_select.test | LINK | 0.095554 | 0.193518 | 0.234779 | — | — | — |
| thread_pool.test | RUN | 0.379692 | 2.023556 | 1.442624 | 0.002820 | 0.003108 | 0.002505 |
| thread_pool_select.test | RUN | 0.386949 | 2.103673 | 1.572995 | 0.002631 | 0.003282 | 0.002612 |
| time_traits.test | LINK | 0.214004 | 0.603809 | 0.471954 | — | — | — |
| time_traits_select.test | LINK | 0.217073 | 0.593560 | 0.472254 | — | — | — |
| ts_buffer.test | LINK | 0.206370 | 0.664414 | 0.510648 | — | — | — |
| ts_buffer_select.test | LINK | 0.201587 | 0.663763 | 0.506434 | — | — | — |
| ts_executor.test | LINK | 0.282647 | 0.911226 | 1.114660 | — | — | — |
| ts_executor_select.test | LINK | 0.288467 | 0.958461 | 1.618806 | — | — | — |
| ts_internet.test | LINK | 0.305955 | 1.001742 | 1.650984 | — | — | — |
| ts_internet_select.test | LINK | 0.315246 | 1.026250 | 1.663639 | — | — | — |
| ts_io_context.test | LINK | 0.249842 | 0.750257 | 0.983554 | — | — | — |
| ts_io_context_select.test | LINK | 0.254939 | 0.803346 | 1.302794 | — | — | — |
| ts_net.test | LINK | 0.359285 | 1.201418 | 2.017215 | — | — | — |
| ts_net_select.test | LINK | 0.371513 | 1.226385 | 2.043877 | — | — | — |
| ts_netfwd.test | LINK | 0.365166 | 1.192179 | 2.014921 | — | — | — |
| ts_netfwd_select.test | LINK | 0.369661 | 1.217216 | 2.051087 | — | — | — |
| ts_socket.test | LINK | 0.300598 | 0.947746 | 1.547489 | — | — | — |
| ts_socket_select.test | LINK | 0.304653 | 0.963482 | 1.585374 | — | — | — |
| ts_timer.test | LINK | 0.268583 | 0.828342 | 1.385345 | — | — | — |
| ts_timer_select.test | LINK | 0.273074 | 0.871684 | 1.328743 | — | — | — |
| use_awaitable.test | LINK | 0.093549 | 0.279832 | 0.399471 | — | — | — |
| use_awaitable_select.test | LINK | 0.094866 | 0.288644 | 0.379789 | — | — | — |
| wait_traits.test | LINK | 0.093827 | 0.293199 | 0.380253 | — | — | — |
| wait_traits_select.test | LINK | 0.098379 | 0.290748 | 0.401350 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.094713 | 0.289372 | 0.381574 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.094016 | 0.291420 | 0.379408 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.094706 | 0.286370 | 0.381953 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.093212 | 0.291140 | 0.380814 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.094741 | 0.289806 | 0.372735 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.093640 | 0.297566 | 0.374369 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.094011 | 0.285120 | 0.379756 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.093689 | 0.292627 | 0.381863 | — | — | — |
| windows_object_handle.test | LINK | 0.249727 | 0.768706 | 1.008860 | — | — | — |
| windows_object_handle_select.test | LINK | 0.305589 | 0.815270 | 1.287877 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.351368 | 0.802582 | 1.134342 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.391546 | 0.850928 | 1.408554 | — | — | — |
| windows_random_access_handle.test | LINK | 0.368249 | 0.775111 | 1.008405 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.394828 | 0.823074 | 1.287524 | — | — | — |
| windows_stream_handle.test | LINK | 0.359520 | 0.764874 | 0.987552 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.373927 | 0.831564 | 1.283914 | — | — | — |
| writable_pipe.test | LINK | 0.634078 | 3.150819 | 3.068579 | — | — | — |
| writable_pipe_select.test | LINK | 0.654461 | 3.301571 | 3.217919 | — | — | — |
| write.test | RUN | 1.848853 | 15.925645 | 16.791269 | 0.002487 | 0.002499 | 0.002366 |
| write_select.test | RUN | 1.873879 | 16.119381 | 16.933093 | 0.002581 | 0.002379 | 0.002472 |
| write_at.test | RUN | 1.918898 | 23.023707 | 21.175856 | 0.002814 | 0.002548 | 0.002679 |
| write_at_select.test | RUN | 1.942401 | 23.540369 | 21.511429 | 0.002833 | 0.002649 | 0.002728 |
| any_executor.test | RUN | 0.805392 | 7.593541 | 6.685583 | 0.002636 | 0.002478 | 0.002484 |
| blocking.test | RUN | 1.927454 | 9.352018 | 13.666859 | 0.007418 | 0.007038 | 0.007431 |
| blocking_adaptation.test | RUN | 0.945647 | 4.042518 | 6.264606 | 0.004148 | 0.004221 | 0.004192 |
| context_as.test | RUN | 0.537697 | 2.822305 | 2.140767 | 0.001841 | 0.001940 | 0.001920 |
| executor.test | RUN | 0.161658 | 0.305487 | 0.365087 | 0.001844 | 0.001829 | 0.001683 |
| inline_exception_handling.test | RUN | 1.774737 | 8.436168 | 12.877840 | 0.005223 | 0.005154 | 0.005871 |
| invocable_archetype.test | RUN | 0.146362 | 0.296777 | 0.393166 | 0.001908 | 0.001880 | 0.001776 |
| mapping.test | RUN | 1.888075 | 9.004081 | 13.552014 | 0.005354 | 0.005363 | 0.005334 |
| outstanding_work.test | RUN | 0.909761 | 3.852043 | 6.103623 | 0.004252 | 0.004015 | 0.004220 |
| prefer_only.test | RUN | 0.287066 | 1.605715 | 1.379628 | 0.001951 | 0.001881 | 0.001810 |
| relationship.test | RUN | 0.733889 | 3.496352 | 5.853095 | 0.002835 | 0.004164 | 0.002924 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.995×, 1.006× | 1.000× |
| clang | 0.983× | 0.975×, 0.992× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001645s | 0.001600s | 0.001622s | byte equality observed |
| any_completion_executor_select.test | 7 | 0.001607s | 0.001627s | 0.001612s | byte equality observed |
| any_completion_handler.test | 6 | 0.001336s | 0.001313s | 0.001287s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001296s | 0.001278s | 0.001280s | byte equality observed |
| any_io_executor.test | 8 | 0.001632s | 0.001584s | 0.001588s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001622s | 0.001651s | 0.001595s | byte equality observed |
| append.test | 10 | 0.001240s | 0.001223s | 0.001218s | byte equality observed |
| append_select.test | 10 | 0.001206s | 0.001228s | 0.001214s | byte equality observed |
| as_tuple.test | 8 | 0.001303s | 0.001321s | 0.001274s | byte equality observed |
| as_tuple_select.test | 10 | 0.001243s | 0.001227s | 0.001259s | byte equality observed |
| bind_allocator.test | 1 | 0.001682s | 0.001664s | 0.001636s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001459s | 0.001452s | 0.001433s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001169s | 0.001156s | 0.001126s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001061s | 0.001060s | 0.001050s | byte equality observed |
| bind_executor.test | 1 | 0.001707s | 0.001670s | 0.001646s | byte equality observed |
| bind_executor_select.test | 1 | 0.001966s | 0.001971s | 0.001924s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001074s | 0.001099s | 0.001077s | byte equality observed |
| bind_immediate_executor_select.test | 9 | 0.001093s | 0.001075s | 0.001061s | byte equality observed |
| buffer.test | 10 | 0.001025s | 0.001072s | 0.001056s | byte equality observed |
| buffer_select.test | 10 | 0.001032s | 0.001046s | 0.001021s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001343s | 0.001375s | 0.001339s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001337s | 0.001367s | 0.001365s | byte equality observed |
| buffered_stream.test | 10 | 0.001344s | 0.001362s | 0.001335s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001336s | 0.001311s | 0.001317s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001331s | 0.001298s | 0.001338s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001320s | 0.001293s | 0.001311s | byte equality observed |
| buffers_iterator.test | 10 | 0.001045s | 0.001003s | 0.000984s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000985s | 0.001028s | 0.000982s | byte equality observed |
| cancel_after.test | 1 | 0.003371s | 0.003458s | 0.003417s | byte equality observed |
| cancel_after_select.test | 1 | 0.002823s | 0.002860s | 0.002892s | byte equality observed |
| cancel_at.test | 1 | 0.003748s | 0.003736s | 0.003555s | byte equality observed |
| cancel_at_select.test | 1 | 0.003543s | 0.003504s | 0.003474s | byte equality observed |
| co_composed.test | 10 | 0.001013s | 0.001049s | 0.001021s | byte equality observed |
| co_composed_select.test | 10 | 0.000974s | 0.000992s | 0.000967s | byte equality observed |
| compose.test | 1 | 0.001704s | 0.001684s | 0.001703s | byte equality observed |
| compose_select.test | 1 | 0.001436s | 0.001411s | 0.001452s | byte equality observed |
| composed.test | 1 | 0.002037s | 0.002015s | 0.002045s | byte equality observed |
| composed_select.test | 1 | 0.001618s | 0.001531s | 0.001667s | byte equality observed |
| config.test | 10 | 0.001094s | 0.001094s | 0.001081s | byte equality observed |
| config_select.test | 10 | 0.001091s | 0.001076s | 0.001053s | byte equality observed |
| connect_pipe.test | 10 | 0.001120s | 0.001124s | 0.001084s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001078s | 0.001145s | 0.001091s | byte equality observed |
| consign.test | 10 | 0.001092s | 0.001091s | 0.001103s | byte equality observed |
| consign_select.test | 10 | 0.001054s | 0.001048s | 0.001065s | byte equality observed |
| deadline_timer.test | 1 | 0.002408s | 0.002381s | 0.002401s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002180s | 0.002161s | 0.002197s | byte equality observed |
| deferred.test | 10 | 0.001003s | 0.001003s | 0.000998s | byte equality observed |
| deferred_select.test | 10 | 0.000968s | 0.000957s | 0.000959s | byte equality observed |
| disposition.test | 10 | 0.001020s | 0.001031s | 0.001024s | byte equality observed |
| disposition_select.test | 10 | 0.001011s | 0.001012s | 0.001015s | byte equality observed |
| error.test | 10 | 0.000979s | 0.000993s | 0.000986s | byte equality observed |
| error_select.test | 10 | 0.000990s | 0.000981s | 0.000989s | byte equality observed |
| inline_executor.test | 10 | 0.001000s | 0.000999s | 0.000998s | byte equality observed |
| inline_executor_select.test | 10 | 0.001010s | 0.000990s | 0.000993s | byte equality observed |
| inline_or_executor.test | 10 | 0.001003s | 0.001002s | 0.000988s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001000s | 0.000992s | 0.001004s | byte equality observed |
| io_context.test | 1 | 0.001933s | 0.001864s | 0.001906s | byte equality observed |
| io_context_select.test | 1 | 0.002264s | 0.002240s | 0.002269s | byte equality observed |
| io_context_strand.test | 1 | 0.002253s | 0.002210s | 0.002272s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002038s | 0.001991s | 0.002021s | byte equality observed |
| ip_host_name.test | 10 | 0.001018s | 0.001009s | 0.001001s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000971s | 0.000967s | 0.000961s | byte equality observed |
| ip_icmp.test | 10 | 0.000993s | 0.001010s | 0.000986s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001002s | 0.001002s | 0.000979s | byte equality observed |
| ip_multicast.test | 10 | 0.001077s | 0.001074s | 0.001060s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001044s | 0.001055s | 0.001045s | byte equality observed |
| ip_tcp.test | 10 | 0.001461s | 0.001456s | 0.001457s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001398s | 0.001388s | 0.001390s | byte equality observed |
| ip_udp.test | 10 | 0.001099s | 0.001088s | 0.001075s | byte equality observed |
| ip_udp_select.test | 10 | 0.001078s | 0.001071s | 0.001053s | byte equality observed |
| ip_unicast.test | 10 | 0.001044s | 0.001061s | 0.001031s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001033s | 0.001062s | 0.001017s | byte equality observed |
| ip_v6_only.test | 10 | 0.001048s | 0.001132s | 0.001041s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001040s | 0.001098s | 0.001026s | byte equality observed |
| is_read_buffered.test | 10 | 0.000972s | 0.001029s | 0.000960s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000972s | 0.001021s | 0.000955s | byte equality observed |
| is_write_buffered.test | 10 | 0.000976s | 0.001007s | 0.000946s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000976s | 0.001023s | 0.000955s | byte equality observed |
| prepend.test | 10 | 0.001086s | 0.001102s | 0.001065s | byte equality observed |
| prepend_select.test | 10 | 0.001065s | 0.001069s | 0.001043s | byte equality observed |
| read.test | 10 | 0.001496s | 0.001480s | 0.001440s | byte equality observed |
| read_at.test | 10 | 0.001869s | 0.001872s | 0.001680s | byte equality observed |
| read_at_select.test | 10 | 0.001896s | 0.001868s | 0.001726s | byte equality observed |
| read_select.test | 10 | 0.001490s | 0.001464s | 0.001410s | byte equality observed |
| read_until.test | 10 | 0.001237s | 0.001200s | 0.001189s | byte equality observed |
| read_until_select.test | 10 | 0.001248s | 0.001203s | 0.001177s | byte equality observed |
| recycling_allocator.test | 10 | 0.001021s | 0.001018s | 0.001014s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001021s | 0.001038s | 0.001013s | byte equality observed |
| signal_set.test | 10 | 0.001039s | 0.001027s | 0.001040s | byte equality observed |
| signal_set_select.test | 10 | 0.001042s | 0.001047s | 0.001037s | byte equality observed |
| socket_base.test | 10 | 0.001145s | 0.001141s | 0.001147s | byte equality observed |
| socket_base_select.test | 10 | 0.001132s | 0.001173s | 0.001139s | byte equality observed |
| spawn.test | 10 | 0.001264s | 0.001233s | 0.001259s | byte equality observed |
| spawn_select.test | 10 | 0.001232s | 0.001234s | 0.001249s | byte equality observed |
| static_thread_pool.test | 10 | 0.001032s | 0.001037s | 0.001007s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001012s | 0.001000s | 0.000990s | byte equality observed |
| strand.test | 1 | 0.001969s | 0.001916s | 0.001928s | byte equality observed |
| strand_select.test | 1 | 0.001641s | 0.001615s | 0.001625s | byte equality observed |
| streambuf.test | 10 | 0.001074s | 0.001080s | 0.001030s | byte equality observed |
| streambuf_select.test | 10 | 0.001045s | 0.001046s | 0.001028s | byte equality observed |
| thread_pool.test | 10 | 0.002202s | 0.002195s | 0.002185s | byte equality observed |
| thread_pool_select.test | 10 | 0.002195s | 0.002199s | 0.002202s | byte equality observed |
| write.test | 10 | 0.001559s | 0.001489s | 0.001502s | byte equality observed |
| write_at.test | 10 | 0.001628s | 0.001577s | 0.001558s | byte equality observed |
| write_at_select.test | 10 | 0.001626s | 0.001586s | 0.001549s | byte equality observed |
| write_select.test | 10 | 0.001512s | 0.001457s | 0.001469s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43916760662).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
