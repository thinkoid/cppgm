# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.830993 | 4.693253 | 4.442001 | 0.003226 | 0.002774 | 0.003214 |
| any_completion_executor_select.test | RUN | 0.848153 | 4.695385 | 4.811776 | 0.003060 | 0.002532 | 0.002830 |
| any_completion_handler.test | RUN | 0.898219 | 4.268012 | 4.098190 | 0.002161 | 0.002414 | 0.002188 |
| any_completion_handler_select.test | RUN | 0.927612 | 4.414389 | 4.343049 | 0.002458 | 0.002394 | 0.002346 |
| any_io_executor.test | RUN | 0.871663 | 4.972649 | 4.943018 | 0.002828 | 0.002680 | 0.002776 |
| any_io_executor_select.test | RUN | 0.867421 | 4.959023 | 5.146616 | 0.002685 | 0.002860 | 0.002630 |
| append.test | RUN | 0.795247 | 3.996274 | 3.610320 | 0.002150 | 0.002398 | 0.002298 |
| append_select.test | RUN | 0.789057 | 4.045234 | 3.705598 | 0.002184 | 0.002121 | 0.002216 |
| as_tuple.test | RUN | 1.009447 | 4.889157 | 4.982005 | 0.002540 | 0.002270 | 0.002409 |
| as_tuple_select.test | RUN | 1.020925 | 4.823807 | 5.003327 | 0.002070 | 0.002245 | 0.001915 |
| associated_allocator.test | LINK | 0.222954 | 0.413850 | 0.607983 | — | — | — |
| associated_allocator_select.test | LINK | 0.219689 | 0.425090 | 0.617608 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.234980 | 0.451913 | 0.659511 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.234561 | 0.461342 | 0.655856 | — | — | — |
| associated_executor.test | LINK | 0.342800 | 0.791714 | 1.052229 | — | — | — |
| associated_executor_select.test | LINK | 0.336856 | 0.806331 | 1.065789 | — | — | — |
| associated_immediate_executor.test | LINK | 0.319701 | 0.732828 | 0.900796 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.318017 | 0.752284 | 0.895476 | — | — | — |
| associator.test | LINK | 0.183362 | 0.364520 | 0.488731 | — | — | — |
| associator_select.test | LINK | 0.179935 | 0.373656 | 0.479851 | — | — | — |
| awaitable.test | LINK | 0.183249 | 0.358349 | 0.495335 | — | — | — |
| awaitable_select.test | LINK | 0.181496 | 0.352903 | 0.496722 | — | — | — |
| basic_datagram_socket.test | LINK | 0.525232 | 1.125856 | 1.862384 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.547422 | 1.154348 | 1.901247 | — | — | — |
| basic_deadline_timer.test | LINK | 0.647813 | 1.335011 | 2.146999 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.644963 | 1.375584 | 2.165154 | — | — | — |
| basic_file.test | LINK | 0.176529 | 0.374207 | 0.493194 | — | — | — |
| basic_file_select.test | LINK | 0.177972 | 0.371857 | 0.498846 | — | — | — |
| basic_random_access_file.test | LINK | 0.179812 | 0.364096 | 0.503073 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.178534 | 0.373255 | 0.488539 | — | — | — |
| basic_raw_socket.test | LINK | 0.530222 | 1.120910 | 1.831662 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.553390 | 1.141109 | 1.886405 | — | — | — |
| basic_readable_pipe.test | LINK | 0.516599 | 1.110634 | 1.574554 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.533154 | 1.170113 | 1.930858 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.523861 | 1.131716 | 1.823735 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.534154 | 1.163228 | 1.886205 | — | — | — |
| basic_signal_set.test | LINK | 0.494531 | 1.029843 | 1.434731 | — | — | — |
| basic_signal_set_select.test | LINK | 0.515487 | 1.112299 | 1.776053 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.523526 | 1.126797 | 1.872678 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.550019 | 1.136039 | 1.929327 | — | — | — |
| basic_stream_file.test | LINK | 0.176499 | 0.368443 | 0.477433 | — | — | — |
| basic_stream_file_select.test | LINK | 0.176769 | 0.374085 | 0.475761 | — | — | — |
| basic_stream_socket.test | LINK | 0.531233 | 1.120270 | 1.840197 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.533585 | 1.138694 | 1.883912 | — | — | — |
| basic_streambuf.test | LINK | 0.264317 | 0.534862 | 0.732171 | — | — | — |
| basic_streambuf_select.test | LINK | 0.278752 | 0.535710 | 0.737740 | — | — | — |
| basic_waitable_timer.test | LINK | 0.492542 | 1.064478 | 1.713515 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.502872 | 1.104096 | 1.765146 | — | — | — |
| basic_writable_pipe.test | LINK | 0.499882 | 1.066320 | 1.624668 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.521407 | 1.161328 | 1.897411 | — | — | — |
| bind_allocator.test | RUN | 0.836801 | 4.107797 | 4.045226 | 0.002709 | 0.002610 | 0.002522 |
| bind_allocator_select.test | RUN | 0.866193 | 4.173310 | 4.023521 | 0.002354 | 0.002674 | 0.002240 |
| bind_cancellation_slot.test | RUN | 0.858075 | 4.177065 | 4.110318 | 0.001989 | 0.001526 | 0.001716 |
| bind_cancellation_slot_select.test | RUN | 0.861038 | 4.169438 | 3.946778 | 0.001478 | 0.001744 | 0.001702 |
| bind_executor.test | RUN | 0.571567 | 2.863415 | 2.453939 | 0.002476 | 0.002845 | 0.002475 |
| bind_executor_select.test | RUN | 0.586923 | 3.126121 | 2.468562 | 0.002019 | 0.003017 | 0.002282 |
| bind_immediate_executor.test | RUN | 0.446570 | 2.607829 | 1.649916 | 0.001740 | 0.001434 | 0.001642 |
| bind_immediate_executor_select.test | RUN | 0.452363 | 2.438467 | 1.792804 | 0.001895 | 0.001694 | 0.001622 |
| buffer.test | RUN | 0.271808 | 0.990457 | 0.968266 | 0.001806 | 0.001516 | 0.001584 |
| buffer_select.test | RUN | 0.269676 | 0.988563 | 0.979387 | 0.001760 | 0.001632 | 0.001579 |
| buffer_registration.test | LINK | 0.222574 | 0.508291 | 0.577406 | — | — | — |
| buffer_registration_select.test | LINK | 0.221208 | 0.507960 | 0.577992 | — | — | — |
| buffered_read_stream.test | RUN | 0.948430 | 6.690501 | 6.001940 | 0.002200 | 0.002746 | 0.002764 |
| buffered_read_stream_select.test | RUN | 0.963675 | 6.525929 | 6.285074 | 0.002276 | 0.002754 | 0.002774 |
| buffered_stream.test | RUN | 1.786261 | 9.712068 | 9.873156 | 0.002782 | 0.002870 | 0.002895 |
| buffered_stream_select.test | RUN | 1.858729 | 9.754926 | 9.574279 | 0.002566 | 0.002772 | 0.002814 |
| buffered_write_stream.test | RUN | 1.621503 | 8.376176 | 8.326837 | 0.002718 | 0.002732 | 0.002860 |
| buffered_write_stream_select.test | RUN | 1.633479 | 8.463591 | 7.958614 | 0.002550 | 0.002671 | 0.002791 |
| buffers_iterator.test | RUN | 0.483190 | 0.824459 | 1.439691 | 0.001826 | 0.002170 | 0.002222 |
| buffers_iterator_select.test | RUN | 0.476432 | 0.815797 | 1.391851 | 0.002171 | 0.002116 | 0.002226 |
| cancel_after.test | RUN | 1.336588 | 6.594516 | 6.284002 | 0.005115 | 0.004741 | 0.004601 |
| cancel_after_select.test | RUN | 1.318916 | 6.527260 | 6.269943 | 0.004298 | 0.004486 | 0.004170 |
| cancel_at.test | RUN | 1.203254 | 5.579972 | 5.745511 | 0.004489 | 0.004077 | 0.004290 |
| cancel_at_select.test | RUN | 1.185104 | 5.444382 | 5.598538 | 0.004601 | 0.003819 | 0.004099 |
| cancellation_signal.test | LINK | 0.157803 | 0.301771 | 0.377933 | — | — | — |
| cancellation_signal_select.test | LINK | 0.158044 | 0.305306 | 0.381109 | — | — | — |
| cancellation_state.test | LINK | 0.208129 | 0.305535 | 0.390621 | — | — | — |
| cancellation_state_select.test | LINK | 0.237646 | 0.306398 | 0.381073 | — | — | — |
| cancellation_type.test | LINK | 0.184182 | 0.240239 | 0.332535 | — | — | — |
| cancellation_type_select.test | LINK | 0.184823 | 0.244284 | 0.493730 | — | — | — |
| co_composed.test | RUN | 0.178959 | 0.240966 | 0.510262 | 0.002273 | 0.001639 | 0.001817 |
| co_composed_select.test | RUN | 0.180210 | 0.243195 | 0.490743 | 0.002039 | 0.001628 | 0.001882 |
| co_spawn.test | LINK | 0.181250 | 0.245108 | 0.499204 | — | — | — |
| co_spawn_select.test | LINK | 0.186437 | 0.242171 | 0.501962 | — | — | — |
| completion_condition.test | LINK | 0.239572 | 0.387682 | 0.646188 | — | — | — |
| completion_condition_select.test | LINK | 0.238813 | 0.484245 | 0.677318 | — | — | — |
| compose.test | RUN | 1.050340 | 5.140185 | 5.197255 | 0.003032 | 0.002418 | 0.002718 |
| compose_select.test | RUN | 1.058248 | 5.002106 | 5.126972 | 0.002895 | 0.002517 | 0.002367 |
| composed.test | RUN | 1.008917 | 5.062349 | 5.098341 | 0.002740 | 0.002252 | 0.002452 |
| composed_select.test | RUN | 0.986606 | 4.933791 | 4.981765 | 0.002393 | 0.002232 | 0.002300 |
| config.test | RUN | 0.475663 | 3.358735 | 2.145834 | 0.002308 | 0.002214 | 0.002108 |
| config_select.test | RUN | 0.567603 | 3.368150 | 2.561822 | 0.002404 | 0.001969 | 0.002239 |
| connect.test | LINK | 1.605316 | 10.663660 | 10.393276 | — | — | — |
| connect_select.test | LINK | 1.615823 | 10.618644 | 10.423988 | — | — | — |
| connect_pipe.test | RUN | 0.902953 | 4.058091 | 3.984528 | 0.002495 | 0.002152 | 0.002338 |
| connect_pipe_select.test | RUN | 0.919172 | 4.218306 | 4.275251 | 0.002094 | 0.002286 | 0.002460 |
| consign.test | RUN | 0.775853 | 3.926935 | 3.740290 | 0.002047 | 0.002197 | 0.002360 |
| consign_select.test | RUN | 0.793377 | 4.022630 | 3.697552 | 0.002254 | 0.002407 | 0.002006 |
| coroutine.test | LINK | 0.183359 | 0.428824 | 0.539823 | — | — | — |
| coroutine_select.test | LINK | 0.182034 | 0.425550 | 0.554853 | — | — | — |
| deadline_timer.test | RUN | 1.111759 | 5.211339 | 5.174650 | 0.003896 | 0.003943 | 0.003792 |
| deadline_timer_select.test | RUN | 1.122291 | 5.156425 | 5.171113 | 0.003848 | 0.003391 | 0.003428 |
| deferred.test | RUN | 0.198841 | 0.395612 | 0.555452 | 0.002022 | 0.002230 | 0.002064 |
| deferred_select.test | RUN | 0.195861 | 0.406358 | 0.554577 | 0.002104 | 0.002220 | 0.002166 |
| detached.test | LINK | 0.221023 | 0.437142 | 0.569026 | — | — | — |
| detached_select.test | LINK | 0.227294 | 0.436594 | 0.571927 | — | — | — |
| disposition.test | RUN | 0.208964 | 1.010336 | 1.057043 | 0.001779 | 0.002262 | 0.002238 |
| disposition_select.test | RUN | 0.204351 | 1.009996 | 1.031002 | 0.001874 | 0.002272 | 0.002300 |
| error.test | RUN | 0.191617 | 0.972823 | 0.914300 | 0.001818 | 0.002178 | 0.002267 |
| error_select.test | RUN | 0.189714 | 0.975350 | 0.913472 | 0.001774 | 0.002196 | 0.002175 |
| file_base.test | LINK | 0.238529 | 0.794100 | 0.963380 | — | — | — |
| file_base_select.test | LINK | 0.237053 | 0.766681 | 0.845717 | — | — | — |
| fwd_first.test | LINK | 0.531385 | 1.195817 | 1.786745 | — | — | — |
| fwd_last.test | LINK | 0.536040 | 1.150300 | 1.802609 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.209462 | 0.475147 | 0.653857 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.212592 | 0.486056 | 0.653403 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.807133 | 4.117475 | 3.470219 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.797261 | 4.290238 | 3.482485 | — | — | — |
| generic_raw_protocol.test | LINK | 0.812151 | 4.121391 | 3.481209 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.799232 | 4.277999 | 3.461402 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.708383 | 3.488756 | 2.977654 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.719712 | 3.573984 | 2.982351 | — | — | — |
| generic_stream_protocol.test | LINK | 0.758049 | 3.769573 | 3.225750 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.757580 | 3.913352 | 3.257253 | — | — | — |
| high_resolution_timer.test | LINK | 0.348278 | 0.711059 | 1.009717 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.357152 | 0.742685 | 1.042814 | — | — | — |
| immediate.test | LINK | 0.248292 | 0.552707 | 0.627361 | — | — | — |
| immediate_select.test | LINK | 0.244203 | 0.557285 | 0.631611 | — | — | — |
| inline_executor.test | RUN | 0.302629 | 0.857598 | 0.925662 | 0.001700 | 0.001722 | 0.001654 |
| inline_executor_select.test | RUN | 0.296707 | 0.854208 | 0.939440 | 0.001782 | 0.001712 | 0.001617 |
| inline_or_executor.test | RUN | 0.466213 | 2.486018 | 1.771086 | 0.001756 | 0.001725 | 0.001638 |
| inline_or_executor_select.test | RUN | 0.483774 | 2.521373 | 1.955028 | 0.001820 | 0.001748 | 0.001632 |
| io_context.test | RUN | 0.681957 | 3.759569 | 3.063216 | 0.002927 | 0.002860 | 0.002720 |
| io_context_select.test | RUN | 0.660962 | 3.671654 | 3.082695 | 0.002630 | 0.002646 | 0.002532 |
| io_context_strand.test | RUN | 0.632801 | 4.127437 | 3.631094 | 0.002668 | 0.003101 | 0.003138 |
| io_context_strand_select.test | RUN | 0.640012 | 3.978366 | 4.013933 | 0.002723 | 0.002944 | 0.002527 |
| ip_address.test | LINK | 0.253664 | 1.120089 | 1.369317 | — | — | — |
| ip_address_select.test | LINK | 0.248483 | 1.114274 | 1.362828 | — | — | — |
| ip_address_v4.test | LINK | 0.253113 | 1.198825 | 1.264005 | — | — | — |
| ip_address_v4_select.test | LINK | 0.256600 | 1.182831 | 1.492475 | — | — | — |
| ip_address_v6.test | LINK | 0.275444 | 1.199428 | 1.135164 | — | — | — |
| ip_address_v6_select.test | LINK | 0.280307 | 1.030107 | 1.067288 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.227416 | 0.516472 | 0.692166 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.218176 | 0.518336 | 0.683233 | — | — | — |
| ip_basic_resolver.test | LINK | 0.354264 | 0.737972 | 1.024324 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.360294 | 0.763243 | 1.047651 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.125800 | 0.245321 | 0.294993 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.123132 | 0.243599 | 0.297306 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.221064 | 0.505108 | 0.673616 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.218328 | 0.498736 | 0.673307 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.211196 | 0.485015 | 0.649995 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.216634 | 0.482465 | 0.648228 | — | — | — |
| ip_host_name.test | RUN | 0.219867 | 0.647390 | 0.726579 | 0.001768 | 0.001688 | 0.001524 |
| ip_host_name_select.test | RUN | 0.221973 | 0.646033 | 0.726784 | 0.002032 | 0.001726 | 0.001584 |
| ip_icmp.test | RUN | 1.008401 | 7.199592 | 6.347583 | 0.001889 | 0.002286 | 0.002215 |
| ip_icmp_select.test | RUN | 0.990492 | 7.536276 | 6.396781 | 0.001816 | 0.001970 | 0.002192 |
| ip_multicast.test | RUN | 0.577847 | 4.307898 | 4.340319 | 0.001910 | 0.002326 | 0.002257 |
| ip_multicast_select.test | RUN | 0.595518 | 4.273382 | 4.251952 | 0.001888 | 0.002091 | 0.001856 |
| ip_resolver_query_base.test | LINK | 0.143267 | 0.388562 | 0.512141 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.143635 | 0.391458 | 0.532392 | — | — | — |
| ip_tcp.test | RUN | 1.469668 | 12.344416 | 11.331836 | 0.002577 | 0.003214 | 0.002726 |
| ip_tcp_select.test | RUN | 1.468963 | 12.851835 | 11.032005 | 0.002444 | 0.003106 | 0.003246 |
| ip_udp.test | RUN | 1.254016 | 8.877215 | 7.814543 | 0.002434 | 0.002458 | 0.002350 |
| ip_udp_select.test | RUN | 1.318900 | 9.121089 | 7.690394 | 0.002470 | 0.002458 | 0.002536 |
| ip_unicast.test | RUN | 0.779247 | 3.914943 | 3.812305 | 0.002165 | 0.002388 | 0.002304 |
| ip_unicast_select.test | RUN | 0.806449 | 3.993715 | 3.800585 | 0.003297 | 0.002427 | 0.002263 |
| ip_v6_only.test | RUN | 0.826258 | 4.061306 | 3.892207 | 0.002268 | 0.002463 | 0.001758 |
| ip_v6_only_select.test | RUN | 0.834990 | 4.222244 | 3.835880 | 0.002320 | 0.002207 | 0.002178 |
| is_read_buffered.test | RUN | 0.579736 | 1.267455 | 2.126525 | 0.002186 | 0.002166 | 0.001914 |
| is_read_buffered_select.test | RUN | 0.587541 | 1.327744 | 2.200477 | 0.001819 | 0.002262 | 0.002064 |
| is_write_buffered.test | RUN | 0.589100 | 1.277357 | 2.141793 | 0.001944 | 0.002059 | 0.002103 |
| is_write_buffered_select.test | RUN | 0.596718 | 1.313895 | 2.166443 | 0.002188 | 0.002190 | 0.002186 |
| local_basic_endpoint.test | LINK | 0.300084 | 0.710787 | 1.119972 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.302740 | 0.692873 | 1.117031 | — | — | — |
| local_connect_pair.test | LINK | 0.776713 | 4.026972 | 3.616276 | — | — | — |
| local_connect_pair_select.test | LINK | 0.792935 | 4.012223 | 3.600593 | — | — | — |
| local_datagram_protocol.test | LINK | 1.004834 | 5.227201 | 4.913176 | — | — | — |
| local_datagram_protocol_select.test | LINK | 1.030401 | 5.250246 | 4.885125 | — | — | — |
| local_seq_packet_protocol.test | LINK | 1.043849 | 5.096822 | 4.922498 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 1.052006 | 5.166331 | 4.895785 | — | — | — |
| local_stream_protocol.test | LINK | 0.949579 | 4.848481 | 4.651133 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.977986 | 4.918017 | 4.629782 | — | — | — |
| placeholders.test | LINK | 0.199176 | 0.393989 | 0.524695 | — | — | — |
| placeholders_select.test | LINK | 0.189432 | 0.392914 | 0.521312 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.517610 | 1.068171 | 1.608057 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.527630 | 1.141220 | 1.919192 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.510210 | 1.099896 | 1.565762 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.531487 | 1.135031 | 1.926361 | — | — | — |
| posix_descriptor_base.test | LINK | 0.224175 | 0.429686 | 0.492229 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.221367 | 0.409466 | 0.501929 | — | — | — |
| posix_stream_descriptor.test | LINK | 1.031389 | 4.901958 | 4.632161 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 1.055293 | 5.048064 | 4.767048 | — | — | — |
| prepend.test | RUN | 0.781214 | 4.004136 | 3.720198 | 0.002084 | 0.002384 | 0.002301 |
| prepend_select.test | RUN | 0.794852 | 4.110362 | 3.716900 | 0.002070 | 0.002256 | 0.002414 |
| random_access_file.test | LINK | 0.466685 | 0.976165 | 1.266154 | — | — | — |
| random_access_file_select.test | LINK | 0.493795 | 1.011045 | 1.606870 | — | — | — |
| read.test | RUN | 2.398069 | 24.550071 | 20.904681 | 0.003198 | 0.002980 | 0.003082 |
| read_select.test | RUN | 2.436516 | 24.598230 | 21.166429 | 0.003092 | 0.002980 | 0.002878 |
| read_at.test | RUN | 2.422889 | 34.306659 | 28.546231 | 0.003708 | 0.003302 | 0.003421 |
| read_at_select.test | RUN | 2.443209 | 34.095162 | 28.697162 | 0.003378 | 0.003462 | 0.003042 |
| read_until.test | RUN | 1.256909 | 9.428020 | 7.515308 | 0.002697 | 0.002529 | 0.002572 |
| read_until_select.test | RUN | 1.275375 | 9.504177 | 7.828387 | 0.002284 | 0.001921 | 0.002436 |
| readable_pipe.test | LINK | 0.799391 | 4.039288 | 3.670759 | — | — | — |
| readable_pipe_select.test | LINK | 0.831003 | 4.245998 | 3.926076 | — | — | — |
| recycling_allocator.test | RUN | 0.248096 | 0.625294 | 0.728140 | 0.001904 | 0.002222 | 0.001768 |
| recycling_allocator_select.test | RUN | 0.265877 | 0.628944 | 0.771990 | 0.002234 | 0.002123 | 0.002120 |
| redirect_disposition.test | LINK | 1.081666 | 5.657294 | 5.628581 | — | — | — |
| redirect_disposition_select.test | LINK | 1.061580 | 5.610590 | 5.554193 | — | — | — |
| redirect_error.test | LINK | 0.972318 | 4.742447 | 4.879685 | — | — | — |
| redirect_error_select.test | LINK | 0.965139 | 4.650434 | 4.912724 | — | — | — |
| registered_buffer.test | LINK | 0.262976 | 0.497540 | 0.688459 | — | — | — |
| registered_buffer_select.test | LINK | 0.252794 | 0.501932 | 0.711405 | — | — | — |
| signal_set.test | RUN | 0.792985 | 3.984514 | 3.420169 | 0.002235 | 0.002050 | 0.002229 |
| signal_set_select.test | RUN | 0.807367 | 4.119314 | 3.753952 | 0.002215 | 0.002177 | 0.002164 |
| signal_set_base.test | LINK | 0.207719 | 0.390570 | 0.530952 | — | — | — |
| signal_set_base_select.test | LINK | 0.211899 | 0.387977 | 0.534940 | — | — | — |
| socket_base.test | RUN | 0.969359 | 5.934684 | 5.250426 | 0.002416 | 0.002552 | 0.002489 |
| socket_base_select.test | RUN | 0.986810 | 5.916893 | 5.237839 | 0.002381 | 0.002488 | 0.002306 |
| spawn.test | RUN | 1.634159 | 9.489595 | 8.854847 | 0.002568 | 0.002344 | 0.002183 |
| spawn_select.test | RUN | 1.643498 | 9.377522 | 8.830155 | 0.002558 | 0.002486 | 0.002668 |
| static_thread_pool.test | RUN | 0.453123 | 0.916064 | 1.250086 | 0.002281 | 0.002243 | 0.002139 |
| static_thread_pool_select.test | RUN | 0.476556 | 1.000196 | 1.591652 | 0.002059 | 0.002290 | 0.002104 |
| steady_timer.test | LINK | 0.498747 | 1.060748 | 1.719139 | — | — | — |
| steady_timer_select.test | LINK | 0.521203 | 1.083617 | 1.770395 | — | — | — |
| strand.test | RUN | 1.034489 | 5.442206 | 5.249927 | 0.002984 | 0.003228 | 0.003260 |
| strand_select.test | RUN | 1.063828 | 5.333877 | 5.106238 | 0.002724 | 0.002818 | 0.002739 |
| stream_file.test | LINK | 0.474088 | 0.993534 | 1.304104 | — | — | — |
| stream_file_select.test | LINK | 0.497089 | 1.052309 | 1.668525 | — | — | — |
| streambuf.test | RUN | 0.277081 | 0.815647 | 0.886131 | 0.001836 | 0.001761 | 0.002122 |
| streambuf_select.test | RUN | 0.232480 | 0.754204 | 0.930949 | 0.001761 | 0.001698 | 0.001591 |
| system_timer.test | LINK | 0.671561 | 3.586678 | 3.385222 | — | — | — |
| system_timer_select.test | LINK | 0.679865 | 3.564802 | 2.977148 | — | — | — |
| system_context.test | LINK | 0.315144 | 0.635407 | 0.745794 | — | — | — |
| system_context_select.test | LINK | 0.331608 | 0.674952 | 0.939153 | — | — | — |
| system_executor.test | LINK | 0.416244 | 2.016832 | 1.431528 | — | — | — |
| system_executor_select.test | LINK | 0.435351 | 1.958472 | 1.612949 | — | — | — |
| this_coro.test | LINK | 0.125576 | 0.243345 | 0.293464 | — | — | — |
| this_coro_select.test | LINK | 0.126165 | 0.243458 | 0.291442 | — | — | — |
| thread_pool.test | RUN | 0.499602 | 3.304050 | 2.057911 | 0.003353 | 0.003517 | 0.003634 |
| thread_pool_select.test | RUN | 0.502027 | 3.418807 | 2.223319 | 0.003588 | 0.003800 | 0.003880 |
| time_traits.test | LINK | 0.282906 | 0.762447 | 0.987002 | — | — | — |
| time_traits_select.test | LINK | 0.280690 | 0.740877 | 0.996724 | — | — | — |
| ts_buffer.test | LINK | 0.265116 | 0.829301 | 1.065463 | — | — | — |
| ts_buffer_select.test | LINK | 0.265973 | 0.814908 | 1.060651 | — | — | — |
| ts_executor.test | LINK | 0.361361 | 1.139562 | 1.661432 | — | — | — |
| ts_executor_select.test | LINK | 0.374928 | 1.227679 | 2.028035 | — | — | — |
| ts_internet.test | LINK | 0.404598 | 1.260627 | 2.087739 | — | — | — |
| ts_internet_select.test | LINK | 0.410161 | 1.313437 | 2.128770 | — | — | — |
| ts_io_context.test | LINK | 0.322512 | 0.970861 | 1.261754 | — | — | — |
| ts_io_context_select.test | LINK | 0.347853 | 1.022742 | 1.646153 | — | — | — |
| ts_net.test | LINK | 0.482115 | 1.501829 | 2.584570 | — | — | — |
| ts_net_select.test | LINK | 0.478333 | 1.547989 | 2.637107 | — | — | — |
| ts_netfwd.test | LINK | 0.473023 | 1.505414 | 2.570735 | — | — | — |
| ts_netfwd_select.test | LINK | 0.470304 | 1.576721 | 2.655557 | — | — | — |
| ts_socket.test | LINK | 0.393886 | 1.194981 | 1.980029 | — | — | — |
| ts_socket_select.test | LINK | 0.390001 | 1.226256 | 2.050791 | — | — | — |
| ts_timer.test | LINK | 0.385869 | 1.069602 | 1.777951 | — | — | — |
| ts_timer_select.test | LINK | 0.457367 | 1.105107 | 1.738588 | — | — | — |
| use_awaitable.test | LINK | 0.180386 | 0.355562 | 0.513356 | — | — | — |
| use_awaitable_select.test | LINK | 0.175896 | 0.372193 | 0.486001 | — | — | — |
| wait_traits.test | LINK | 0.196417 | 0.363626 | 0.490103 | — | — | — |
| wait_traits_select.test | LINK | 0.183017 | 0.365136 | 0.476400 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.179840 | 0.367724 | 0.457361 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.174899 | 0.360490 | 0.508775 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.184007 | 0.371276 | 0.471634 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.179555 | 0.350921 | 0.498421 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.182684 | 0.358873 | 0.505459 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.179471 | 0.367944 | 0.470867 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.183804 | 0.359326 | 0.476143 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.180906 | 0.354400 | 0.501641 | — | — | — |
| windows_object_handle.test | LINK | 0.469129 | 0.988694 | 1.283345 | — | — | — |
| windows_object_handle_select.test | LINK | 0.489928 | 1.050105 | 1.653983 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.486343 | 1.026347 | 1.451792 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.522477 | 1.104115 | 1.771120 | — | — | — |
| windows_random_access_handle.test | LINK | 0.479640 | 0.999040 | 1.293731 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.493319 | 1.062976 | 1.651322 | — | — | — |
| windows_stream_handle.test | LINK | 0.467234 | 0.998774 | 1.327476 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.492485 | 1.064958 | 1.629070 | — | — | — |
| writable_pipe.test | LINK | 0.821514 | 4.021252 | 3.891161 | — | — | — |
| writable_pipe_select.test | LINK | 0.849418 | 4.216080 | 4.127907 | — | — | — |
| write.test | RUN | 2.357690 | 20.353129 | 20.969875 | 0.003229 | 0.002989 | 0.002843 |
| write_select.test | RUN | 2.395605 | 20.452877 | 21.091238 | 0.003175 | 0.003016 | 0.002899 |
| write_at.test | RUN | 2.428594 | 28.951040 | 26.486788 | 0.003385 | 0.003214 | 0.003261 |
| write_at_select.test | RUN | 2.472711 | 28.529824 | 26.824536 | 0.003190 | 0.003078 | 0.003233 |
| any_executor.test | RUN | 1.002968 | 9.350800 | 8.002034 | 0.002974 | 0.002947 | 0.003090 |
| blocking.test | RUN | 2.401086 | 11.817766 | 17.231749 | 0.009549 | 0.008429 | 0.009466 |
| blocking_adaptation.test | RUN | 1.197547 | 5.217952 | 7.852139 | 0.005045 | 0.005355 | 0.005311 |
| context_as.test | RUN | 0.682998 | 3.616580 | 2.622590 | 0.002482 | 0.002378 | 0.002262 |
| executor.test | RUN | 0.198383 | 0.376675 | 0.516235 | 0.002368 | 0.002238 | 0.002009 |
| inline_exception_handling.test | RUN | 2.349384 | 11.344978 | 16.948369 | 0.009261 | 0.006493 | 0.006592 |
| invocable_archetype.test | RUN | 0.188399 | 0.382766 | 0.507185 | 0.002018 | 0.002044 | 0.002194 |
| mapping.test | RUN | 2.244696 | 11.133267 | 17.133925 | 0.006872 | 0.006634 | 0.006760 |
| outstanding_work.test | RUN | 1.160855 | 4.940285 | 7.691596 | 0.005226 | 0.004525 | 0.004373 |
| prefer_only.test | RUN | 0.380629 | 1.928979 | 1.780903 | 0.002302 | 0.002243 | 0.002172 |
| relationship.test | RUN | 0.931586 | 4.927290 | 6.336234 | 0.003781 | 0.005027 | 0.003694 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.013× | 1.025×, 1.002× | 1.003× |
| clang | 0.989× | 0.990×, 0.989× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.002103s | 0.002089s | 0.002102s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.002061s | 0.002034s | 0.002066s | byte equality observed |
| any_completion_handler.test | 10 | 0.001658s | 0.001625s | 0.001591s | byte equality observed |
| any_completion_handler_select.test | 6 | 0.001666s | 0.001624s | 0.001641s | byte equality observed |
| any_io_executor.test | 4 | 0.002018s | 0.002024s | 0.002056s | byte equality observed |
| any_io_executor_select.test | 3 | 0.002053s | 0.002056s | 0.001985s | byte equality observed |
| append.test | 7 | 0.001581s | 0.001586s | 0.001540s | byte equality observed |
| append_select.test | 6 | 0.001550s | 0.001577s | 0.001525s | byte equality observed |
| as_tuple.test | 10 | 0.001667s | 0.001705s | 0.001613s | byte equality observed |
| as_tuple_select.test | 7 | 0.001604s | 0.001616s | 0.001581s | byte equality observed |
| bind_allocator.test | 1 | 0.001974s | 0.002090s | 0.002016s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001756s | 0.001732s | 0.001754s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001461s | 0.001480s | 0.001435s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001368s | 0.001370s | 0.001329s | byte equality observed |
| bind_executor.test | 1 | 0.002052s | 0.002040s | 0.001992s | byte equality observed |
| bind_executor_select.test | 1 | 0.002300s | 0.002318s | 0.002239s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001412s | 0.001402s | 0.001398s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001410s | 0.001404s | 0.001417s | byte equality observed |
| buffer.test | 10 | 0.001341s | 0.001405s | 0.001321s | byte equality observed |
| buffer_select.test | 10 | 0.001356s | 0.001346s | 0.001354s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001732s | 0.001732s | 0.001727s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001654s | 0.001715s | 0.001700s | byte equality observed |
| buffered_stream.test | 10 | 0.001712s | 0.001757s | 0.001732s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001674s | 0.001722s | 0.001704s | byte equality observed |
| buffered_write_stream.test | 9 | 0.001713s | 0.001766s | 0.001744s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001674s | 0.001679s | 0.001707s | byte equality observed |
| buffers_iterator.test | 9 | 0.001347s | 0.001328s | 0.001303s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001275s | 0.001286s | 0.001249s | byte equality observed |
| cancel_after.test | 1 | 0.004015s | 0.004040s | 0.004015s | byte equality observed |
| cancel_after_select.test | 1 | 0.003431s | 0.003402s | 0.003384s | byte equality observed |
| cancel_at.test | 1 | 0.004148s | 0.004287s | 0.004219s | byte equality observed |
| cancel_at_select.test | 1 | 0.003890s | 0.004375s | 0.004086s | byte equality observed |
| co_composed.test | 9 | 0.001311s | 0.001336s | 0.001269s | byte equality observed |
| co_composed_select.test | 10 | 0.001253s | 0.001254s | 0.001250s | byte equality observed |
| compose.test | 1 | 0.002123s | 0.002098s | 0.002080s | byte equality observed |
| compose_select.test | 1 | 0.001762s | 0.001737s | 0.001775s | byte equality observed |
| composed.test | 1 | 0.002423s | 0.002363s | 0.002404s | byte equality observed |
| composed_select.test | 1 | 0.001824s | 0.001910s | 0.001891s | byte equality observed |
| config.test | 10 | 0.001387s | 0.001424s | 0.001346s | byte equality observed |
| config_select.test | 10 | 0.001401s | 0.001427s | 0.001389s | byte equality observed |
| connect_pipe.test | 10 | 0.001420s | 0.001429s | 0.001467s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001399s | 0.001419s | 0.001405s | byte equality observed |
| consign.test | 10 | 0.001406s | 0.001406s | 0.001395s | byte equality observed |
| consign_select.test | 10 | 0.001330s | 0.001340s | 0.001305s | byte equality observed |
| deadline_timer.test | 1 | 0.002853s | 0.002843s | 0.002955s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002685s | 0.002727s | 0.002646s | byte equality observed |
| deferred.test | 10 | 0.001275s | 0.001287s | 0.001276s | byte equality observed |
| deferred_select.test | 10 | 0.001238s | 0.001235s | 0.001236s | byte equality observed |
| disposition.test | 10 | 0.001300s | 0.001300s | 0.001298s | byte equality observed |
| disposition_select.test | 10 | 0.001299s | 0.001300s | 0.001289s | byte equality observed |
| error.test | 10 | 0.001268s | 0.001263s | 0.001248s | byte equality observed |
| error_select.test | 10 | 0.001258s | 0.001271s | 0.001252s | byte equality observed |
| inline_executor.test | 10 | 0.001261s | 0.001290s | 0.001254s | byte equality observed |
| inline_executor_select.test | 10 | 0.001279s | 0.001283s | 0.001244s | byte equality observed |
| inline_or_executor.test | 10 | 0.001271s | 0.001296s | 0.001251s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001275s | 0.001287s | 0.001267s | byte equality observed |
| io_context.test | 1 | 0.002304s | 0.002339s | 0.002379s | byte equality observed |
| io_context_select.test | 1 | 0.002651s | 0.002669s | 0.002670s | byte equality observed |
| io_context_strand.test | 1 | 0.002659s | 0.002708s | 0.002707s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002457s | 0.002385s | 0.002457s | byte equality observed |
| ip_host_name.test | 10 | 0.001274s | 0.001277s | 0.001275s | byte equality observed |
| ip_host_name_select.test | 10 | 0.001221s | 0.001237s | 0.001231s | byte equality observed |
| ip_icmp.test | 10 | 0.001259s | 0.001292s | 0.001254s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001269s | 0.001281s | 0.001246s | byte equality observed |
| ip_multicast.test | 10 | 0.001372s | 0.001382s | 0.001369s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001351s | 0.001358s | 0.001342s | byte equality observed |
| ip_tcp.test | 10 | 0.001861s | 0.001876s | 0.001897s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001784s | 0.001791s | 0.001797s | byte equality observed |
| ip_udp.test | 10 | 0.001394s | 0.001393s | 0.001389s | byte equality observed |
| ip_udp_select.test | 10 | 0.001363s | 0.001381s | 0.001360s | byte equality observed |
| ip_unicast.test | 10 | 0.001334s | 0.001349s | 0.001338s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001320s | 0.001363s | 0.001314s | byte equality observed |
| ip_v6_only.test | 10 | 0.001334s | 0.001410s | 0.001333s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001302s | 0.001405s | 0.001295s | byte equality observed |
| is_read_buffered.test | 10 | 0.001227s | 0.001284s | 0.001220s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.001224s | 0.001301s | 0.001238s | byte equality observed |
| is_write_buffered.test | 10 | 0.001237s | 0.001307s | 0.001216s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001245s | 0.001323s | 0.001201s | byte equality observed |
| prepend.test | 10 | 0.001321s | 0.001401s | 0.001277s | byte equality observed |
| prepend_select.test | 10 | 0.001372s | 0.001416s | 0.001250s | byte equality observed |
| read.test | 10 | 0.001894s | 0.001863s | 0.001780s | byte equality observed |
| read_at.test | 8 | 0.002378s | 0.002364s | 0.002192s | byte equality observed |
| read_at_select.test | 9 | 0.002334s | 0.002359s | 0.002174s | byte equality observed |
| read_select.test | 9 | 0.001903s | 0.001875s | 0.001856s | byte equality observed |
| read_until.test | 10 | 0.001563s | 0.001544s | 0.001581s | byte equality observed |
| read_until_select.test | 10 | 0.001570s | 0.001542s | 0.001535s | byte equality observed |
| recycling_allocator.test | 10 | 0.001304s | 0.001344s | 0.001329s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001331s | 0.001353s | 0.001319s | byte equality observed |
| signal_set.test | 10 | 0.001372s | 0.001335s | 0.001365s | byte equality observed |
| signal_set_select.test | 10 | 0.001347s | 0.001341s | 0.001316s | byte equality observed |
| socket_base.test | 10 | 0.001495s | 0.001481s | 0.001479s | byte equality observed |
| socket_base_select.test | 10 | 0.001466s | 0.001470s | 0.001506s | byte equality observed |
| spawn.test | 10 | 0.001588s | 0.001590s | 0.001592s | byte equality observed |
| spawn_select.test | 10 | 0.001572s | 0.001595s | 0.001573s | byte equality observed |
| static_thread_pool.test | 10 | 0.001318s | 0.001301s | 0.001293s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001306s | 0.001265s | 0.001238s | byte equality observed |
| strand.test | 1 | 0.002405s | 0.002329s | 0.002462s | byte equality observed |
| strand_select.test | 1 | 0.002039s | 0.001991s | 0.002071s | byte equality observed |
| streambuf.test | 10 | 0.001392s | 0.001384s | 0.001356s | byte equality observed |
| streambuf_select.test | 10 | 0.001386s | 0.001351s | 0.001377s | byte equality observed |
| thread_pool.test | 8 | 0.002849s | 0.002804s | 0.002834s | byte equality observed |
| thread_pool_select.test | 8 | 0.002848s | 0.002769s | 0.002798s | byte equality observed |
| write.test | 10 | 0.001963s | 0.001949s | 0.001890s | byte equality observed |
| write_at.test | 9 | 0.002105s | 0.002089s | 0.002100s | byte equality observed |
| write_at_select.test | 9 | 0.002082s | 0.002035s | 0.002029s | byte equality observed |
| write_select.test | 10 | 0.001938s | 0.001868s | 0.001904s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44390936409).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
