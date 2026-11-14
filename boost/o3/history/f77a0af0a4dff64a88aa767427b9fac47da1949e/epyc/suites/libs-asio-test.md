# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.667498 | 3.852734 | 3.718135 | 0.002446 | 0.003080 | 0.002462 |
| any_completion_executor_select.test | RUN | 0.684056 | 3.860013 | 3.885866 | 0.002455 | 0.002479 | 0.002611 |
| any_completion_handler.test | RUN | 0.764807 | 3.489616 | 3.476787 | 0.001846 | 0.002055 | 0.002050 |
| any_completion_handler_select.test | RUN | 0.812476 | 3.572109 | 3.626798 | 0.002060 | 0.002126 | 0.002034 |
| any_io_executor.test | RUN | 0.702205 | 4.162569 | 4.121344 | 0.002332 | 0.002626 | 0.002396 |
| any_io_executor_select.test | RUN | 0.715510 | 4.057350 | 4.300590 | 0.002046 | 0.002592 | 0.002072 |
| append.test | RUN | 0.636434 | 3.265980 | 2.972593 | 0.001943 | 0.002027 | 0.002020 |
| append_select.test | RUN | 0.657703 | 3.319203 | 3.052821 | 0.001905 | 0.002031 | 0.001928 |
| as_tuple.test | RUN | 0.827024 | 3.976960 | 4.301623 | 0.002072 | 0.001808 | 0.002122 |
| as_tuple_select.test | RUN | 0.838723 | 3.950551 | 4.252466 | 0.001780 | 0.002089 | 0.001792 |
| associated_allocator.test | LINK | 0.187253 | 0.353030 | 0.485846 | — | — | — |
| associated_allocator_select.test | LINK | 0.187140 | 0.364716 | 0.487517 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.198929 | 0.370597 | 0.517207 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.198906 | 0.374243 | 0.522236 | — | — | — |
| associated_executor.test | LINK | 0.287357 | 0.663338 | 0.818106 | — | — | — |
| associated_executor_select.test | LINK | 0.288496 | 0.662455 | 0.815320 | — | — | — |
| associated_immediate_executor.test | LINK | 0.271469 | 0.610939 | 0.742047 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.272295 | 0.617033 | 0.742531 | — | — | — |
| associator.test | LINK | 0.151012 | 0.307039 | 0.408993 | — | — | — |
| associator_select.test | LINK | 0.148103 | 0.294477 | 0.383115 | — | — | — |
| awaitable.test | LINK | 0.138545 | 0.295172 | 0.392583 | — | — | — |
| awaitable_select.test | LINK | 0.147699 | 0.281138 | 0.401381 | — | — | — |
| basic_datagram_socket.test | LINK | 0.439845 | 0.915242 | 1.521536 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.444777 | 0.933228 | 1.559654 | — | — | — |
| basic_deadline_timer.test | LINK | 0.534295 | 1.061174 | 1.726188 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.548709 | 1.088921 | 1.769891 | — | — | — |
| basic_file.test | LINK | 0.151988 | 0.286868 | 0.392316 | — | — | — |
| basic_file_select.test | LINK | 0.146527 | 0.291841 | 0.391548 | — | — | — |
| basic_random_access_file.test | LINK | 0.151056 | 0.294184 | 0.392917 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.148938 | 0.293786 | 0.392238 | — | — | — |
| basic_raw_socket.test | LINK | 0.441501 | 0.891013 | 1.524459 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.449854 | 0.917938 | 1.557111 | — | — | — |
| basic_readable_pipe.test | LINK | 0.425215 | 0.866863 | 1.300373 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.448037 | 0.919996 | 1.557633 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.438367 | 0.902631 | 1.518829 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.448038 | 0.920742 | 1.557185 | — | — | — |
| basic_signal_set.test | LINK | 0.427649 | 0.830769 | 1.140110 | — | — | — |
| basic_signal_set_select.test | LINK | 0.470714 | 0.898250 | 1.437329 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.432962 | 0.908661 | 1.455449 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.451924 | 0.935407 | 1.526169 | — | — | — |
| basic_stream_file.test | LINK | 0.148230 | 0.277983 | 0.412274 | — | — | — |
| basic_stream_file_select.test | LINK | 0.153034 | 0.283819 | 0.404952 | — | — | — |
| basic_stream_socket.test | LINK | 0.437842 | 0.913577 | 1.489746 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.454632 | 0.953204 | 1.482944 | — | — | — |
| basic_streambuf.test | LINK | 0.221921 | 0.412343 | 0.605370 | — | — | — |
| basic_streambuf_select.test | LINK | 0.223926 | 0.414196 | 0.590497 | — | — | — |
| basic_waitable_timer.test | LINK | 0.412790 | 0.849679 | 1.433683 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.423696 | 0.875867 | 1.435762 | — | — | — |
| basic_writable_pipe.test | LINK | 0.420954 | 0.843791 | 1.332147 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.446374 | 0.920729 | 1.621071 | — | — | — |
| bind_allocator.test | RUN | 0.693444 | 3.294522 | 3.365058 | 0.002499 | 0.002370 | 0.002232 |
| bind_allocator_select.test | RUN | 0.711488 | 3.315553 | 3.311953 | 0.002512 | 0.002486 | 0.002153 |
| bind_cancellation_slot.test | RUN | 0.705595 | 3.299540 | 3.409390 | 0.001685 | 0.001773 | 0.001556 |
| bind_cancellation_slot_select.test | RUN | 0.731402 | 3.329392 | 3.260828 | 0.001642 | 0.001670 | 0.001499 |
| bind_executor.test | RUN | 0.490634 | 2.399744 | 2.117219 | 0.002314 | 0.002421 | 0.002266 |
| bind_executor_select.test | RUN | 0.500621 | 2.450551 | 2.088536 | 0.002182 | 0.002223 | 0.002111 |
| bind_immediate_executor.test | RUN | 0.362935 | 1.929595 | 1.278088 | 0.001527 | 0.001457 | 0.001450 |
| bind_immediate_executor_select.test | RUN | 0.388012 | 1.922045 | 1.434844 | 0.001596 | 0.001591 | 0.001447 |
| buffer.test | RUN | 0.231911 | 0.812425 | 0.800263 | 0.001530 | 0.001469 | 0.001454 |
| buffer_select.test | RUN | 0.227904 | 0.819586 | 0.807417 | 0.001557 | 0.001537 | 0.001466 |
| buffer_registration.test | LINK | 0.196414 | 0.416851 | 0.467835 | — | — | — |
| buffer_registration_select.test | LINK | 0.189027 | 0.416693 | 0.477700 | — | — | — |
| buffered_read_stream.test | RUN | 0.781434 | 5.233820 | 4.915327 | 0.001936 | 0.002455 | 0.002437 |
| buffered_read_stream_select.test | RUN | 0.795806 | 5.252540 | 5.015036 | 0.001924 | 0.002330 | 0.002356 |
| buffered_stream.test | RUN | 1.233031 | 8.105450 | 8.268413 | 0.002460 | 0.002598 | 0.002427 |
| buffered_stream_select.test | RUN | 1.336478 | 8.110293 | 8.066582 | 0.002516 | 0.002529 | 0.002319 |
| buffered_write_stream.test | RUN | 1.273415 | 6.953392 | 7.073423 | 0.002376 | 0.002566 | 0.002262 |
| buffered_write_stream_select.test | RUN | 1.286080 | 7.080215 | 6.807034 | 0.002162 | 0.002623 | 0.002413 |
| buffers_iterator.test | RUN | 0.404769 | 0.666180 | 1.105561 | 0.001889 | 0.002195 | 0.001892 |
| buffers_iterator_select.test | RUN | 0.401726 | 0.675024 | 1.104229 | 0.001852 | 0.002014 | 0.001820 |
| cancel_after.test | RUN | 1.043115 | 5.361227 | 5.332429 | 0.004125 | 0.003987 | 0.004393 |
| cancel_after_select.test | RUN | 1.033546 | 5.287450 | 5.268292 | 0.004232 | 0.003985 | 0.004273 |
| cancel_at.test | RUN | 1.021311 | 4.783243 | 4.967740 | 0.004128 | 0.003792 | 0.004150 |
| cancel_at_select.test | RUN | 1.016917 | 4.706829 | 4.898814 | 0.004317 | 0.003796 | 0.003933 |
| cancellation_signal.test | LINK | 0.158845 | 0.250224 | 0.315802 | — | — | — |
| cancellation_signal_select.test | LINK | 0.175922 | 0.256908 | 0.321511 | — | — | — |
| cancellation_state.test | LINK | 0.172578 | 0.254197 | 0.365109 | — | — | — |
| cancellation_state_select.test | LINK | 0.196177 | 0.254565 | 0.484695 | — | — | — |
| cancellation_type.test | LINK | 0.148944 | 0.200649 | 0.411093 | — | — | — |
| cancellation_type_select.test | LINK | 0.149412 | 0.196131 | 0.371940 | — | — | — |
| co_composed.test | RUN | 0.149898 | 0.199447 | 0.385805 | 0.001912 | 0.001483 | 0.001866 |
| co_composed_select.test | RUN | 0.144865 | 0.197371 | 0.402177 | 0.001729 | 0.001849 | 0.001550 |
| co_spawn.test | LINK | 0.143680 | 0.232156 | 0.373376 | — | — | — |
| co_spawn_select.test | LINK | 0.151552 | 0.266716 | 0.395911 | — | — | — |
| completion_condition.test | LINK | 0.190944 | 0.431637 | 0.513397 | — | — | — |
| completion_condition_select.test | LINK | 0.193059 | 0.436027 | 0.500740 | — | — | — |
| compose.test | RUN | 0.860574 | 4.206876 | 4.282269 | 0.002642 | 0.002553 | 0.002073 |
| compose_select.test | RUN | 0.847427 | 4.162292 | 4.237190 | 0.002409 | 0.002632 | 0.002273 |
| composed.test | RUN | 0.848183 | 4.157894 | 4.173690 | 0.002186 | 0.002230 | 0.002168 |
| composed_select.test | RUN | 0.829440 | 4.064479 | 4.104259 | 0.002188 | 0.001795 | 0.002086 |
| config.test | RUN | 0.454309 | 2.599638 | 1.789120 | 0.002036 | 0.002236 | 0.001896 |
| config_select.test | RUN | 0.470323 | 2.799583 | 2.105051 | 0.002092 | 0.002085 | 0.001904 |
| connect.test | LINK | 1.337048 | 8.937345 | 8.941334 | — | — | — |
| connect_select.test | LINK | 1.354091 | 8.894488 | 8.857786 | — | — | — |
| connect_pipe.test | RUN | 0.743559 | 3.328666 | 3.239412 | 0.001758 | 0.002104 | 0.002026 |
| connect_pipe_select.test | RUN | 0.779115 | 3.489438 | 3.472544 | 0.001726 | 0.002063 | 0.002010 |
| consign.test | RUN | 0.646099 | 3.219677 | 2.935443 | 0.002084 | 0.002079 | 0.002064 |
| consign_select.test | RUN | 0.657448 | 3.282059 | 2.887898 | 0.001731 | 0.002060 | 0.001888 |
| coroutine.test | LINK | 0.154055 | 0.342271 | 0.433979 | — | — | — |
| coroutine_select.test | LINK | 0.156821 | 0.325384 | 0.415653 | — | — | — |
| deadline_timer.test | RUN | 0.924586 | 4.208674 | 4.215945 | 0.003682 | 0.003766 | 0.003439 |
| deadline_timer_select.test | RUN | 0.931521 | 4.206662 | 4.197330 | 0.003356 | 0.003272 | 0.003399 |
| deferred.test | RUN | 0.175176 | 0.305423 | 0.444194 | 0.001697 | 0.001939 | 0.001840 |
| deferred_select.test | RUN | 0.167967 | 0.318007 | 0.426971 | 0.001822 | 0.001732 | 0.001856 |
| detached.test | LINK | 0.183567 | 0.351594 | 0.446783 | — | — | — |
| detached_select.test | LINK | 0.188166 | 0.345808 | 0.451843 | — | — | — |
| disposition.test | RUN | 0.174601 | 0.823374 | 0.839381 | 0.001580 | 0.002026 | 0.001918 |
| disposition_select.test | RUN | 0.172283 | 0.822103 | 0.838667 | 0.001573 | 0.002010 | 0.001958 |
| error.test | RUN | 0.159190 | 0.788538 | 0.750038 | 0.001494 | 0.001949 | 0.001890 |
| error_select.test | RUN | 0.159209 | 0.792431 | 0.747050 | 0.001528 | 0.001898 | 0.001964 |
| file_base.test | LINK | 0.201198 | 0.656449 | 0.794472 | — | — | — |
| file_base_select.test | LINK | 0.200715 | 0.634685 | 0.718934 | — | — | — |
| fwd_first.test | LINK | 0.465403 | 1.018025 | 1.506022 | — | — | — |
| fwd_last.test | LINK | 0.462768 | 0.943822 | 1.521998 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.179689 | 0.402228 | 0.536174 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.179373 | 0.385460 | 0.533635 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.683655 | 3.327675 | 2.970640 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.682684 | 3.480508 | 3.028203 | — | — | — |
| generic_raw_protocol.test | LINK | 0.683572 | 3.359498 | 2.980373 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.691050 | 3.491167 | 2.955678 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.598046 | 2.891837 | 2.557731 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.598898 | 3.008793 | 2.550362 | — | — | — |
| generic_stream_protocol.test | LINK | 0.645009 | 3.132528 | 2.736274 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.649121 | 3.275477 | 2.778198 | — | — | — |
| high_resolution_timer.test | LINK | 0.286956 | 0.586374 | 0.839208 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.294502 | 0.609966 | 0.853640 | — | — | — |
| immediate.test | LINK | 0.201446 | 0.445798 | 0.520660 | — | — | — |
| immediate_select.test | LINK | 0.201048 | 0.448202 | 0.513703 | — | — | — |
| inline_executor.test | RUN | 0.252102 | 0.700437 | 0.778916 | 0.001554 | 0.001537 | 0.001472 |
| inline_executor_select.test | RUN | 0.249108 | 0.708995 | 0.793540 | 0.001399 | 0.001535 | 0.001455 |
| inline_or_executor.test | RUN | 0.389826 | 2.075960 | 1.516668 | 0.001430 | 0.001564 | 0.001487 |
| inline_or_executor_select.test | RUN | 0.403201 | 2.112095 | 1.656839 | 0.001415 | 0.001565 | 0.001454 |
| io_context.test | RUN | 0.566045 | 3.119486 | 2.591259 | 0.002565 | 0.002436 | 0.002626 |
| io_context_select.test | RUN | 0.560874 | 3.000404 | 2.651475 | 0.002256 | 0.002403 | 0.002210 |
| io_context_strand.test | RUN | 0.533454 | 2.616702 | 2.282924 | 0.002509 | 0.002479 | 0.002521 |
| io_context_strand_select.test | RUN | 0.534018 | 2.568549 | 2.251861 | 0.002279 | 0.002323 | 0.002310 |
| ip_address.test | LINK | 0.201874 | 0.610319 | 0.643048 | — | — | — |
| ip_address_select.test | LINK | 0.201847 | 0.615269 | 0.646603 | — | — | — |
| ip_address_v4.test | LINK | 0.204265 | 0.641456 | 0.711409 | — | — | — |
| ip_address_v4_select.test | LINK | 0.203304 | 0.652416 | 0.709629 | — | — | — |
| ip_address_v6.test | LINK | 0.228592 | 0.826259 | 0.863323 | — | — | — |
| ip_address_v6_select.test | LINK | 0.227910 | 0.838344 | 0.870939 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.182908 | 0.412526 | 0.548786 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.182742 | 0.412075 | 0.543300 | — | — | — |
| ip_basic_resolver.test | LINK | 0.284355 | 0.586818 | 0.831030 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.287404 | 0.607973 | 0.859064 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.099594 | 0.196838 | 0.237581 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.098263 | 0.198279 | 0.237908 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.182447 | 0.401551 | 0.546634 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.182337 | 0.404842 | 0.566418 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.170822 | 0.385070 | 0.873096 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.171336 | 0.389849 | 0.918008 | — | — | — |
| ip_host_name.test | RUN | 0.180899 | 0.510653 | 0.885944 | 0.001503 | 0.001490 | 0.001682 |
| ip_host_name_select.test | RUN | 0.180333 | 0.517444 | 0.990808 | 0.001499 | 0.001468 | 0.001790 |
| ip_icmp.test | RUN | 0.821911 | 6.390797 | 6.138139 | 0.001532 | 0.001936 | 0.001742 |
| ip_icmp_select.test | RUN | 0.824250 | 6.782528 | 6.054875 | 0.001540 | 0.001774 | 0.001575 |
| ip_multicast.test | RUN | 0.487837 | 3.619466 | 3.530744 | 0.001641 | 0.001709 | 0.002036 |
| ip_multicast_select.test | RUN | 0.503421 | 3.538399 | 3.487944 | 0.001478 | 0.002058 | 0.001823 |
| ip_resolver_query_base.test | LINK | 0.115199 | 0.335920 | 0.422210 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.115631 | 0.321792 | 0.410710 | — | — | — |
| ip_tcp.test | RUN | 1.213605 | 10.365752 | 9.278453 | 0.002109 | 0.002710 | 0.002482 |
| ip_tcp_select.test | RUN | 1.210515 | 10.678023 | 8.928163 | 0.001614 | 0.002761 | 0.002543 |
| ip_udp.test | RUN | 0.869223 | 7.418762 | 6.483219 | 0.001697 | 0.002180 | 0.001905 |
| ip_udp_select.test | RUN | 0.868519 | 7.584287 | 6.322080 | 0.001690 | 0.002250 | 0.001794 |
| ip_unicast.test | RUN | 0.453449 | 3.189396 | 3.079187 | 0.001602 | 0.002092 | 0.001664 |
| ip_unicast_select.test | RUN | 0.456676 | 3.264088 | 3.047342 | 0.001612 | 0.002086 | 0.001595 |
| ip_v6_only.test | RUN | 0.469463 | 3.282736 | 3.165731 | 0.001580 | 0.002106 | 0.001836 |
| ip_v6_only_select.test | RUN | 0.474122 | 3.445668 | 3.143058 | 0.001582 | 0.001972 | 0.001566 |
| is_read_buffered.test | RUN | 0.341178 | 1.046765 | 1.767683 | 0.001500 | 0.001772 | 0.001942 |
| is_read_buffered_select.test | RUN | 0.348848 | 1.078892 | 1.792504 | 0.001294 | 0.001990 | 0.001656 |
| is_write_buffered.test | RUN | 0.335329 | 1.023878 | 1.702897 | 0.001506 | 0.001658 | 0.001451 |
| is_write_buffered_select.test | RUN | 0.343537 | 1.054943 | 1.754130 | 0.001315 | 0.001855 | 0.001700 |
| local_basic_endpoint.test | LINK | 0.230621 | 0.560612 | 0.901495 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.242371 | 0.571087 | 0.878013 | — | — | — |
| local_connect_pair.test | LINK | 0.635354 | 3.272141 | 2.969070 | — | — | — |
| local_connect_pair_select.test | LINK | 0.644429 | 3.252231 | 2.878316 | — | — | — |
| local_datagram_protocol.test | LINK | 0.846232 | 4.217605 | 4.080090 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.867343 | 4.280090 | 4.056606 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.854547 | 4.121852 | 4.067157 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.856349 | 4.197739 | 4.007390 | — | — | — |
| local_stream_protocol.test | LINK | 0.793884 | 3.905360 | 3.826608 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.824383 | 3.987952 | 3.784290 | — | — | — |
| placeholders.test | LINK | 0.165029 | 0.327977 | 0.415435 | — | — | — |
| placeholders_select.test | LINK | 0.161547 | 0.312170 | 0.414350 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.417310 | 0.847200 | 1.249320 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.446180 | 0.916337 | 1.549517 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.431842 | 0.851083 | 1.290053 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.439868 | 0.943784 | 1.565618 | — | — | — |
| posix_descriptor_base.test | LINK | 0.180743 | 0.322703 | 0.441676 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.181447 | 0.339253 | 0.427418 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.829474 | 3.993150 | 3.802381 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.838549 | 4.029641 | 3.901082 | — | — | — |
| prepend.test | RUN | 0.658763 | 3.221826 | 3.049988 | 0.001589 | 0.001954 | 0.001946 |
| prepend_select.test | RUN | 0.660517 | 3.355205 | 2.976904 | 0.001687 | 0.001804 | 0.001882 |
| random_access_file.test | LINK | 0.392826 | 0.778299 | 1.006072 | — | — | — |
| random_access_file_select.test | LINK | 0.401611 | 0.844770 | 1.265875 | — | — | — |
| read.test | RUN | 1.939264 | 20.665776 | 17.280575 | 0.002482 | 0.002514 | 0.002565 |
| read_select.test | RUN | 1.949941 | 20.604871 | 17.762805 | 0.002374 | 0.002375 | 0.002401 |
| read_at.test | RUN | 1.956794 | 30.449368 | 23.926951 | 0.002983 | 0.003126 | 0.002964 |
| read_at_select.test | RUN | 1.957232 | 30.115625 | 24.453496 | 0.003151 | 0.003117 | 0.002958 |
| read_until.test | RUN | 1.037306 | 7.603366 | 6.089918 | 0.002100 | 0.002042 | 0.002150 |
| read_until_select.test | RUN | 1.048802 | 7.709686 | 6.400561 | 0.002066 | 0.002138 | 0.002048 |
| readable_pipe.test | LINK | 0.666332 | 3.206965 | 2.961081 | — | — | — |
| readable_pipe_select.test | LINK | 0.700106 | 3.399433 | 3.126564 | — | — | — |
| recycling_allocator.test | RUN | 0.209090 | 0.511917 | 0.636810 | 0.001841 | 0.001910 | 0.001800 |
| recycling_allocator_select.test | RUN | 0.209201 | 0.482232 | 0.624604 | 0.001668 | 0.001955 | 0.002229 |
| redirect_disposition.test | LINK | 0.850175 | 4.554691 | 4.619974 | — | — | — |
| redirect_disposition_select.test | LINK | 0.852638 | 4.581016 | 4.568161 | — | — | — |
| redirect_error.test | LINK | 0.783058 | 3.803323 | 3.957189 | — | — | — |
| redirect_error_select.test | LINK | 0.776940 | 3.868113 | 3.972251 | — | — | — |
| registered_buffer.test | LINK | 0.217336 | 0.394102 | 0.535608 | — | — | — |
| registered_buffer_select.test | LINK | 0.220554 | 0.397122 | 0.543095 | — | — | — |
| signal_set.test | RUN | 0.639365 | 3.188408 | 2.730339 | 0.001843 | 0.001890 | 0.001908 |
| signal_set_select.test | RUN | 0.667527 | 3.304931 | 3.100897 | 0.001755 | 0.001858 | 0.001762 |
| signal_set_base.test | LINK | 0.173349 | 0.313612 | 0.425419 | — | — | — |
| signal_set_base_select.test | LINK | 0.177402 | 0.313508 | 0.420334 | — | — | — |
| socket_base.test | RUN | 0.804553 | 5.011121 | 4.322102 | 0.002152 | 0.001969 | 0.002160 |
| socket_base_select.test | RUN | 0.819232 | 4.853127 | 4.321182 | 0.002012 | 0.002230 | 0.002109 |
| spawn.test | RUN | 1.349462 | 7.846856 | 7.170783 | 0.001794 | 0.001948 | 0.002230 |
| spawn_select.test | RUN | 1.383667 | 7.813654 | 7.197479 | 0.002032 | 0.002152 | 0.002262 |
| static_thread_pool.test | RUN | 0.367816 | 0.760678 | 1.024072 | 0.001521 | 0.001905 | 0.001751 |
| static_thread_pool_select.test | RUN | 0.386719 | 0.825982 | 1.271895 | 0.001808 | 0.001964 | 0.001805 |
| steady_timer.test | LINK | 0.414971 | 0.871816 | 1.406603 | — | — | — |
| steady_timer_select.test | LINK | 0.423990 | 0.916269 | 1.369286 | — | — | — |
| strand.test | RUN | 0.833218 | 4.434661 | 4.366793 | 0.002396 | 0.002752 | 0.002926 |
| strand_select.test | RUN | 0.848589 | 4.389267 | 4.260319 | 0.002433 | 0.002866 | 0.002396 |
| stream_file.test | LINK | 0.402739 | 0.790486 | 0.989485 | — | — | — |
| stream_file_select.test | LINK | 0.416398 | 0.844080 | 1.326718 | — | — | — |
| streambuf.test | RUN | 0.221016 | 0.549624 | 0.742147 | 0.001442 | 0.001441 | 0.001806 |
| streambuf_select.test | RUN | 0.187080 | 0.474889 | 0.718093 | 0.001507 | 0.001475 | 0.001873 |
| system_timer.test | LINK | 0.545983 | 2.934761 | 2.860777 | — | — | — |
| system_timer_select.test | LINK | 0.552622 | 2.954157 | 2.547708 | — | — | — |
| system_context.test | LINK | 0.260928 | 0.533100 | 0.618159 | — | — | — |
| system_context_select.test | LINK | 0.271166 | 0.576352 | 0.749929 | — | — | — |
| system_executor.test | LINK | 0.335510 | 1.686531 | 1.150851 | — | — | — |
| system_executor_select.test | LINK | 0.349815 | 1.684116 | 1.306266 | — | — | — |
| this_coro.test | LINK | 0.104075 | 0.207644 | 0.233574 | — | — | — |
| this_coro_select.test | LINK | 0.106698 | 0.206727 | 0.235069 | — | — | — |
| thread_pool.test | RUN | 0.396537 | 2.338498 | 1.476056 | 0.002772 | 0.002911 | 0.002713 |
| thread_pool_select.test | RUN | 0.410498 | 2.540351 | 1.621594 | 0.002836 | 0.003613 | 0.002642 |
| time_traits.test | LINK | 0.235382 | 0.615557 | 0.478310 | — | — | — |
| time_traits_select.test | LINK | 0.244886 | 0.618920 | 0.481891 | — | — | — |
| ts_buffer.test | LINK | 0.226002 | 0.680829 | 0.537740 | — | — | — |
| ts_buffer_select.test | LINK | 0.219971 | 0.683412 | 0.711303 | — | — | — |
| ts_executor.test | LINK | 0.297809 | 0.969478 | 1.316613 | — | — | — |
| ts_executor_select.test | LINK | 0.317211 | 1.031099 | 1.519125 | — | — | — |
| ts_internet.test | LINK | 0.331726 | 1.046776 | 1.643766 | — | — | — |
| ts_internet_select.test | LINK | 0.348194 | 1.050278 | 1.675922 | — | — | — |
| ts_io_context.test | LINK | 0.273533 | 0.807710 | 1.002628 | — | — | — |
| ts_io_context_select.test | LINK | 0.282489 | 0.852441 | 1.254170 | — | — | — |
| ts_net.test | LINK | 0.399338 | 1.231765 | 2.044986 | — | — | — |
| ts_net_select.test | LINK | 0.410268 | 1.278203 | 2.097717 | — | — | — |
| ts_netfwd.test | LINK | 0.403361 | 1.221583 | 2.052214 | — | — | — |
| ts_netfwd_select.test | LINK | 0.410993 | 1.268567 | 2.074809 | — | — | — |
| ts_socket.test | LINK | 0.329238 | 0.951263 | 1.572370 | — | — | — |
| ts_socket_select.test | LINK | 0.338199 | 0.987758 | 1.620940 | — | — | — |
| ts_timer.test | LINK | 0.289059 | 0.843672 | 1.405356 | — | — | — |
| ts_timer_select.test | LINK | 0.288201 | 0.880255 | 1.369251 | — | — | — |
| use_awaitable.test | LINK | 0.101134 | 0.283066 | 0.409477 | — | — | — |
| use_awaitable_select.test | LINK | 0.098710 | 0.300355 | 0.384104 | — | — | — |
| wait_traits.test | LINK | 0.096972 | 0.288229 | 0.394518 | — | — | — |
| wait_traits_select.test | LINK | 0.098879 | 0.285244 | 0.376414 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.096610 | 0.293856 | 0.384817 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.097062 | 0.292160 | 0.379354 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.097088 | 0.282516 | 0.357935 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.097010 | 0.284226 | 0.385118 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.097000 | 0.281768 | 0.368798 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.140682 | 0.285659 | 0.388283 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.140597 | 0.296964 | 0.385365 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.145249 | 0.284727 | 0.369529 | — | — | — |
| windows_object_handle.test | LINK | 0.385373 | 0.792490 | 1.042833 | — | — | — |
| windows_object_handle_select.test | LINK | 0.396840 | 0.832803 | 1.274564 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.404339 | 0.847967 | 1.110701 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.406884 | 0.899772 | 1.371438 | — | — | — |
| windows_random_access_handle.test | LINK | 0.386452 | 0.787506 | 1.033918 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.393243 | 0.842824 | 1.278432 | — | — | — |
| windows_stream_handle.test | LINK | 0.376761 | 0.808088 | 0.999593 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.397176 | 0.837078 | 1.299694 | — | — | — |
| writable_pipe.test | LINK | 0.670740 | 3.295814 | 3.087680 | — | — | — |
| writable_pipe_select.test | LINK | 0.694317 | 3.444429 | 3.284979 | — | — | — |
| write.test | RUN | 1.894198 | 18.773854 | 17.235062 | 0.002347 | 0.002516 | 0.002493 |
| write_select.test | RUN | 1.908459 | 18.612475 | 17.518203 | 0.002547 | 0.002810 | 0.002581 |
| write_at.test | RUN | 1.954853 | 27.314246 | 22.278546 | 0.002834 | 0.002670 | 0.002830 |
| write_at_select.test | RUN | 1.968708 | 26.767080 | 22.653952 | 0.002894 | 0.002793 | 0.002728 |
| any_executor.test | RUN | 0.809039 | 8.691170 | 6.706226 | 0.002458 | 0.002546 | 0.002560 |
| blocking.test | RUN | 1.947197 | 9.757823 | 13.773257 | 0.006926 | 0.006754 | 0.007592 |
| blocking_adaptation.test | RUN | 0.981600 | 4.183511 | 6.498301 | 0.004088 | 0.004353 | 0.003981 |
| context_as.test | RUN | 0.535834 | 2.843370 | 2.213106 | 0.002040 | 0.002275 | 0.001950 |
| executor.test | RUN | 0.154539 | 0.318069 | 0.414925 | 0.001858 | 0.001832 | 0.001808 |
| inline_exception_handling.test | RUN | 1.948973 | 9.285706 | 13.465165 | 0.006691 | 0.005331 | 0.005305 |
| invocable_archetype.test | RUN | 0.147968 | 0.306123 | 0.406078 | 0.001673 | 0.001977 | 0.001807 |
| mapping.test | RUN | 1.867442 | 9.032399 | 13.904283 | 0.005370 | 0.005405 | 0.005454 |
| outstanding_work.test | RUN | 0.885969 | 4.103680 | 6.320689 | 0.004064 | 0.004208 | 0.003558 |
| prefer_only.test | RUN | 0.292754 | 1.830962 | 1.423727 | 0.001814 | 0.001789 | 0.001906 |
| relationship.test | RUN | 0.702036 | 4.018095 | 5.930574 | 0.002966 | 0.004260 | 0.004137 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 0.993×, 1.019× | 0.994× |
| clang | 0.985× | 0.985×, 0.985× | 0.985× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 8 | 0.001605s | 0.001613s | 0.001604s | byte equality observed |
| any_completion_executor_select.test | 7 | 0.001577s | 0.001615s | 0.001575s | byte equality observed |
| any_completion_handler.test | 10 | 0.001291s | 0.001267s | 0.001264s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001270s | 0.001265s | 0.001259s | byte equality observed |
| any_io_executor.test | 6 | 0.001593s | 0.001597s | 0.001580s | byte equality observed |
| any_io_executor_select.test | 6 | 0.001584s | 0.001592s | 0.001562s | byte equality observed |
| append.test | 9 | 0.001226s | 0.001187s | 0.001223s | byte equality observed |
| append_select.test | 8 | 0.001200s | 0.001225s | 0.001176s | byte equality observed |
| as_tuple.test | 7 | 0.001294s | 0.001283s | 0.001277s | byte equality observed |
| as_tuple_select.test | 9 | 0.001235s | 0.001126s | 0.001203s | byte equality observed |
| bind_allocator.test | 1 | 0.001691s | 0.001690s | 0.001605s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001445s | 0.001314s | 0.001320s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001147s | 0.001171s | 0.001134s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001062s | 0.001062s | 0.001054s | byte equality observed |
| bind_executor.test | 1 | 0.001707s | 0.001717s | 0.001676s | byte equality observed |
| bind_executor_select.test | 1 | 0.002002s | 0.001966s | 0.001978s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001097s | 0.001082s | 0.001072s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001072s | 0.001083s | 0.001062s | byte equality observed |
| buffer.test | 10 | 0.001043s | 0.001059s | 0.001072s | byte equality observed |
| buffer_select.test | 10 | 0.001031s | 0.001015s | 0.001043s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001354s | 0.001343s | 0.001337s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001316s | 0.001297s | 0.001288s | byte equality observed |
| buffered_stream.test | 10 | 0.001326s | 0.001321s | 0.001345s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001300s | 0.001275s | 0.001314s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001338s | 0.001312s | 0.001304s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001320s | 0.001293s | 0.001317s | byte equality observed |
| buffers_iterator.test | 10 | 0.001014s | 0.001001s | 0.001037s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000996s | 0.001001s | 0.000962s | byte equality observed |
| cancel_after.test | 1 | 0.003428s | 0.003491s | 0.003264s | byte equality observed |
| cancel_after_select.test | 1 | 0.003003s | 0.002884s | 0.002874s | byte equality observed |
| cancel_at.test | 1 | 0.003599s | 0.003569s | 0.003724s | byte equality observed |
| cancel_at_select.test | 1 | 0.003562s | 0.003605s | 0.003436s | byte equality observed |
| co_composed.test | 10 | 0.001023s | 0.001062s | 0.001013s | byte equality observed |
| co_composed_select.test | 10 | 0.000978s | 0.001018s | 0.000959s | byte equality observed |
| compose.test | 1 | 0.001752s | 0.001811s | 0.001681s | byte equality observed |
| compose_select.test | 1 | 0.001440s | 0.001442s | 0.001413s | byte equality observed |
| composed.test | 1 | 0.002068s | 0.002042s | 0.002030s | byte equality observed |
| composed_select.test | 1 | 0.001590s | 0.001592s | 0.001600s | byte equality observed |
| config.test | 10 | 0.001099s | 0.001114s | 0.001091s | byte equality observed |
| config_select.test | 10 | 0.001116s | 0.001116s | 0.001091s | byte equality observed |
| connect_pipe.test | 10 | 0.001115s | 0.001149s | 0.001121s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001102s | 0.001129s | 0.001096s | byte equality observed |
| consign.test | 10 | 0.001120s | 0.001110s | 0.001076s | byte equality observed |
| consign_select.test | 10 | 0.001046s | 0.001041s | 0.001040s | byte equality observed |
| deadline_timer.test | 1 | 0.002399s | 0.002399s | 0.002347s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002172s | 0.002218s | 0.002136s | byte equality observed |
| deferred.test | 10 | 0.000996s | 0.000999s | 0.001006s | byte equality observed |
| deferred_select.test | 10 | 0.000947s | 0.000958s | 0.000954s | byte equality observed |
| disposition.test | 10 | 0.001007s | 0.001011s | 0.001016s | byte equality observed |
| disposition_select.test | 10 | 0.001009s | 0.001022s | 0.001012s | byte equality observed |
| error.test | 10 | 0.000992s | 0.000989s | 0.000973s | byte equality observed |
| error_select.test | 10 | 0.000985s | 0.000992s | 0.000969s | byte equality observed |
| inline_executor.test | 10 | 0.001006s | 0.000999s | 0.000987s | byte equality observed |
| inline_executor_select.test | 10 | 0.001005s | 0.001007s | 0.000994s | byte equality observed |
| inline_or_executor.test | 10 | 0.001002s | 0.001010s | 0.000986s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000996s | 0.001009s | 0.000978s | byte equality observed |
| io_context.test | 1 | 0.001940s | 0.001947s | 0.001906s | byte equality observed |
| io_context_select.test | 1 | 0.002280s | 0.002274s | 0.002268s | byte equality observed |
| io_context_strand.test | 1 | 0.002289s | 0.002279s | 0.002248s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002041s | 0.002052s | 0.002037s | byte equality observed |
| ip_host_name.test | 10 | 0.001009s | 0.001021s | 0.001018s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000966s | 0.000983s | 0.000966s | byte equality observed |
| ip_icmp.test | 10 | 0.001004s | 0.001023s | 0.000982s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001002s | 0.001029s | 0.000975s | byte equality observed |
| ip_multicast.test | 10 | 0.001080s | 0.001127s | 0.001063s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001065s | 0.001075s | 0.001044s | byte equality observed |
| ip_tcp.test | 10 | 0.001477s | 0.001528s | 0.001464s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001409s | 0.001430s | 0.001396s | byte equality observed |
| ip_udp.test | 10 | 0.001105s | 0.001115s | 0.001073s | byte equality observed |
| ip_udp_select.test | 10 | 0.001093s | 0.001134s | 0.001078s | byte equality observed |
| ip_unicast.test | 10 | 0.001049s | 0.001098s | 0.001040s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001029s | 0.001107s | 0.001039s | byte equality observed |
| ip_v6_only.test | 10 | 0.001046s | 0.001112s | 0.001058s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001035s | 0.001108s | 0.001027s | byte equality observed |
| is_read_buffered.test | 10 | 0.000974s | 0.001047s | 0.000956s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000975s | 0.001008s | 0.000956s | byte equality observed |
| is_write_buffered.test | 10 | 0.000992s | 0.001018s | 0.000965s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001027s | 0.001026s | 0.000971s | byte equality observed |
| prepend.test | 10 | 0.001095s | 0.001119s | 0.001067s | byte equality observed |
| prepend_select.test | 10 | 0.001067s | 0.001074s | 0.001053s | byte equality observed |
| read.test | 10 | 0.001489s | 0.001490s | 0.001425s | byte equality observed |
| read_at.test | 10 | 0.001848s | 0.001899s | 0.001705s | byte equality observed |
| read_at_select.test | 10 | 0.001856s | 0.001917s | 0.001713s | byte equality observed |
| read_select.test | 10 | 0.001482s | 0.001443s | 0.001445s | byte equality observed |
| read_until.test | 10 | 0.001222s | 0.001215s | 0.001186s | byte equality observed |
| read_until_select.test | 10 | 0.001215s | 0.001219s | 0.001210s | byte equality observed |
| recycling_allocator.test | 10 | 0.001023s | 0.001035s | 0.001091s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001024s | 0.001038s | 0.001034s | byte equality observed |
| signal_set.test | 10 | 0.001047s | 0.001047s | 0.001009s | byte equality observed |
| signal_set_select.test | 10 | 0.001040s | 0.001040s | 0.001029s | byte equality observed |
| socket_base.test | 10 | 0.001159s | 0.001180s | 0.001149s | byte equality observed |
| socket_base_select.test | 10 | 0.001146s | 0.001118s | 0.001123s | byte equality observed |
| spawn.test | 10 | 0.001260s | 0.001275s | 0.001214s | byte equality observed |
| spawn_select.test | 10 | 0.001239s | 0.001235s | 0.001217s | byte equality observed |
| static_thread_pool.test | 10 | 0.001028s | 0.001006s | 0.001003s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000994s | 0.001025s | 0.001005s | byte equality observed |
| strand.test | 1 | 0.001929s | 0.001972s | 0.001886s | byte equality observed |
| strand_select.test | 1 | 0.001639s | 0.001781s | 0.001667s | byte equality observed |
| streambuf.test | 10 | 0.001053s | 0.001071s | 0.001051s | byte equality observed |
| streambuf_select.test | 10 | 0.001054s | 0.001066s | 0.001030s | byte equality observed |
| thread_pool.test | 10 | 0.002243s | 0.002250s | 0.002231s | byte equality observed |
| thread_pool_select.test | 10 | 0.002229s | 0.002274s | 0.002203s | byte equality observed |
| write.test | 10 | 0.001545s | 0.001494s | 0.001470s | byte equality observed |
| write_at.test | 10 | 0.001644s | 0.001679s | 0.001608s | byte equality observed |
| write_at_select.test | 10 | 0.001629s | 0.001604s | 0.001555s | byte equality observed |
| write_select.test | 10 | 0.001562s | 0.001566s | 0.001482s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43628287753).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
