# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.528720 | 3.377599 | 2.896254 | 0.001608 | 0.001827 | 0.001757 |
| any_completion_executor_select.test | RUN | 0.533688 | 3.393866 | 3.068098 | 0.001416 | 0.001751 | 0.001888 |
| any_completion_handler.test | RUN | 0.583362 | 3.104709 | 2.703225 | 0.001446 | 0.001394 | 0.001398 |
| any_completion_handler_select.test | RUN | 0.592662 | 3.204130 | 2.869698 | 0.001164 | 0.001738 | 0.001475 |
| any_io_executor.test | RUN | 0.557887 | 3.679612 | 3.157883 | 0.001654 | 0.001719 | 0.001683 |
| any_io_executor_select.test | RUN | 0.560808 | 3.638116 | 3.308861 | 0.001507 | 0.001878 | 0.001595 |
| append.test | RUN | 0.507668 | 2.951447 | 2.382984 | 0.001176 | 0.001474 | 0.001220 |
| append_select.test | RUN | 0.514580 | 2.986712 | 2.391297 | 0.001334 | 0.001452 | 0.001270 |
| as_tuple.test | RUN | 0.666482 | 3.577047 | 3.342887 | 0.001373 | 0.001466 | 0.001297 |
| as_tuple_select.test | RUN | 0.679608 | 3.512355 | 3.306896 | 0.001221 | 0.001319 | 0.001264 |
| associated_allocator.test | LINK | 0.124913 | 0.290102 | 0.349268 | — | — | — |
| associated_allocator_select.test | LINK | 0.128889 | 0.289393 | 0.358455 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.142714 | 0.310697 | 0.376204 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.141629 | 0.316268 | 0.405210 | — | — | — |
| associated_executor.test | LINK | 0.207713 | 0.542268 | 0.631998 | — | — | — |
| associated_executor_select.test | LINK | 0.207239 | 0.542446 | 0.636008 | — | — | — |
| associated_immediate_executor.test | LINK | 0.188563 | 0.504126 | 0.587355 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.185705 | 0.505562 | 0.555786 | — | — | — |
| associator.test | LINK | 0.107111 | 0.231338 | 0.296268 | — | — | — |
| associator_select.test | LINK | 0.100082 | 0.238843 | 0.291967 | — | — | — |
| awaitable.test | LINK | 0.100382 | 0.240307 | 0.292550 | — | — | — |
| awaitable_select.test | LINK | 0.104935 | 0.234137 | 0.287184 | — | — | — |
| basic_datagram_socket.test | LINK | 0.322745 | 0.769446 | 1.102800 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.326123 | 0.785413 | 1.127558 | — | — | — |
| basic_deadline_timer.test | LINK | 0.382750 | 0.883590 | 1.280077 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.393468 | 0.916714 | 1.293375 | — | — | — |
| basic_file.test | LINK | 0.103265 | 0.240033 | 0.292813 | — | — | — |
| basic_file_select.test | LINK | 0.100022 | 0.237929 | 0.291491 | — | — | — |
| basic_random_access_file.test | LINK | 0.100991 | 0.238955 | 0.291258 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.102687 | 0.240365 | 0.289621 | — | — | — |
| basic_raw_socket.test | LINK | 0.321939 | 0.760312 | 1.093187 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.330927 | 0.775090 | 1.120534 | — | — | — |
| basic_readable_pipe.test | LINK | 0.308026 | 0.724055 | 0.949063 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.319525 | 0.775234 | 1.149968 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.325905 | 0.757832 | 1.085980 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.330236 | 0.783808 | 1.123573 | — | — | — |
| basic_signal_set.test | LINK | 0.296104 | 0.694039 | 0.854469 | — | — | — |
| basic_signal_set_select.test | LINK | 0.309692 | 0.749381 | 1.064207 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.328461 | 0.759077 | 1.100163 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.328479 | 0.787131 | 1.115260 | — | — | — |
| basic_stream_file.test | LINK | 0.104795 | 0.237927 | 0.289629 | — | — | — |
| basic_stream_file_select.test | LINK | 0.102361 | 0.242762 | 0.286550 | — | — | — |
| basic_stream_socket.test | LINK | 0.327914 | 0.759557 | 1.091957 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.331470 | 0.782528 | 1.116467 | — | — | — |
| basic_streambuf.test | LINK | 0.156718 | 0.345490 | 0.435456 | — | — | — |
| basic_streambuf_select.test | LINK | 0.158113 | 0.343305 | 0.429310 | — | — | — |
| basic_waitable_timer.test | LINK | 0.307970 | 0.720829 | 1.024296 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.310085 | 0.725125 | 1.036079 | — | — | — |
| basic_writable_pipe.test | LINK | 0.308006 | 0.728296 | 0.948956 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.322128 | 0.767382 | 1.151826 | — | — | — |
| bind_allocator.test | RUN | 0.553392 | 2.941338 | 2.585071 | 0.001705 | 0.001895 | 0.001639 |
| bind_allocator_select.test | RUN | 0.562685 | 3.033843 | 2.606344 | 0.001604 | 0.001689 | 0.001613 |
| bind_cancellation_slot.test | RUN | 0.565924 | 3.007185 | 2.614554 | 0.001069 | 0.001009 | 0.000924 |
| bind_cancellation_slot_select.test | RUN | 0.578749 | 2.968479 | 2.527173 | 0.000953 | 0.001011 | 0.000963 |
| bind_executor.test | RUN | 0.382159 | 2.055525 | 1.659919 | 0.001646 | 0.001598 | 0.001564 |
| bind_executor_select.test | RUN | 0.390644 | 2.078825 | 1.656679 | 0.001430 | 0.001604 | 0.001424 |
| bind_immediate_executor.test | RUN | 0.282950 | 1.698210 | 1.045297 | 0.000939 | 0.000980 | 0.000899 |
| bind_immediate_executor_select.test | RUN | 0.292004 | 1.652917 | 1.149377 | 0.000924 | 0.000952 | 0.000911 |
| buffer.test | RUN | 0.175914 | 0.696842 | 0.615904 | 0.000945 | 0.000925 | 0.000885 |
| buffer_select.test | RUN | 0.172142 | 0.691720 | 0.611987 | 0.000866 | 0.000936 | 0.000870 |
| buffer_registration.test | LINK | 0.130731 | 0.343284 | 0.360415 | — | — | — |
| buffer_registration_select.test | LINK | 0.131204 | 0.345969 | 0.357585 | — | — | — |
| buffered_read_stream.test | RUN | 0.660172 | 4.517042 | 3.533307 | 0.001202 | 0.001563 | 0.001670 |
| buffered_read_stream_select.test | RUN | 0.661172 | 4.625266 | 3.678046 | 0.001125 | 0.001816 | 0.001645 |
| buffered_stream.test | RUN | 0.911115 | 7.146894 | 6.439677 | 0.001678 | 0.001821 | 0.001547 |
| buffered_stream_select.test | RUN | 0.934580 | 7.229367 | 6.251476 | 0.001642 | 0.001852 | 0.001635 |
| buffered_write_stream.test | RUN | 1.089794 | 6.249921 | 5.523182 | 0.001759 | 0.001634 | 0.001516 |
| buffered_write_stream_select.test | RUN | 1.105592 | 6.256460 | 5.322548 | 0.001669 | 0.001546 | 0.001682 |
| buffers_iterator.test | RUN | 0.318730 | 0.551929 | 0.887243 | 0.001227 | 0.001441 | 0.001217 |
| buffers_iterator_select.test | RUN | 0.318302 | 0.548924 | 0.886780 | 0.001123 | 0.001368 | 0.001195 |
| cancel_after.test | RUN | 0.899700 | 4.838014 | 4.105316 | 0.003760 | 0.003487 | 0.003284 |
| cancel_after_select.test | RUN | 0.911873 | 4.792946 | 4.018447 | 0.002972 | 0.003438 | 0.002934 |
| cancel_at.test | RUN | 0.829222 | 4.304063 | 4.071633 | 0.003008 | 0.002953 | 0.002833 |
| cancel_at_select.test | RUN | 0.816743 | 4.291090 | 3.965648 | 0.002827 | 0.002882 | 0.002840 |
| cancellation_signal.test | LINK | 0.095666 | 0.200746 | 0.240472 | — | — | — |
| cancellation_signal_select.test | LINK | 0.093829 | 0.200252 | 0.332138 | — | — | — |
| cancellation_state.test | LINK | 0.091674 | 0.199103 | 0.367654 | — | — | — |
| cancellation_state_select.test | LINK | 0.104426 | 0.200119 | 0.364872 | — | — | — |
| cancellation_type.test | LINK | 0.107922 | 0.157911 | 0.291748 | — | — | — |
| cancellation_type_select.test | LINK | 0.099606 | 0.157544 | 0.291211 | — | — | — |
| co_composed.test | RUN | 0.104000 | 0.157249 | 0.285986 | 0.001134 | 0.000916 | 0.001199 |
| co_composed_select.test | RUN | 0.106193 | 0.158719 | 0.289711 | 0.001036 | 0.000923 | 0.001252 |
| co_spawn.test | LINK | 0.100064 | 0.170830 | 0.291254 | — | — | — |
| co_spawn_select.test | LINK | 0.100322 | 0.228741 | 0.287367 | — | — | — |
| completion_condition.test | LINK | 0.145087 | 0.366149 | 0.384563 | — | — | — |
| completion_condition_select.test | LINK | 0.135362 | 0.361889 | 0.392036 | — | — | — |
| compose.test | RUN | 0.684317 | 3.749960 | 3.314536 | 0.001797 | 0.001806 | 0.001841 |
| compose_select.test | RUN | 0.690879 | 3.696842 | 3.276301 | 0.001242 | 0.001890 | 0.001644 |
| composed.test | RUN | 0.682186 | 3.662529 | 3.195085 | 0.001424 | 0.001496 | 0.001348 |
| composed_select.test | RUN | 0.679211 | 3.618961 | 3.200073 | 0.001312 | 0.001396 | 0.001354 |
| config.test | RUN | 0.357492 | 2.309666 | 1.383849 | 0.001382 | 0.001296 | 0.001334 |
| config_select.test | RUN | 0.358792 | 2.433626 | 1.623676 | 0.001353 | 0.001276 | 0.001223 |
| connect.test | LINK | 1.099122 | 7.875336 | 6.771898 | — | — | — |
| connect_select.test | LINK | 1.112460 | 7.791385 | 6.828960 | — | — | — |
| connect_pipe.test | RUN | 0.576274 | 2.981515 | 2.558620 | 0.001594 | 0.001550 | 0.001310 |
| connect_pipe_select.test | RUN | 0.594742 | 3.096318 | 2.750510 | 0.001105 | 0.001424 | 0.001249 |
| consign.test | RUN | 0.506658 | 2.934744 | 2.391343 | 0.001500 | 0.001287 | 0.001324 |
| consign_select.test | RUN | 0.514434 | 2.972424 | 2.391197 | 0.001283 | 0.001564 | 0.001160 |
| coroutine.test | LINK | 0.108808 | 0.282661 | 0.333286 | — | — | — |
| coroutine_select.test | LINK | 0.108745 | 0.279048 | 0.322002 | — | — | — |
| deadline_timer.test | RUN | 0.743187 | 3.746375 | 3.331353 | 0.002730 | 0.003278 | 0.002562 |
| deadline_timer_select.test | RUN | 0.752659 | 3.720508 | 3.298499 | 0.002379 | 0.002470 | 0.002575 |
| deferred.test | RUN | 0.114875 | 0.256291 | 0.309119 | 0.001212 | 0.001261 | 0.001122 |
| deferred_select.test | RUN | 0.115474 | 0.255232 | 0.305710 | 0.001084 | 0.001445 | 0.001139 |
| detached.test | LINK | 0.127807 | 0.285809 | 0.346683 | — | — | — |
| detached_select.test | LINK | 0.129358 | 0.285550 | 0.346647 | — | — | — |
| disposition.test | RUN | 0.124294 | 0.701812 | 0.650861 | 0.000966 | 0.001377 | 0.001366 |
| disposition_select.test | RUN | 0.124530 | 0.696458 | 0.646494 | 0.000966 | 0.001315 | 0.001200 |
| error.test | RUN | 0.113124 | 0.668555 | 0.574859 | 0.000901 | 0.001295 | 0.001231 |
| error_select.test | RUN | 0.113590 | 0.669127 | 0.572425 | 0.000929 | 0.001409 | 0.001283 |
| file_base.test | LINK | 0.140677 | 0.547832 | 0.626740 | — | — | — |
| file_base_select.test | LINK | 0.140174 | 0.541054 | 0.561708 | — | — | — |
| fwd_first.test | LINK | 0.326936 | 0.927408 | 1.134745 | — | — | — |
| fwd_last.test | LINK | 0.326129 | 0.777500 | 1.136548 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.120588 | 0.316282 | 0.409119 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.119661 | 0.318013 | 0.405315 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.555661 | 2.980642 | 2.394547 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.548099 | 3.059198 | 2.373899 | — | — | — |
| generic_raw_protocol.test | LINK | 0.552171 | 2.977325 | 2.414626 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.546675 | 3.053506 | 2.363030 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.472700 | 2.507704 | 2.048108 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.475493 | 2.540508 | 2.028036 | — | — | — |
| generic_stream_protocol.test | LINK | 0.504647 | 2.719176 | 2.185986 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.504602 | 2.765009 | 2.182586 | — | — | — |
| high_resolution_timer.test | LINK | 0.206571 | 0.472294 | 0.632954 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.214600 | 0.487698 | 0.649911 | — | — | — |
| immediate.test | LINK | 0.141528 | 0.363001 | 0.388697 | — | — | — |
| immediate_select.test | LINK | 0.140471 | 0.363456 | 0.390509 | — | — | — |
| inline_executor.test | RUN | 0.177425 | 0.571104 | 0.587249 | 0.000903 | 0.000985 | 0.000932 |
| inline_executor_select.test | RUN | 0.175863 | 0.574634 | 0.592870 | 0.000949 | 0.000940 | 0.000914 |
| inline_or_executor.test | RUN | 0.297124 | 1.746497 | 1.196750 | 0.000955 | 0.001020 | 0.000900 |
| inline_or_executor_select.test | RUN | 0.307264 | 1.788067 | 1.285321 | 0.000940 | 0.000947 | 0.000883 |
| io_context.test | RUN | 0.444729 | 2.673829 | 2.094260 | 0.001845 | 0.001872 | 0.001937 |
| io_context_select.test | RUN | 0.446609 | 2.617781 | 2.072903 | 0.001622 | 0.001680 | 0.001776 |
| io_context_strand.test | RUN | 0.413953 | 2.254547 | 1.819513 | 0.001712 | 0.001786 | 0.001760 |
| io_context_strand_select.test | RUN | 0.420873 | 2.232528 | 1.794914 | 0.001423 | 0.001545 | 0.001574 |
| ip_address.test | LINK | 0.146390 | 0.508714 | 0.605589 | — | — | — |
| ip_address_select.test | LINK | 0.146626 | 0.508249 | 0.612166 | — | — | — |
| ip_address_v4.test | LINK | 0.147659 | 0.534488 | 0.908612 | — | — | — |
| ip_address_v4_select.test | LINK | 0.151250 | 0.535154 | 0.891731 | — | — | — |
| ip_address_v6.test | LINK | 0.170710 | 0.704175 | 1.086207 | — | — | — |
| ip_address_v6_select.test | LINK | 0.169493 | 0.702027 | 1.101997 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.124827 | 0.333977 | 0.708116 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.125065 | 0.332450 | 0.700185 | — | — | — |
| ip_basic_resolver.test | LINK | 0.210183 | 0.486245 | 1.032413 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.212642 | 0.607939 | 1.067201 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.069421 | 0.243037 | 0.294959 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.069220 | 0.233538 | 0.296826 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.126802 | 0.488492 | 0.680788 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.124758 | 0.489451 | 0.679324 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.119633 | 0.472272 | 0.651147 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.118650 | 0.476581 | 0.647707 | — | — | — |
| ip_host_name.test | RUN | 0.130379 | 0.655476 | 0.741110 | 0.000857 | 0.001285 | 0.001123 |
| ip_host_name_select.test | RUN | 0.128641 | 0.643221 | 0.744388 | 0.000863 | 0.001184 | 0.001153 |
| ip_icmp.test | RUN | 0.691876 | 6.292425 | 4.963561 | 0.000956 | 0.001645 | 0.001176 |
| ip_icmp_select.test | RUN | 0.698299 | 6.436364 | 4.834431 | 0.001131 | 0.001298 | 0.001194 |
| ip_multicast.test | RUN | 0.385992 | 3.122806 | 2.761082 | 0.001084 | 0.001392 | 0.001348 |
| ip_multicast_select.test | RUN | 0.389921 | 3.072660 | 2.733693 | 0.000975 | 0.001431 | 0.001248 |
| ip_resolver_query_base.test | LINK | 0.084569 | 0.259380 | 0.304701 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.081431 | 0.257007 | 0.302269 | — | — | — |
| ip_tcp.test | RUN | 1.035398 | 9.350148 | 7.662666 | 0.001281 | 0.001797 | 0.001732 |
| ip_tcp_select.test | RUN | 1.042657 | 9.687913 | 7.444672 | 0.001182 | 0.001814 | 0.001796 |
| ip_udp.test | RUN | 0.735859 | 6.627269 | 5.243415 | 0.001116 | 0.001556 | 0.001300 |
| ip_udp_select.test | RUN | 0.734419 | 6.763687 | 5.101548 | 0.001043 | 0.001380 | 0.001315 |
| ip_unicast.test | RUN | 0.351765 | 2.853032 | 2.434681 | 0.001010 | 0.001382 | 0.001256 |
| ip_unicast_select.test | RUN | 0.356052 | 2.873573 | 2.383169 | 0.000903 | 0.001399 | 0.001294 |
| ip_v6_only.test | RUN | 0.363816 | 2.933657 | 2.540719 | 0.001026 | 0.001411 | 0.001283 |
| ip_v6_only_select.test | RUN | 0.371341 | 3.024024 | 2.503682 | 0.001204 | 0.001426 | 0.001378 |
| is_read_buffered.test | RUN | 0.246113 | 0.868584 | 1.307409 | 0.000911 | 0.000963 | 0.001144 |
| is_read_buffered_select.test | RUN | 0.249597 | 0.885593 | 1.322593 | 0.000859 | 0.001210 | 0.001188 |
| is_write_buffered.test | RUN | 0.245301 | 0.866072 | 1.260230 | 0.000912 | 0.001232 | 0.001158 |
| is_write_buffered_select.test | RUN | 0.247959 | 0.878768 | 1.295864 | 0.000899 | 0.001192 | 0.001393 |
| local_basic_endpoint.test | LINK | 0.120908 | 0.484132 | 0.655921 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.118852 | 0.475228 | 0.658355 | — | — | — |
| local_connect_pair.test | LINK | 0.339885 | 2.880899 | 2.324982 | — | — | — |
| local_connect_pair_select.test | LINK | 0.344648 | 2.871235 | 2.275311 | — | — | — |
| local_datagram_protocol.test | LINK | 0.474619 | 3.774626 | 3.271431 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.482349 | 3.794240 | 3.214813 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.478578 | 3.664152 | 3.253139 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.477441 | 3.745626 | 3.249193 | — | — | — |
| local_stream_protocol.test | LINK | 0.440952 | 3.520336 | 3.090563 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.455023 | 3.533556 | 3.056868 | — | — | — |
| placeholders.test | LINK | 0.075646 | 0.257365 | 0.329091 | — | — | — |
| placeholders_select.test | LINK | 0.075057 | 0.254518 | 0.313755 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.212807 | 0.713294 | 0.964994 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.220282 | 0.772964 | 1.162820 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.215691 | 0.723563 | 0.950733 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.220804 | 0.766581 | 1.151879 | — | — | — |
| posix_descriptor_base.test | LINK | 0.086799 | 0.271261 | 0.315998 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.085666 | 0.269908 | 0.317047 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.462825 | 3.578611 | 3.053960 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.470907 | 3.617086 | 3.092894 | — | — | — |
| prepend.test | RUN | 0.365947 | 2.932331 | 2.380853 | 0.001341 | 0.001427 | 0.001242 |
| prepend_select.test | RUN | 0.384705 | 2.942556 | 2.393488 | 0.001180 | 0.001528 | 0.001281 |
| random_access_file.test | LINK | 0.292088 | 0.653793 | 0.783707 | — | — | — |
| random_access_file_select.test | LINK | 0.303833 | 0.697655 | 0.969052 | — | — | — |
| read.test | RUN | 1.669296 | 18.294498 | 13.801428 | 0.001852 | 0.001996 | 0.001803 |
| read_select.test | RUN | 1.672894 | 18.095091 | 13.855418 | 0.001676 | 0.001702 | 0.001817 |
| read_at.test | RUN | 1.669296 | 23.729955 | 18.409918 | 0.002135 | 0.002482 | 0.002152 |
| read_at_select.test | RUN | 1.688595 | 23.752386 | 18.649903 | 0.002083 | 0.002422 | 0.001986 |
| read_until.test | RUN | 0.867480 | 7.142686 | 5.094782 | 0.001566 | 0.001639 | 0.001419 |
| read_until_select.test | RUN | 0.876390 | 7.170809 | 5.270828 | 0.001349 | 0.001455 | 0.001418 |
| readable_pipe.test | LINK | 0.530342 | 2.974229 | 2.370702 | — | — | — |
| readable_pipe_select.test | LINK | 0.547197 | 3.105780 | 2.522255 | — | — | — |
| recycling_allocator.test | RUN | 0.156514 | 0.412511 | 0.465087 | 0.001160 | 0.001334 | 0.001224 |
| recycling_allocator_select.test | RUN | 0.154235 | 0.413344 | 0.468335 | 0.001249 | 0.001322 | 0.001229 |
| redirect_disposition.test | LINK | 0.700443 | 4.110235 | 3.635972 | — | — | — |
| redirect_disposition_select.test | LINK | 0.701308 | 4.113773 | 3.632942 | — | — | — |
| redirect_error.test | LINK | 0.619685 | 3.439528 | 3.160238 | — | — | — |
| redirect_error_select.test | LINK | 0.622845 | 3.401862 | 3.155665 | — | — | — |
| registered_buffer.test | LINK | 0.153852 | 0.338985 | 0.426216 | — | — | — |
| registered_buffer_select.test | LINK | 0.150543 | 0.335558 | 0.419497 | — | — | — |
| signal_set.test | RUN | 0.510428 | 2.910460 | 2.241137 | 0.001252 | 0.001266 | 0.001243 |
| signal_set_select.test | RUN | 0.531573 | 2.992662 | 2.445768 | 0.001315 | 0.001270 | 0.001182 |
| signal_set_base.test | LINK | 0.116341 | 0.257879 | 0.310418 | — | — | — |
| signal_set_base_select.test | LINK | 0.116639 | 0.266194 | 0.305375 | — | — | — |
| socket_base.test | RUN | 0.624864 | 4.238985 | 3.415098 | 0.001328 | 0.001571 | 0.001348 |
| socket_base_select.test | RUN | 0.629590 | 4.120906 | 3.372635 | 0.001306 | 0.001441 | 0.001322 |
| spawn.test | RUN | 1.103423 | 7.086220 | 5.771687 | 0.001414 | 0.001542 | 0.001271 |
| spawn_select.test | RUN | 1.113191 | 7.066610 | 5.730230 | 0.001700 | 0.001612 | 0.001545 |
| static_thread_pool.test | RUN | 0.273265 | 0.655999 | 0.747737 | 0.001400 | 0.001399 | 0.001159 |
| static_thread_pool_select.test | RUN | 0.284812 | 0.682991 | 0.961421 | 0.001222 | 0.001300 | 0.001155 |
| steady_timer.test | LINK | 0.303909 | 0.707501 | 1.028952 | — | — | — |
| steady_timer_select.test | LINK | 0.308373 | 0.737492 | 1.054379 | — | — | — |
| strand.test | RUN | 0.679578 | 3.939806 | 3.498376 | 0.001967 | 0.002194 | 0.002000 |
| strand_select.test | RUN | 0.678864 | 3.881942 | 3.456265 | 0.001735 | 0.001978 | 0.001840 |
| stream_file.test | LINK | 0.282452 | 0.650340 | 0.804040 | — | — | — |
| stream_file_select.test | LINK | 0.294339 | 0.598847 | 1.003658 | — | — | — |
| streambuf.test | RUN | 0.177062 | 0.370197 | 0.545598 | 0.000956 | 0.000928 | 0.000853 |
| streambuf_select.test | RUN | 0.166603 | 0.364890 | 0.546019 | 0.001192 | 0.000944 | 0.001052 |
| system_timer.test | LINK | 0.439393 | 2.512423 | 2.078364 | — | — | — |
| system_timer_select.test | LINK | 0.448950 | 2.475470 | 1.987172 | — | — | — |
| system_context.test | LINK | 0.187601 | 0.424147 | 0.471830 | — | — | — |
| system_context_select.test | LINK | 0.197316 | 0.451091 | 0.583972 | — | — | — |
| system_executor.test | LINK | 0.258916 | 1.421644 | 0.950211 | — | — | — |
| system_executor_select.test | LINK | 0.264828 | 1.385792 | 1.045239 | — | — | — |
| this_coro.test | LINK | 0.068409 | 0.159254 | 0.181201 | — | — | — |
| this_coro_select.test | LINK | 0.068196 | 0.158959 | 0.185987 | — | — | — |
| thread_pool.test | RUN | 0.310395 | 1.830901 | 1.238364 | 0.001652 | 0.001673 | 0.001528 |
| thread_pool_select.test | RUN | 0.318764 | 1.836940 | 1.367646 | 0.001496 | 0.001627 | 0.001704 |
| time_traits.test | LINK | 0.158957 | 0.347660 | 0.377235 | — | — | — |
| time_traits_select.test | LINK | 0.159135 | 0.360208 | 0.376541 | — | — | — |
| ts_buffer.test | LINK | 0.152033 | 0.506797 | 0.397770 | — | — | — |
| ts_buffer_select.test | LINK | 0.150508 | 0.550108 | 0.394173 | — | — | — |
| ts_executor.test | LINK | 0.219366 | 0.782401 | 0.629086 | — | — | — |
| ts_executor_select.test | LINK | 0.226662 | 0.829434 | 0.748346 | — | — | — |
| ts_internet.test | LINK | 0.240344 | 0.853546 | 1.066702 | — | — | — |
| ts_internet_select.test | LINK | 0.244318 | 0.874678 | 1.287513 | — | — | — |
| ts_io_context.test | LINK | 0.190869 | 0.649645 | 0.471067 | — | — | — |
| ts_io_context_select.test | LINK | 0.199400 | 0.693711 | 0.962860 | — | — | — |
| ts_net.test | LINK | 0.288697 | 1.020844 | 1.558883 | — | — | — |
| ts_net_select.test | LINK | 0.291465 | 1.043208 | 1.574323 | — | — | — |
| ts_netfwd.test | LINK | 0.286780 | 1.020237 | 1.559545 | — | — | — |
| ts_netfwd_select.test | LINK | 0.291448 | 1.054472 | 1.597299 | — | — | — |
| ts_socket.test | LINK | 0.239142 | 0.800249 | 1.173259 | — | — | — |
| ts_socket_select.test | LINK | 0.241831 | 0.811130 | 1.197682 | — | — | — |
| ts_timer.test | LINK | 0.207291 | 0.718812 | 1.019173 | — | — | — |
| ts_timer_select.test | LINK | 0.212083 | 0.739517 | 1.051540 | — | — | — |
| use_awaitable.test | LINK | 0.070119 | 0.241711 | 0.288865 | — | — | — |
| use_awaitable_select.test | LINK | 0.068334 | 0.240199 | 0.287161 | — | — | — |
| wait_traits.test | LINK | 0.070094 | 0.239524 | 0.288433 | — | — | — |
| wait_traits_select.test | LINK | 0.068789 | 0.240251 | 0.285078 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.073733 | 0.238099 | 0.277056 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.070498 | 0.237870 | 0.285566 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070917 | 0.235522 | 0.282789 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.071476 | 0.237201 | 0.283515 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.070602 | 0.236063 | 0.280467 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.069923 | 0.235800 | 0.286715 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.069253 | 0.234252 | 0.283867 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.069299 | 0.239239 | 0.285347 | — | — | — |
| windows_object_handle.test | LINK | 0.196822 | 0.656969 | 0.774206 | — | — | — |
| windows_object_handle_select.test | LINK | 0.200478 | 0.693721 | 0.959189 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.203608 | 0.697256 | 0.856959 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.211249 | 0.747999 | 1.047051 | — | — | — |
| windows_random_access_handle.test | LINK | 0.195675 | 0.659545 | 0.782476 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.201959 | 0.702101 | 0.987739 | — | — | — |
| windows_stream_handle.test | LINK | 0.196399 | 0.653481 | 0.775003 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.203454 | 0.705677 | 0.973756 | — | — | — |
| writable_pipe.test | LINK | 0.371782 | 2.919521 | 2.470148 | — | — | — |
| writable_pipe_select.test | LINK | 0.383184 | 3.031509 | 2.593707 | — | — | — |
| write.test | RUN | 1.598600 | 15.126791 | 13.683188 | 0.002115 | 0.001996 | 0.001808 |
| write_select.test | RUN | 1.588175 | 15.250699 | 13.750022 | 0.001886 | 0.001780 | 0.001824 |
| write_at.test | RUN | 1.710940 | 20.222190 | 17.332655 | 0.001976 | 0.002060 | 0.001920 |
| write_at_select.test | RUN | 1.738399 | 20.229102 | 17.463558 | 0.002050 | 0.002067 | 0.001860 |
| any_executor.test | RUN | 0.683727 | 6.696289 | 5.591348 | 0.001936 | 0.001786 | 0.001451 |
| blocking.test | RUN | 1.459286 | 8.911829 | 11.349934 | 0.003415 | 0.003228 | 0.002714 |
| blocking_adaptation.test | RUN | 0.736722 | 3.804544 | 5.105164 | 0.002090 | 0.002012 | 0.002032 |
| context_as.test | RUN | 0.427780 | 2.627208 | 1.723815 | 0.001351 | 0.001478 | 0.001385 |
| executor.test | RUN | 0.108508 | 0.242959 | 0.301807 | 0.001189 | 0.001230 | 0.001370 |
| inline_exception_handling.test | RUN | 1.465112 | 8.104068 | 11.483345 | 0.003348 | 0.002268 | 0.002284 |
| invocable_archetype.test | RUN | 0.105093 | 0.240620 | 0.288024 | 0.001643 | 0.001262 | 0.001159 |
| mapping.test | RUN | 1.519113 | 8.235791 | 10.951355 | 0.002423 | 0.002342 | 0.002428 |
| outstanding_work.test | RUN | 0.666721 | 3.551675 | 4.882573 | 0.002234 | 0.002096 | 0.002040 |
| prefer_only.test | RUN | 0.219519 | 1.402582 | 1.101385 | 0.001290 | 0.001422 | 0.001227 |
| relationship.test | RUN | 0.497917 | 3.470477 | 4.916151 | 0.002140 | 0.002114 | 0.001502 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.996×, 0.997× | 1.005× |
| clang | 0.988× | 0.989×, 0.987× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001241s | 0.001249s | 0.001242s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001192s | 0.001190s | 0.001206s | byte equality observed |
| any_completion_handler.test | 10 | 0.001026s | 0.001006s | 0.001006s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001019s | 0.001003s | 0.001005s | byte equality observed |
| any_io_executor.test | 8 | 0.001210s | 0.001200s | 0.001196s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001213s | 0.001167s | 0.001274s | byte equality observed |
| append.test | 10 | 0.000985s | 0.000950s | 0.000977s | byte equality observed |
| append_select.test | 10 | 0.000962s | 0.000951s | 0.000949s | byte equality observed |
| as_tuple.test | 10 | 0.001018s | 0.001016s | 0.001027s | byte equality observed |
| as_tuple_select.test | 10 | 0.000981s | 0.000940s | 0.000955s | byte equality observed |
| bind_allocator.test | 1 | 0.001501s | 0.001474s | 0.001501s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001177s | 0.001123s | 0.001226s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000908s | 0.000906s | 0.000917s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000819s | 0.000814s | 0.000794s | byte equality observed |
| bind_executor.test | 1 | 0.001485s | 0.001461s | 0.001486s | byte equality observed |
| bind_executor_select.test | 1 | 0.001766s | 0.001771s | 0.001744s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000918s | 0.000896s | 0.000893s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000858s | 0.000833s | 0.000895s | byte equality observed |
| buffer.test | 10 | 0.000844s | 0.000834s | 0.000836s | byte equality observed |
| buffer_select.test | 10 | 0.000837s | 0.000799s | 0.000822s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001032s | 0.001038s | 0.001020s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001017s | 0.001003s | 0.001003s | byte equality observed |
| buffered_stream.test | 10 | 0.001010s | 0.000998s | 0.001008s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001011s | 0.001007s | 0.000976s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001003s | 0.001024s | 0.000978s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001002s | 0.000972s | 0.000956s | byte equality observed |
| buffers_iterator.test | 10 | 0.000828s | 0.000839s | 0.000793s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000760s | 0.000772s | 0.000793s | byte equality observed |
| cancel_after.test | 1 | 0.003377s | 0.003110s | 0.003482s | byte equality observed |
| cancel_after_select.test | 1 | 0.002840s | 0.002579s | 0.002844s | byte equality observed |
| cancel_at.test | 1 | 0.003518s | 0.003551s | 0.003586s | byte equality observed |
| cancel_at_select.test | 1 | 0.003568s | 0.003236s | 0.003498s | byte equality observed |
| co_composed.test | 10 | 0.000834s | 0.000860s | 0.000876s | byte equality observed |
| co_composed_select.test | 10 | 0.000776s | 0.000799s | 0.000811s | byte equality observed |
| compose.test | 1 | 0.001589s | 0.001567s | 0.001551s | byte equality observed |
| compose_select.test | 1 | 0.001218s | 0.001204s | 0.001262s | byte equality observed |
| composed.test | 1 | 0.001857s | 0.001760s | 0.001905s | byte equality observed |
| composed_select.test | 1 | 0.001419s | 0.001476s | 0.001411s | byte equality observed |
| config.test | 10 | 0.000912s | 0.000918s | 0.000904s | byte equality observed |
| config_select.test | 10 | 0.000876s | 0.000882s | 0.000868s | byte equality observed |
| connect_pipe.test | 10 | 0.000880s | 0.000893s | 0.000899s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000870s | 0.000865s | 0.000865s | byte equality observed |
| consign.test | 10 | 0.000887s | 0.000867s | 0.000897s | byte equality observed |
| consign_select.test | 10 | 0.000820s | 0.000835s | 0.000824s | byte equality observed |
| deadline_timer.test | 1 | 0.002320s | 0.002273s | 0.002301s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001955s | 0.001948s | 0.001976s | byte equality observed |
| deferred.test | 10 | 0.000835s | 0.000833s | 0.000838s | byte equality observed |
| deferred_select.test | 10 | 0.000739s | 0.000746s | 0.000743s | byte equality observed |
| disposition.test | 10 | 0.000785s | 0.000801s | 0.000791s | byte equality observed |
| disposition_select.test | 10 | 0.000775s | 0.000783s | 0.000776s | byte equality observed |
| error.test | 10 | 0.000753s | 0.000765s | 0.000748s | byte equality observed |
| error_select.test | 10 | 0.000758s | 0.000747s | 0.000742s | byte equality observed |
| inline_executor.test | 10 | 0.000755s | 0.000773s | 0.000759s | byte equality observed |
| inline_executor_select.test | 10 | 0.000757s | 0.000758s | 0.000752s | byte equality observed |
| inline_or_executor.test | 10 | 0.000762s | 0.000769s | 0.000761s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000765s | 0.000776s | 0.000756s | byte equality observed |
| io_context.test | 1 | 0.001831s | 0.001780s | 0.001860s | byte equality observed |
| io_context_select.test | 1 | 0.002175s | 0.002140s | 0.002192s | byte equality observed |
| io_context_strand.test | 1 | 0.002125s | 0.002134s | 0.002127s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001804s | 0.001746s | 0.001845s | byte equality observed |
| ip_host_name.test | 10 | 0.000849s | 0.000834s | 0.000834s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000762s | 0.000761s | 0.000752s | byte equality observed |
| ip_icmp.test | 10 | 0.000772s | 0.000786s | 0.000750s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000777s | 0.000774s | 0.000761s | byte equality observed |
| ip_multicast.test | 10 | 0.000846s | 0.000830s | 0.000832s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000826s | 0.000814s | 0.000814s | byte equality observed |
| ip_tcp.test | 10 | 0.001044s | 0.001040s | 0.001024s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001009s | 0.000990s | 0.000985s | byte equality observed |
| ip_udp.test | 10 | 0.000858s | 0.000846s | 0.000832s | byte equality observed |
| ip_udp_select.test | 10 | 0.000845s | 0.000845s | 0.000822s | byte equality observed |
| ip_unicast.test | 10 | 0.000811s | 0.000810s | 0.000796s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000801s | 0.000797s | 0.000777s | byte equality observed |
| ip_v6_only.test | 10 | 0.000810s | 0.000801s | 0.000808s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000796s | 0.000789s | 0.000783s | byte equality observed |
| is_read_buffered.test | 10 | 0.000754s | 0.000737s | 0.000744s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000750s | 0.000751s | 0.000742s | byte equality observed |
| is_write_buffered.test | 10 | 0.000731s | 0.000742s | 0.000746s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000754s | 0.000744s | 0.000742s | byte equality observed |
| prepend.test | 10 | 0.000809s | 0.000854s | 0.000793s | byte equality observed |
| prepend_select.test | 10 | 0.000793s | 0.000827s | 0.000775s | byte equality observed |
| read.test | 10 | 0.001103s | 0.001148s | 0.001059s | byte equality observed |
| read_at.test | 10 | 0.001309s | 0.001437s | 0.001305s | byte equality observed |
| read_at_select.test | 10 | 0.001307s | 0.001450s | 0.001296s | byte equality observed |
| read_select.test | 10 | 0.001099s | 0.001131s | 0.001059s | byte equality observed |
| read_until.test | 10 | 0.000913s | 0.000955s | 0.000883s | byte equality observed |
| read_until_select.test | 10 | 0.000939s | 0.000950s | 0.000878s | byte equality observed |
| recycling_allocator.test | 10 | 0.000778s | 0.000817s | 0.000771s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000815s | 0.000794s | 0.000772s | byte equality observed |
| signal_set.test | 10 | 0.000803s | 0.000842s | 0.000811s | byte equality observed |
| signal_set_select.test | 10 | 0.000837s | 0.000839s | 0.000847s | byte equality observed |
| socket_base.test | 10 | 0.000886s | 0.000890s | 0.000890s | byte equality observed |
| socket_base_select.test | 10 | 0.000904s | 0.000903s | 0.000890s | byte equality observed |
| spawn.test | 10 | 0.000983s | 0.000962s | 0.000988s | byte equality observed |
| spawn_select.test | 10 | 0.000965s | 0.000970s | 0.000980s | byte equality observed |
| static_thread_pool.test | 10 | 0.000828s | 0.000781s | 0.000804s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000779s | 0.000752s | 0.000785s | byte equality observed |
| strand.test | 1 | 0.001699s | 0.001717s | 0.001778s | byte equality observed |
| strand_select.test | 1 | 0.001416s | 0.001396s | 0.001458s | byte equality observed |
| streambuf.test | 10 | 0.000897s | 0.000879s | 0.000863s | byte equality observed |
| streambuf_select.test | 10 | 0.000842s | 0.000840s | 0.000838s | byte equality observed |
| thread_pool.test | 10 | 0.001559s | 0.001576s | 0.001539s | byte equality observed |
| thread_pool_select.test | 10 | 0.001559s | 0.001535s | 0.001558s | byte equality observed |
| write.test | 10 | 0.001208s | 0.001179s | 0.001177s | byte equality observed |
| write_at.test | 10 | 0.001298s | 0.001286s | 0.001264s | byte equality observed |
| write_at_select.test | 10 | 0.001301s | 0.001300s | 0.001275s | byte equality observed |
| write_select.test | 10 | 0.001185s | 0.001143s | 0.001171s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44402206984).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
