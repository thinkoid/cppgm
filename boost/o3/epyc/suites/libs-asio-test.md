# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.496686 | 2.973298 | 2.508164 | 0.002182 | 0.002089 | 0.002020 |
| any_completion_executor_select.test | RUN | 0.503501 | 2.998894 | 2.630266 | 0.002336 | 0.002096 | 0.001925 |
| any_completion_handler.test | RUN | 0.584033 | 2.771545 | 2.311214 | 0.001882 | 0.001857 | 0.001584 |
| any_completion_handler_select.test | RUN | 0.567955 | 2.870917 | 2.414535 | 0.001729 | 0.001953 | 0.001756 |
| any_io_executor.test | RUN | 0.526516 | 3.177236 | 2.747659 | 0.002086 | 0.002156 | 0.002203 |
| any_io_executor_select.test | RUN | 0.536787 | 3.164369 | 2.899903 | 0.002036 | 0.002324 | 0.001726 |
| append.test | RUN | 0.497949 | 2.592125 | 2.066271 | 0.001446 | 0.001838 | 0.001698 |
| append_select.test | RUN | 0.495371 | 2.681352 | 2.081567 | 0.001604 | 0.001819 | 0.001606 |
| as_tuple.test | RUN | 0.607480 | 3.112442 | 3.007806 | 0.001879 | 0.001886 | 0.001798 |
| as_tuple_select.test | RUN | 0.635728 | 3.066047 | 3.063269 | 0.001609 | 0.002056 | 0.001763 |
| associated_allocator.test | LINK | 0.130663 | 0.263570 | 0.345617 | — | — | — |
| associated_allocator_select.test | LINK | 0.134538 | 0.274661 | 0.305883 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.141891 | 0.302071 | 0.333204 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.145416 | 0.293273 | 0.338898 | — | — | — |
| associated_executor.test | LINK | 0.203881 | 0.510055 | 0.541701 | — | — | — |
| associated_executor_select.test | LINK | 0.206003 | 0.492144 | 0.546451 | — | — | — |
| associated_immediate_executor.test | LINK | 0.191221 | 0.454321 | 0.518790 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.191324 | 0.455932 | 0.501206 | — | — | — |
| associator.test | LINK | 0.108329 | 0.213952 | 0.272275 | — | — | — |
| associator_select.test | LINK | 0.109633 | 0.214144 | 0.268437 | — | — | — |
| awaitable.test | LINK | 0.106851 | 0.221068 | 0.251271 | — | — | — |
| awaitable_select.test | LINK | 0.110548 | 0.214846 | 0.262703 | — | — | — |
| basic_datagram_socket.test | LINK | 0.318146 | 0.715287 | 0.980876 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.326482 | 0.736062 | 0.990312 | — | — | — |
| basic_deadline_timer.test | LINK | 0.391098 | 0.807868 | 1.119088 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.401479 | 0.839868 | 1.115929 | — | — | — |
| basic_file.test | LINK | 0.111918 | 0.213857 | 0.266117 | — | — | — |
| basic_file_select.test | LINK | 0.114064 | 0.214951 | 0.274731 | — | — | — |
| basic_random_access_file.test | LINK | 0.108875 | 0.213608 | 0.272062 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.108299 | 0.213808 | 0.258767 | — | — | — |
| basic_raw_socket.test | LINK | 0.333400 | 0.686759 | 0.969258 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.329942 | 0.698643 | 0.995785 | — | — | — |
| basic_readable_pipe.test | LINK | 0.319396 | 0.662657 | 0.859800 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.334954 | 0.691038 | 1.029838 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.320244 | 0.681947 | 0.994481 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.327844 | 0.696241 | 1.035471 | — | — | — |
| basic_signal_set.test | LINK | 0.303969 | 0.643294 | 0.776717 | — | — | — |
| basic_signal_set_select.test | LINK | 0.316612 | 0.668782 | 0.956622 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.326112 | 0.677963 | 0.996092 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.343413 | 0.700593 | 1.006150 | — | — | — |
| basic_stream_file.test | LINK | 0.108165 | 0.220626 | 0.298725 | — | — | — |
| basic_stream_file_select.test | LINK | 0.108134 | 0.219681 | 0.260819 | — | — | — |
| basic_stream_socket.test | LINK | 0.315669 | 0.686278 | 0.953935 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.332445 | 0.688244 | 0.988661 | — | — | — |
| basic_streambuf.test | LINK | 0.155260 | 0.317289 | 0.388195 | — | — | — |
| basic_streambuf_select.test | LINK | 0.163138 | 0.322035 | 0.378462 | — | — | — |
| basic_waitable_timer.test | LINK | 0.310384 | 0.693449 | 0.911161 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.314303 | 0.698154 | 0.921991 | — | — | — |
| basic_writable_pipe.test | LINK | 0.311491 | 0.718230 | 0.849474 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.330326 | 0.747330 | 1.016161 | — | — | — |
| bind_allocator.test | RUN | 0.511339 | 2.626460 | 2.340416 | 0.001918 | 0.001916 | 0.001734 |
| bind_allocator_select.test | RUN | 0.530897 | 2.654924 | 2.297379 | 0.001865 | 0.001701 | 0.002087 |
| bind_cancellation_slot.test | RUN | 0.527607 | 2.682267 | 2.362138 | 0.001288 | 0.001338 | 0.001278 |
| bind_cancellation_slot_select.test | RUN | 0.533678 | 2.680993 | 2.223534 | 0.001233 | 0.001329 | 0.001285 |
| bind_executor.test | RUN | 0.359237 | 1.822033 | 1.473015 | 0.001852 | 0.002028 | 0.002089 |
| bind_executor_select.test | RUN | 0.370695 | 1.887765 | 1.494507 | 0.001520 | 0.001770 | 0.001748 |
| bind_immediate_executor.test | RUN | 0.275808 | 1.497135 | 0.938720 | 0.001241 | 0.001238 | 0.001283 |
| bind_immediate_executor_select.test | RUN | 0.288300 | 1.456665 | 1.042808 | 0.001312 | 0.001319 | 0.001329 |
| buffer.test | RUN | 0.169289 | 0.612245 | 0.540727 | 0.001276 | 0.001220 | 0.001262 |
| buffer_select.test | RUN | 0.169317 | 0.612334 | 0.540551 | 0.001224 | 0.001243 | 0.001192 |
| buffer_registration.test | LINK | 0.145088 | 0.321964 | 0.328115 | — | — | — |
| buffer_registration_select.test | LINK | 0.178680 | 0.315014 | 0.320935 | — | — | — |
| buffered_read_stream.test | RUN | 0.587300 | 3.915902 | 3.139526 | 0.001607 | 0.002252 | 0.002231 |
| buffered_read_stream_select.test | RUN | 0.599043 | 4.000831 | 3.164325 | 0.001626 | 0.002100 | 0.002184 |
| buffered_stream.test | RUN | 0.740771 | 6.419479 | 6.008772 | 0.002042 | 0.002117 | 0.002412 |
| buffered_stream_select.test | RUN | 0.789947 | 6.471644 | 5.817525 | 0.002215 | 0.002244 | 0.002226 |
| buffered_write_stream.test | RUN | 0.962439 | 5.508827 | 5.175596 | 0.002086 | 0.001942 | 0.001989 |
| buffered_write_stream_select.test | RUN | 0.962413 | 5.560792 | 4.990378 | 0.001793 | 0.002200 | 0.001616 |
| buffers_iterator.test | RUN | 0.282245 | 0.487393 | 0.809579 | 0.001424 | 0.001648 | 0.001492 |
| buffers_iterator_select.test | RUN | 0.301234 | 0.483246 | 0.809483 | 0.001657 | 0.001697 | 0.001654 |
| cancel_after.test | RUN | 0.757255 | 4.324366 | 3.730046 | 0.003745 | 0.002946 | 0.002682 |
| cancel_after_select.test | RUN | 0.790104 | 4.270484 | 3.709151 | 0.002701 | 0.002569 | 0.002027 |
| cancel_at.test | RUN | 0.689878 | 4.040586 | 3.699424 | 0.002606 | 0.002554 | 0.002430 |
| cancel_at_select.test | RUN | 0.654440 | 4.007579 | 3.637865 | 0.002882 | 0.002408 | 0.002096 |
| cancellation_signal.test | LINK | 0.096425 | 0.186024 | 0.317079 | — | — | — |
| cancellation_signal_select.test | LINK | 0.100618 | 0.186643 | 0.315717 | — | — | — |
| cancellation_state.test | LINK | 0.099801 | 0.188529 | 0.325809 | — | — | — |
| cancellation_state_select.test | LINK | 0.127446 | 0.191575 | 0.324838 | — | — | — |
| cancellation_type.test | LINK | 0.098358 | 0.153529 | 0.261929 | — | — | — |
| cancellation_type_select.test | LINK | 0.115119 | 0.211919 | 0.261904 | — | — | — |
| co_composed.test | RUN | 0.111552 | 0.219343 | 0.256572 | 0.001467 | 0.001527 | 0.001559 |
| co_composed_select.test | RUN | 0.107594 | 0.206802 | 0.253572 | 0.001639 | 0.001264 | 0.001297 |
| co_spawn.test | LINK | 0.112138 | 0.219228 | 0.262514 | — | — | — |
| co_spawn_select.test | LINK | 0.113761 | 0.217482 | 0.254125 | — | — | — |
| completion_condition.test | LINK | 0.142479 | 0.321072 | 0.335669 | — | — | — |
| completion_condition_select.test | LINK | 0.140494 | 0.319727 | 0.332381 | — | — | — |
| compose.test | RUN | 0.645813 | 3.301851 | 2.922214 | 0.001898 | 0.001860 | 0.001770 |
| compose_select.test | RUN | 0.650538 | 3.225975 | 2.899680 | 0.001717 | 0.002067 | 0.001770 |
| composed.test | RUN | 0.627069 | 3.219249 | 2.875190 | 0.001694 | 0.001421 | 0.001485 |
| composed_select.test | RUN | 0.611787 | 3.217346 | 2.887195 | 0.001644 | 0.001749 | 0.001548 |
| config.test | RUN | 0.312308 | 2.029611 | 1.346466 | 0.001722 | 0.001822 | 0.001695 |
| config_select.test | RUN | 0.361070 | 2.180609 | 1.500854 | 0.001830 | 0.002136 | 0.001576 |
| connect.test | LINK | 1.046827 | 6.755196 | 6.139509 | — | — | — |
| connect_select.test | LINK | 1.048486 | 6.750792 | 6.113528 | — | — | — |
| connect_pipe.test | RUN | 0.580454 | 2.630197 | 2.230801 | 0.001876 | 0.001902 | 0.001703 |
| connect_pipe_select.test | RUN | 0.594387 | 2.780197 | 2.373481 | 0.001736 | 0.001816 | 0.001753 |
| consign.test | RUN | 0.509898 | 2.573759 | 2.080998 | 0.001784 | 0.001727 | 0.001712 |
| consign_select.test | RUN | 0.508809 | 2.638201 | 2.038328 | 0.001467 | 0.001668 | 0.001323 |
| coroutine.test | LINK | 0.116040 | 0.257046 | 0.291002 | — | — | — |
| coroutine_select.test | LINK | 0.119281 | 0.254846 | 0.299015 | — | — | — |
| deadline_timer.test | RUN | 0.737806 | 3.323744 | 2.957659 | 0.002992 | 0.002812 | 0.002813 |
| deadline_timer_select.test | RUN | 0.763121 | 3.258371 | 2.926352 | 0.003387 | 0.002754 | 0.003000 |
| deferred.test | RUN | 0.120555 | 0.233043 | 0.288680 | 0.001612 | 0.001685 | 0.001480 |
| deferred_select.test | RUN | 0.128011 | 0.237186 | 0.282204 | 0.001328 | 0.001426 | 0.001758 |
| detached.test | LINK | 0.134657 | 0.256353 | 0.333598 | — | — | — |
| detached_select.test | LINK | 0.139703 | 0.244105 | 0.351413 | — | — | — |
| disposition.test | RUN | 0.136771 | 0.594895 | 0.582747 | 0.001277 | 0.001609 | 0.001735 |
| disposition_select.test | RUN | 0.130052 | 0.601169 | 0.600420 | 0.001142 | 0.001696 | 0.001643 |
| error.test | RUN | 0.115869 | 0.569873 | 0.526226 | 0.001220 | 0.001654 | 0.001677 |
| error_select.test | RUN | 0.118481 | 0.569146 | 0.516208 | 0.001176 | 0.001717 | 0.001636 |
| file_base.test | LINK | 0.148870 | 0.478982 | 0.481130 | — | — | — |
| file_base_select.test | LINK | 0.150833 | 0.480595 | 0.411988 | — | — | — |
| fwd_first.test | LINK | 0.333944 | 0.763270 | 1.013289 | — | — | — |
| fwd_last.test | LINK | 0.337906 | 0.714272 | 0.997969 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.132380 | 0.292261 | 0.370104 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.133505 | 0.282215 | 0.387363 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.513505 | 2.599853 | 2.145167 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.519228 | 2.716315 | 2.088635 | — | — | — |
| generic_raw_protocol.test | LINK | 0.537058 | 2.699773 | 2.079018 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.528679 | 2.777516 | 2.127023 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.494914 | 2.232279 | 1.789632 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.490824 | 2.264537 | 1.800336 | — | — | — |
| generic_stream_protocol.test | LINK | 0.529058 | 2.407131 | 1.955199 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.513313 | 2.456337 | 1.916253 | — | — | — |
| high_resolution_timer.test | LINK | 0.217756 | 0.417159 | 0.549226 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.217038 | 0.443430 | 0.567703 | — | — | — |
| immediate.test | LINK | 0.148059 | 0.327048 | 0.341467 | — | — | — |
| immediate_select.test | LINK | 0.149895 | 0.333110 | 0.344986 | — | — | — |
| inline_executor.test | RUN | 0.180461 | 0.513360 | 0.510288 | 0.001305 | 0.001273 | 0.001271 |
| inline_executor_select.test | RUN | 0.182706 | 0.524743 | 0.519605 | 0.001093 | 0.001234 | 0.001257 |
| inline_or_executor.test | RUN | 0.297909 | 1.547235 | 1.011366 | 0.001320 | 0.001219 | 0.001180 |
| inline_or_executor_select.test | RUN | 0.302189 | 1.540833 | 1.098138 | 0.001228 | 0.001261 | 0.001222 |
| io_context.test | RUN | 0.426187 | 2.357662 | 1.767114 | 0.002182 | 0.001964 | 0.002126 |
| io_context_select.test | RUN | 0.418069 | 2.292282 | 1.746706 | 0.001859 | 0.001891 | 0.001810 |
| io_context_strand.test | RUN | 0.405213 | 1.989244 | 1.624653 | 0.002124 | 0.002059 | 0.002032 |
| io_context_strand_select.test | RUN | 0.415499 | 1.974435 | 1.624084 | 0.001874 | 0.001851 | 0.002180 |
| ip_address.test | LINK | 0.158390 | 0.465400 | 0.448739 | — | — | — |
| ip_address_select.test | LINK | 0.158402 | 0.473465 | 0.445633 | — | — | — |
| ip_address_v4.test | LINK | 0.161193 | 0.509856 | 0.489725 | — | — | — |
| ip_address_v4_select.test | LINK | 0.159169 | 0.591897 | 0.482849 | — | — | — |
| ip_address_v6.test | LINK | 0.179967 | 0.977131 | 0.816610 | — | — | — |
| ip_address_v6_select.test | LINK | 0.178350 | 0.967559 | 0.872662 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.142517 | 0.480280 | 0.619146 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.141794 | 0.470565 | 0.620372 | — | — | — |
| ip_basic_resolver.test | LINK | 0.226577 | 0.659184 | 0.945119 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.232085 | 0.693768 | 0.989919 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.077951 | 0.214184 | 0.270410 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.078747 | 0.215403 | 0.264089 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.138842 | 0.447882 | 0.622658 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.138612 | 0.450330 | 0.618816 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.136841 | 0.428485 | 0.583169 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.136962 | 0.443350 | 0.582636 | — | — | — |
| ip_host_name.test | RUN | 0.144978 | 0.572837 | 0.639341 | 0.001325 | 0.001698 | 0.001452 |
| ip_host_name_select.test | RUN | 0.145927 | 0.573218 | 0.644773 | 0.001233 | 0.001836 | 0.001277 |
| ip_icmp.test | RUN | 0.648903 | 5.418041 | 4.422577 | 0.001399 | 0.001666 | 0.001460 |
| ip_icmp_select.test | RUN | 0.651214 | 5.546180 | 4.287587 | 0.001201 | 0.001765 | 0.001378 |
| ip_multicast.test | RUN | 0.391847 | 2.680379 | 2.415703 | 0.001488 | 0.001870 | 0.001547 |
| ip_multicast_select.test | RUN | 0.393064 | 2.663162 | 2.401556 | 0.001334 | 0.001786 | 0.001622 |
| ip_resolver_query_base.test | LINK | 0.093538 | 0.245476 | 0.275979 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.092853 | 0.246945 | 0.280772 | — | — | — |
| ip_tcp.test | RUN | 0.947954 | 7.992236 | 7.154629 | 0.002010 | 0.002323 | 0.002764 |
| ip_tcp_select.test | RUN | 0.963825 | 8.404917 | 6.831849 | 0.001818 | 0.002400 | 0.002457 |
| ip_udp.test | RUN | 0.681101 | 5.722978 | 4.821391 | 0.001688 | 0.001867 | 0.001614 |
| ip_udp_select.test | RUN | 0.708148 | 5.837297 | 4.728902 | 0.001457 | 0.001920 | 0.001896 |
| ip_unicast.test | RUN | 0.357255 | 2.550754 | 2.212024 | 0.001443 | 0.001910 | 0.001550 |
| ip_unicast_select.test | RUN | 0.367363 | 2.595777 | 2.191323 | 0.001354 | 0.001688 | 0.001519 |
| ip_v6_only.test | RUN | 0.365142 | 2.629613 | 2.231742 | 0.001374 | 0.001817 | 0.001850 |
| ip_v6_only_select.test | RUN | 0.366144 | 2.701447 | 2.221051 | 0.001366 | 0.001883 | 0.001799 |
| is_read_buffered.test | RUN | 0.256203 | 0.780897 | 1.155975 | 0.001212 | 0.001718 | 0.001598 |
| is_read_buffered_select.test | RUN | 0.262217 | 0.788283 | 1.185655 | 0.001212 | 0.001718 | 0.001373 |
| is_write_buffered.test | RUN | 0.255526 | 0.777781 | 1.130971 | 0.001205 | 0.001617 | 0.001698 |
| is_write_buffered_select.test | RUN | 0.261696 | 0.791667 | 1.176804 | 0.001266 | 0.001481 | 0.001603 |
| local_basic_endpoint.test | LINK | 0.132683 | 0.420801 | 0.583604 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.136012 | 0.435577 | 0.587725 | — | — | — |
| local_connect_pair.test | LINK | 0.337924 | 2.483088 | 2.079706 | — | — | — |
| local_connect_pair_select.test | LINK | 0.344866 | 2.500049 | 2.040203 | — | — | — |
| local_datagram_protocol.test | LINK | 0.457703 | 3.191917 | 2.928839 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.468830 | 3.227685 | 2.885467 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.465364 | 3.237477 | 2.925383 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.476890 | 3.315166 | 2.919258 | — | — | — |
| local_stream_protocol.test | LINK | 0.432406 | 3.079883 | 2.775529 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.440253 | 3.085404 | 2.731520 | — | — | — |
| placeholders.test | LINK | 0.086777 | 0.236010 | 0.304777 | — | — | — |
| placeholders_select.test | LINK | 0.084150 | 0.230994 | 0.290327 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.221283 | 0.665917 | 0.862796 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.236105 | 0.712185 | 1.086052 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.237918 | 0.663139 | 0.879782 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.253080 | 0.709625 | 1.037633 | — | — | — |
| posix_descriptor_base.test | LINK | 0.102148 | 0.261657 | 0.293476 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.099627 | 0.245688 | 0.293999 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.460531 | 3.178047 | 2.811260 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.553701 | 3.202388 | 2.866746 | — | — | — |
| prepend.test | RUN | 0.554909 | 2.549334 | 2.204177 | 0.001874 | 0.001791 | 0.001681 |
| prepend_select.test | RUN | 0.520992 | 2.650989 | 2.199601 | 0.001977 | 0.001569 | 0.001832 |
| random_access_file.test | LINK | 0.310892 | 0.639944 | 0.722404 | — | — | — |
| random_access_file_select.test | LINK | 0.338615 | 0.695458 | 0.886305 | — | — | — |
| read.test | RUN | 1.529250 | 16.265613 | 12.088036 | 0.002473 | 0.002236 | 0.002295 |
| read_select.test | RUN | 1.558366 | 16.463533 | 12.253637 | 0.002420 | 0.002333 | 0.002418 |
| read_at.test | RUN | 1.548969 | 23.429429 | 16.267041 | 0.002761 | 0.002442 | 0.002547 |
| read_at_select.test | RUN | 1.561113 | 23.071214 | 16.483446 | 0.002992 | 0.002652 | 0.002509 |
| read_until.test | RUN | 0.847238 | 6.109699 | 4.685134 | 0.001776 | 0.002003 | 0.002454 |
| read_until_select.test | RUN | 0.853008 | 6.136099 | 4.855074 | 0.001918 | 0.002018 | 0.003743 |
| readable_pipe.test | LINK | 0.552804 | 2.641341 | 2.175132 | — | — | — |
| readable_pipe_select.test | LINK | 0.571403 | 2.800309 | 2.264409 | — | — | — |
| recycling_allocator.test | RUN | 0.171219 | 0.381504 | 0.434945 | 0.001609 | 0.001711 | 0.001327 |
| recycling_allocator_select.test | RUN | 0.168073 | 0.387999 | 0.418285 | 0.001516 | 0.001791 | 0.001792 |
| redirect_disposition.test | LINK | 0.702987 | 3.649671 | 3.242269 | — | — | — |
| redirect_disposition_select.test | LINK | 0.702563 | 3.604461 | 3.188061 | — | — | — |
| redirect_error.test | LINK | 0.641636 | 3.078475 | 2.849969 | — | — | — |
| redirect_error_select.test | LINK | 0.650972 | 3.119851 | 2.802626 | — | — | — |
| registered_buffer.test | LINK | 0.170004 | 0.300508 | 0.390269 | — | — | — |
| registered_buffer_select.test | LINK | 0.167200 | 0.303334 | 0.386345 | — | — | — |
| signal_set.test | RUN | 0.520135 | 2.548942 | 1.978642 | 0.001779 | 0.001829 | 0.001706 |
| signal_set_select.test | RUN | 0.535428 | 2.666577 | 2.159219 | 0.001614 | 0.001910 | 0.001627 |
| signal_set_base.test | LINK | 0.142254 | 0.241965 | 0.265126 | — | — | — |
| signal_set_base_select.test | LINK | 0.139514 | 0.252578 | 0.266219 | — | — | — |
| socket_base.test | RUN | 0.657457 | 4.068713 | 2.912776 | 0.001866 | 0.001952 | 0.001870 |
| socket_base_select.test | RUN | 0.646669 | 3.922717 | 2.889090 | 0.001906 | 0.001706 | 0.001863 |
| spawn.test | RUN | 1.095589 | 6.313073 | 5.387570 | 0.002140 | 0.001870 | 0.001719 |
| spawn_select.test | RUN | 1.104853 | 6.318846 | 5.351241 | 0.001798 | 0.002100 | 0.002014 |
| static_thread_pool.test | RUN | 0.290536 | 0.627677 | 0.670772 | 0.001666 | 0.001780 | 0.001720 |
| static_thread_pool_select.test | RUN | 0.310126 | 0.653956 | 0.882025 | 0.001530 | 0.001400 | 0.001839 |
| steady_timer.test | LINK | 0.332684 | 0.647031 | 0.939116 | — | — | — |
| steady_timer_select.test | LINK | 0.342336 | 0.663224 | 0.964197 | — | — | — |
| strand.test | RUN | 0.696287 | 3.507753 | 3.173232 | 0.002364 | 0.002337 | 0.002585 |
| strand_select.test | RUN | 0.705228 | 3.463690 | 3.063631 | 0.002314 | 0.002414 | 0.002082 |
| stream_file.test | LINK | 0.311386 | 0.667818 | 0.708842 | — | — | — |
| stream_file_select.test | LINK | 0.333721 | 0.687674 | 0.877938 | — | — | — |
| streambuf.test | RUN | 0.198781 | 0.423774 | 0.486817 | 0.001450 | 0.001338 | 0.001716 |
| streambuf_select.test | RUN | 0.156468 | 0.377995 | 0.372238 | 0.001435 | 0.001436 | 0.001254 |
| system_timer.test | LINK | 0.454748 | 2.341950 | 1.781971 | — | — | — |
| system_timer_select.test | LINK | 0.455922 | 2.329292 | 1.706739 | — | — | — |
| system_context.test | LINK | 0.215095 | 0.397380 | 0.412846 | — | — | — |
| system_context_select.test | LINK | 0.225738 | 0.444806 | 0.509365 | — | — | — |
| system_executor.test | LINK | 0.276148 | 1.384235 | 0.835515 | — | — | — |
| system_executor_select.test | LINK | 0.293851 | 1.291986 | 0.901561 | — | — | — |
| this_coro.test | LINK | 0.083641 | 0.153264 | 0.166677 | — | — | — |
| this_coro_select.test | LINK | 0.086184 | 0.148437 | 0.170525 | — | — | — |
| thread_pool.test | RUN | 0.323435 | 1.688879 | 1.076389 | 0.002676 | 0.002404 | 0.002186 |
| thread_pool_select.test | RUN | 0.337486 | 1.693041 | 1.159342 | 0.002624 | 0.002452 | 0.002250 |
| time_traits.test | LINK | 0.197200 | 0.334764 | 0.330943 | — | — | — |
| time_traits_select.test | LINK | 0.191767 | 0.333607 | 0.336833 | — | — | — |
| ts_buffer.test | LINK | 0.173399 | 0.356305 | 0.359678 | — | — | — |
| ts_buffer_select.test | LINK | 0.227462 | 0.365713 | 0.363096 | — | — | — |
| ts_executor.test | LINK | 0.251170 | 0.700263 | 0.567635 | — | — | — |
| ts_executor_select.test | LINK | 0.260983 | 0.780398 | 0.667091 | — | — | — |
| ts_internet.test | LINK | 0.270998 | 0.765436 | 0.670359 | — | — | — |
| ts_internet_select.test | LINK | 0.272823 | 0.811763 | 0.700070 | — | — | — |
| ts_io_context.test | LINK | 0.215396 | 0.603286 | 0.439227 | — | — | — |
| ts_io_context_select.test | LINK | 0.231739 | 0.644168 | 0.793339 | — | — | — |
| ts_net.test | LINK | 0.320864 | 0.940188 | 1.371029 | — | — | — |
| ts_net_select.test | LINK | 0.340604 | 0.967027 | 1.247144 | — | — | — |
| ts_netfwd.test | LINK | 0.314883 | 0.963678 | 1.355315 | — | — | — |
| ts_netfwd_select.test | LINK | 0.323772 | 0.979352 | 1.387147 | — | — | — |
| ts_socket.test | LINK | 0.262112 | 0.761086 | 1.022017 | — | — | — |
| ts_socket_select.test | LINK | 0.264166 | 0.784748 | 1.050256 | — | — | — |
| ts_timer.test | LINK | 0.232913 | 0.684944 | 0.888378 | — | — | — |
| ts_timer_select.test | LINK | 0.235120 | 0.679096 | 0.933761 | — | — | — |
| use_awaitable.test | LINK | 0.077666 | 0.222229 | 0.267461 | — | — | — |
| use_awaitable_select.test | LINK | 0.082619 | 0.231708 | 0.259946 | — | — | — |
| wait_traits.test | LINK | 0.086495 | 0.233972 | 0.268402 | — | — | — |
| wait_traits_select.test | LINK | 0.084691 | 0.220910 | 0.269467 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.089876 | 0.217847 | 0.257918 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.116359 | 0.219358 | 0.249552 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.086236 | 0.216231 | 0.261534 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.085932 | 0.208526 | 0.253945 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.090650 | 0.208993 | 0.254966 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.084407 | 0.213829 | 0.254716 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.084399 | 0.212262 | 0.261772 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.084304 | 0.224116 | 0.254305 | — | — | — |
| windows_object_handle.test | LINK | 0.218451 | 0.608746 | 0.690749 | — | — | — |
| windows_object_handle_select.test | LINK | 0.223592 | 0.622936 | 0.848785 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.228442 | 0.619983 | 0.743828 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.243161 | 0.683814 | 0.921217 | — | — | — |
| windows_random_access_handle.test | LINK | 0.219474 | 0.618835 | 0.687925 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.274370 | 0.639148 | 0.867020 | — | — | — |
| windows_stream_handle.test | LINK | 0.322541 | 0.604429 | 0.693710 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.336616 | 0.658602 | 0.875916 | — | — | — |
| writable_pipe.test | LINK | 0.559761 | 2.634747 | 2.196049 | — | — | — |
| writable_pipe_select.test | LINK | 0.572700 | 2.722365 | 2.345955 | — | — | — |
| write.test | RUN | 1.576181 | 13.820072 | 12.209480 | 0.002453 | 0.002428 | 0.002325 |
| write_select.test | RUN | 1.561368 | 13.832544 | 12.235042 | 0.002434 | 0.002289 | 0.002188 |
| write_at.test | RUN | 1.596792 | 21.089440 | 15.668532 | 0.002531 | 0.002479 | 0.002573 |
| write_at_select.test | RUN | 1.619122 | 20.862715 | 15.771759 | 0.002623 | 0.002460 | 0.002461 |
| any_executor.test | RUN | 0.684970 | 6.793595 | 4.799352 | 0.002296 | 0.002364 | 0.002509 |
| blocking.test | RUN | 1.468319 | 7.820026 | 9.585897 | 0.006484 | 0.006225 | 0.006317 |
| blocking_adaptation.test | RUN | 0.734413 | 3.282173 | 4.348059 | 0.003599 | 0.003204 | 0.003397 |
| context_as.test | RUN | 0.436205 | 2.322664 | 1.564326 | 0.001816 | 0.001898 | 0.001892 |
| executor.test | RUN | 0.121333 | 0.242179 | 0.291008 | 0.001345 | 0.001801 | 0.001665 |
| inline_exception_handling.test | RUN | 1.407584 | 6.826910 | 8.986009 | 0.005590 | 0.004585 | 0.004580 |
| invocable_archetype.test | RUN | 0.152986 | 0.236408 | 0.268785 | 0.001708 | 0.001418 | 0.001693 |
| mapping.test | RUN | 1.439404 | 7.306276 | 9.271324 | 0.004711 | 0.004612 | 0.004604 |
| outstanding_work.test | RUN | 0.639217 | 3.128229 | 4.064471 | 0.003877 | 0.003321 | 0.003382 |
| prefer_only.test | RUN | 0.218622 | 1.314128 | 0.917088 | 0.001711 | 0.001608 | 0.001468 |
| relationship.test | RUN | 0.509800 | 3.052055 | 4.097523 | 0.002696 | 0.003660 | 0.002443 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.974×, 0.992× | 0.997× |
| clang | 0.941× | 0.931×, 0.951× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001450s | 0.001452s | 0.001393s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001438s | 0.001450s | 0.001427s | byte equality observed |
| any_completion_handler.test | 10 | 0.001158s | 0.001152s | 0.001124s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001178s | 0.001142s | 0.001139s | byte equality observed |
| any_io_executor.test | 3 | 0.001403s | 0.001413s | 0.001394s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001423s | 0.001410s | 0.001394s | byte equality observed |
| append.test | 9 | 0.001099s | 0.001099s | 0.001070s | byte equality observed |
| append_select.test | 7 | 0.001081s | 0.001083s | 0.001070s | byte equality observed |
| as_tuple.test | 10 | 0.001172s | 0.001176s | 0.001173s | byte equality observed |
| as_tuple_select.test | 9 | 0.001102s | 0.001124s | 0.001112s | byte equality observed |
| bind_allocator.test | 1 | 0.001515s | 0.001448s | 0.001564s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001275s | 0.001264s | 0.001272s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001062s | 0.001025s | 0.001026s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000950s | 0.000941s | 0.000958s | byte equality observed |
| bind_executor.test | 1 | 0.001497s | 0.001345s | 0.001459s | byte equality observed |
| bind_executor_select.test | 1 | 0.001877s | 0.001475s | 0.001836s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000994s | 0.000978s | 0.000994s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000969s | 0.000971s | 0.000959s | byte equality observed |
| buffer.test | 10 | 0.000938s | 0.000924s | 0.000924s | byte equality observed |
| buffer_select.test | 10 | 0.000942s | 0.000935s | 0.000909s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001227s | 0.001218s | 0.001221s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001182s | 0.001159s | 0.001166s | byte equality observed |
| buffered_stream.test | 10 | 0.001204s | 0.001188s | 0.001174s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001180s | 0.001169s | 0.001190s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001194s | 0.001201s | 0.001165s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001161s | 0.001157s | 0.001138s | byte equality observed |
| buffers_iterator.test | 10 | 0.000904s | 0.000885s | 0.000881s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000873s | 0.000863s | 0.000904s | byte equality observed |
| cancel_after.test | 1 | 0.002661s | 0.002043s | 0.002388s | byte equality observed |
| cancel_after_select.test | 1 | 0.002246s | 0.001769s | 0.002041s | byte equality observed |
| cancel_at.test | 1 | 0.002925s | 0.002203s | 0.002894s | byte equality observed |
| cancel_at_select.test | 1 | 0.002890s | 0.001876s | 0.002993s | byte equality observed |
| co_composed.test | 10 | 0.000918s | 0.000879s | 0.000944s | byte equality observed |
| co_composed_select.test | 10 | 0.000903s | 0.000877s | 0.000878s | byte equality observed |
| compose.test | 1 | 0.001528s | 0.001256s | 0.001380s | byte equality observed |
| compose_select.test | 1 | 0.001165s | 0.001105s | 0.001129s | byte equality observed |
| composed.test | 1 | 0.001799s | 0.001334s | 0.001458s | byte equality observed |
| composed_select.test | 1 | 0.001290s | 0.001165s | 0.001167s | byte equality observed |
| config.test | 10 | 0.000977s | 0.000948s | 0.000959s | byte equality observed |
| config_select.test | 10 | 0.000976s | 0.000984s | 0.000937s | byte equality observed |
| connect_pipe.test | 10 | 0.001003s | 0.001006s | 0.000956s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000984s | 0.000979s | 0.000957s | byte equality observed |
| consign.test | 10 | 0.000995s | 0.000983s | 0.000952s | byte equality observed |
| consign_select.test | 10 | 0.000935s | 0.000934s | 0.000954s | byte equality observed |
| deadline_timer.test | 1 | 0.002109s | 0.001964s | 0.002194s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001953s | 0.001841s | 0.001930s | byte equality observed |
| deferred.test | 10 | 0.000916s | 0.000862s | 0.000874s | byte equality observed |
| deferred_select.test | 10 | 0.000860s | 0.000830s | 0.000839s | byte equality observed |
| disposition.test | 10 | 0.000917s | 0.000891s | 0.000909s | byte equality observed |
| disposition_select.test | 10 | 0.000910s | 0.000904s | 0.000913s | byte equality observed |
| error.test | 10 | 0.000889s | 0.000881s | 0.000898s | byte equality observed |
| error_select.test | 10 | 0.000881s | 0.000880s | 0.000882s | byte equality observed |
| inline_executor.test | 10 | 0.000891s | 0.000906s | 0.000873s | byte equality observed |
| inline_executor_select.test | 10 | 0.000898s | 0.000900s | 0.000862s | byte equality observed |
| inline_or_executor.test | 10 | 0.000901s | 0.000902s | 0.000862s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000899s | 0.000908s | 0.000860s | byte equality observed |
| io_context.test | 1 | 0.001772s | 0.001669s | 0.001658s | byte equality observed |
| io_context_select.test | 1 | 0.002017s | 0.001580s | 0.001911s | byte equality observed |
| io_context_strand.test | 1 | 0.002135s | 0.002030s | 0.002076s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001871s | 0.001669s | 0.001678s | byte equality observed |
| ip_host_name.test | 10 | 0.000896s | 0.000899s | 0.000906s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000850s | 0.000864s | 0.000857s | byte equality observed |
| ip_icmp.test | 10 | 0.000892s | 0.000899s | 0.000866s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000892s | 0.000881s | 0.000853s | byte equality observed |
| ip_multicast.test | 10 | 0.000959s | 0.000944s | 0.000934s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000943s | 0.000917s | 0.000906s | byte equality observed |
| ip_tcp.test | 10 | 0.001343s | 0.001287s | 0.001272s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001284s | 0.001233s | 0.001232s | byte equality observed |
| ip_udp.test | 10 | 0.001001s | 0.000945s | 0.000940s | byte equality observed |
| ip_udp_select.test | 10 | 0.000980s | 0.000949s | 0.000936s | byte equality observed |
| ip_unicast.test | 10 | 0.000945s | 0.000917s | 0.000896s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000928s | 0.000893s | 0.000891s | byte equality observed |
| ip_v6_only.test | 10 | 0.000943s | 0.000901s | 0.000919s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000930s | 0.000890s | 0.000909s | byte equality observed |
| is_read_buffered.test | 10 | 0.000884s | 0.000828s | 0.000839s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000888s | 0.000829s | 0.000834s | byte equality observed |
| is_write_buffered.test | 10 | 0.000901s | 0.000869s | 0.000829s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000887s | 0.000890s | 0.000823s | byte equality observed |
| prepend.test | 10 | 0.000961s | 0.000959s | 0.000881s | byte equality observed |
| prepend_select.test | 10 | 0.000958s | 0.000972s | 0.000861s | byte equality observed |
| read.test | 10 | 0.001325s | 0.001300s | 0.001189s | byte equality observed |
| read_at.test | 10 | 0.001498s | 0.001550s | 0.001361s | byte equality observed |
| read_at_select.test | 10 | 0.001567s | 0.001573s | 0.001379s | byte equality observed |
| read_select.test | 10 | 0.001321s | 0.001334s | 0.001260s | byte equality observed |
| read_until.test | 10 | 0.001100s | 0.001089s | 0.001060s | byte equality observed |
| read_until_select.test | 10 | 0.001125s | 0.001087s | 0.001066s | byte equality observed |
| recycling_allocator.test | 10 | 0.000904s | 0.000925s | 0.000906s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000918s | 0.000913s | 0.000918s | byte equality observed |
| signal_set.test | 10 | 0.000926s | 0.000922s | 0.000968s | byte equality observed |
| signal_set_select.test | 10 | 0.000932s | 0.000931s | 0.000922s | byte equality observed |
| socket_base.test | 10 | 0.001036s | 0.001028s | 0.001031s | byte equality observed |
| socket_base_select.test | 10 | 0.001017s | 0.001020s | 0.000999s | byte equality observed |
| spawn.test | 10 | 0.001138s | 0.001082s | 0.001104s | byte equality observed |
| spawn_select.test | 10 | 0.001122s | 0.001103s | 0.001105s | byte equality observed |
| static_thread_pool.test | 10 | 0.000933s | 0.000893s | 0.000897s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000911s | 0.000886s | 0.000853s | byte equality observed |
| strand.test | 1 | 0.001709s | 0.001648s | 0.001804s | byte equality observed |
| strand_select.test | 1 | 0.001471s | 0.001395s | 0.001421s | byte equality observed |
| streambuf.test | 10 | 0.000961s | 0.000935s | 0.000949s | byte equality observed |
| streambuf_select.test | 10 | 0.000943s | 0.000917s | 0.000929s | byte equality observed |
| thread_pool.test | 10 | 0.001913s | 0.001894s | 0.001944s | byte equality observed |
| thread_pool_select.test | 10 | 0.001922s | 0.001869s | 0.001937s | byte equality observed |
| write.test | 10 | 0.001349s | 0.001316s | 0.001364s | byte equality observed |
| write_at.test | 10 | 0.001440s | 0.001425s | 0.001409s | byte equality observed |
| write_at_select.test | 10 | 0.001427s | 0.001402s | 0.001367s | byte equality observed |
| write_select.test | 10 | 0.001361s | 0.001342s | 0.001304s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43639138948).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
