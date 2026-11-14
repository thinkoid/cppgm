# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.609024 | 3.803375 | 3.573805 | 0.002426 | 0.002374 | 0.002729 |
| any_completion_executor_select.test | RUN | 0.626627 | 3.793210 | 3.851878 | 0.002467 | 0.002208 | 0.002341 |
| any_completion_handler.test | RUN | 0.682795 | 3.372991 | 3.380922 | 0.001985 | 0.001958 | 0.002052 |
| any_completion_handler_select.test | RUN | 0.736257 | 3.495302 | 3.501028 | 0.002005 | 0.002058 | 0.002065 |
| any_io_executor.test | RUN | 0.648013 | 4.005422 | 3.849897 | 0.002397 | 0.002365 | 0.002351 |
| any_io_executor_select.test | RUN | 0.666893 | 3.927891 | 3.985618 | 0.002065 | 0.002478 | 0.002514 |
| append.test | RUN | 0.580255 | 3.175238 | 2.922406 | 0.001809 | 0.001938 | 0.002020 |
| append_select.test | RUN | 0.623358 | 3.256320 | 2.939085 | 0.001602 | 0.001835 | 0.001826 |
| as_tuple.test | RUN | 0.812384 | 3.803886 | 4.002036 | 0.001731 | 0.001856 | 0.002106 |
| as_tuple_select.test | RUN | 0.820440 | 3.770780 | 4.046530 | 0.001716 | 0.001947 | 0.001545 |
| associated_allocator.test | LINK | 0.167223 | 0.351539 | 0.467335 | — | — | — |
| associated_allocator_select.test | LINK | 0.171566 | 0.350334 | 0.478033 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.180771 | 0.375559 | 0.512005 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.181723 | 0.386118 | 0.536921 | — | — | — |
| associated_executor.test | LINK | 0.260511 | 0.646355 | 0.820432 | — | — | — |
| associated_executor_select.test | LINK | 0.260030 | 0.643514 | 0.799783 | — | — | — |
| associated_immediate_executor.test | LINK | 0.238639 | 0.597492 | 0.764410 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.250960 | 0.577540 | 0.711799 | — | — | — |
| associator.test | LINK | 0.134975 | 0.276638 | 0.405195 | — | — | — |
| associator_select.test | LINK | 0.131619 | 0.290415 | 0.383442 | — | — | — |
| awaitable.test | LINK | 0.134628 | 0.280187 | 0.371973 | — | — | — |
| awaitable_select.test | LINK | 0.138006 | 0.276398 | 0.375556 | — | — | — |
| basic_datagram_socket.test | LINK | 0.399306 | 0.901430 | 1.492436 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.409183 | 0.945989 | 1.505388 | — | — | — |
| basic_deadline_timer.test | LINK | 0.487402 | 1.038135 | 1.696004 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.496982 | 1.077336 | 1.721349 | — | — | — |
| basic_file.test | LINK | 0.136215 | 0.290850 | 0.391484 | — | — | — |
| basic_file_select.test | LINK | 0.136447 | 0.287556 | 0.394110 | — | — | — |
| basic_random_access_file.test | LINK | 0.137257 | 0.277278 | 0.387376 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.136888 | 0.274348 | 0.379665 | — | — | — |
| basic_raw_socket.test | LINK | 0.403386 | 0.890265 | 1.482176 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.416745 | 0.914009 | 1.513354 | — | — | — |
| basic_readable_pipe.test | LINK | 0.404632 | 0.851452 | 1.276801 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.417661 | 0.905334 | 1.557462 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.405400 | 0.897984 | 1.444345 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.408992 | 0.918547 | 1.469261 | — | — | — |
| basic_signal_set.test | LINK | 0.371460 | 0.835180 | 1.159829 | — | — | — |
| basic_signal_set_select.test | LINK | 0.395558 | 0.884661 | 1.405323 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.403196 | 0.876800 | 1.467519 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.413859 | 0.911243 | 1.475760 | — | — | — |
| basic_stream_file.test | LINK | 0.133338 | 0.294387 | 0.406883 | — | — | — |
| basic_stream_file_select.test | LINK | 0.134260 | 0.299544 | 0.398708 | — | — | — |
| basic_stream_socket.test | LINK | 0.416628 | 0.891048 | 1.444888 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.422419 | 0.915493 | 1.462103 | — | — | — |
| basic_streambuf.test | LINK | 0.204693 | 0.424667 | 0.589831 | — | — | — |
| basic_streambuf_select.test | LINK | 0.205140 | 0.430180 | 0.562501 | — | — | — |
| basic_waitable_timer.test | LINK | 0.382277 | 0.843443 | 1.365201 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.389781 | 0.870727 | 1.391701 | — | — | — |
| basic_writable_pipe.test | LINK | 0.389848 | 0.860145 | 1.266934 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.408719 | 0.903648 | 1.531549 | — | — | — |
| bind_allocator.test | RUN | 0.636431 | 3.245065 | 3.202194 | 0.002269 | 0.002214 | 0.002180 |
| bind_allocator_select.test | RUN | 0.660190 | 3.291726 | 3.202686 | 0.001755 | 0.001974 | 0.001843 |
| bind_cancellation_slot.test | RUN | 0.653307 | 3.310180 | 3.272194 | 0.001353 | 0.001586 | 0.001563 |
| bind_cancellation_slot_select.test | RUN | 0.673323 | 3.301344 | 3.075642 | 0.001354 | 0.001546 | 0.001550 |
| bind_executor.test | RUN | 0.438344 | 2.260235 | 2.016606 | 0.002032 | 0.002140 | 0.002329 |
| bind_executor_select.test | RUN | 0.440877 | 2.289722 | 1.990131 | 0.001839 | 0.001927 | 0.002074 |
| bind_immediate_executor.test | RUN | 0.335687 | 1.866981 | 1.273311 | 0.001353 | 0.001363 | 0.001446 |
| bind_immediate_executor_select.test | RUN | 0.348812 | 1.846481 | 1.399306 | 0.001327 | 0.001398 | 0.001411 |
| buffer.test | RUN | 0.202851 | 0.785982 | 0.782134 | 0.001372 | 0.001332 | 0.001408 |
| buffer_select.test | RUN | 0.208663 | 0.785523 | 0.784265 | 0.001352 | 0.001359 | 0.001335 |
| buffer_registration.test | LINK | 0.170609 | 0.410226 | 0.459058 | — | — | — |
| buffer_registration_select.test | LINK | 0.174329 | 0.403560 | 0.464013 | — | — | — |
| buffered_read_stream.test | RUN | 0.727303 | 4.986393 | 4.768790 | 0.001662 | 0.002358 | 0.001578 |
| buffered_read_stream_select.test | RUN | 0.755665 | 5.119316 | 4.588376 | 0.001739 | 0.002317 | 0.002334 |
| buffered_stream.test | RUN | 1.078028 | 7.854893 | 7.918039 | 0.002341 | 0.002283 | 0.002454 |
| buffered_stream_select.test | RUN | 1.158481 | 7.867892 | 7.621247 | 0.002243 | 0.002294 | 0.002343 |
| buffered_write_stream.test | RUN | 1.211031 | 6.794765 | 6.820387 | 0.002227 | 0.002314 | 0.002260 |
| buffered_write_stream_select.test | RUN | 1.217588 | 6.924480 | 6.468227 | 0.002089 | 0.002427 | 0.002397 |
| buffers_iterator.test | RUN | 0.376023 | 0.669549 | 1.091701 | 0.001592 | 0.001860 | 0.001788 |
| buffers_iterator_select.test | RUN | 0.370649 | 0.660020 | 1.068455 | 0.001757 | 0.001844 | 0.001536 |
| cancel_after.test | RUN | 0.943655 | 5.308305 | 4.890098 | 0.003897 | 0.004110 | 0.004030 |
| cancel_after_select.test | RUN | 0.971118 | 5.260990 | 4.805673 | 0.003282 | 0.004080 | 0.003851 |
| cancel_at.test | RUN | 0.944191 | 4.729097 | 4.679159 | 0.003715 | 0.003653 | 0.003416 |
| cancel_at_select.test | RUN | 0.970170 | 4.629037 | 4.594312 | 0.003255 | 0.003733 | 0.003195 |
| cancellation_signal.test | LINK | 0.128319 | 0.244986 | 0.294836 | — | — | — |
| cancellation_signal_select.test | LINK | 0.171261 | 0.242358 | 0.296717 | — | — | — |
| cancellation_state.test | LINK | 0.175883 | 0.245568 | 0.344696 | — | — | — |
| cancellation_state_select.test | LINK | 0.181692 | 0.245731 | 0.467008 | — | — | — |
| cancellation_type.test | LINK | 0.138238 | 0.197180 | 0.401231 | — | — | — |
| cancellation_type_select.test | LINK | 0.137216 | 0.202602 | 0.367420 | — | — | — |
| co_composed.test | RUN | 0.141279 | 0.196529 | 0.363163 | 0.001802 | 0.001423 | 0.001781 |
| co_composed_select.test | RUN | 0.140258 | 0.241562 | 0.394851 | 0.001667 | 0.001668 | 0.001468 |
| co_spawn.test | LINK | 0.142067 | 0.269516 | 0.397546 | — | — | — |
| co_spawn_select.test | LINK | 0.142343 | 0.219440 | 0.352515 | — | — | — |
| completion_condition.test | LINK | 0.192354 | 0.430234 | 0.513526 | — | — | — |
| completion_condition_select.test | LINK | 0.184048 | 0.431371 | 0.488779 | — | — | — |
| compose.test | RUN | 0.790346 | 4.092386 | 4.054783 | 0.002313 | 0.002321 | 0.002438 |
| compose_select.test | RUN | 0.814205 | 4.057302 | 4.033372 | 0.002150 | 0.002262 | 0.002260 |
| composed.test | RUN | 0.767510 | 3.961807 | 3.955125 | 0.001768 | 0.002038 | 0.002062 |
| composed_select.test | RUN | 0.742964 | 3.929484 | 3.868700 | 0.002033 | 0.001876 | 0.001815 |
| config.test | RUN | 0.360474 | 2.541031 | 1.747490 | 0.001880 | 0.001816 | 0.001809 |
| config_select.test | RUN | 0.453421 | 2.620113 | 2.019717 | 0.001936 | 0.001918 | 0.001834 |
| connect.test | LINK | 1.262663 | 8.402155 | 8.185138 | — | — | — |
| connect_select.test | LINK | 1.277319 | 8.427815 | 8.197040 | — | — | — |
| connect_pipe.test | RUN | 0.703867 | 3.193268 | 3.112412 | 0.001820 | 0.001978 | 0.001922 |
| connect_pipe_select.test | RUN | 0.702738 | 3.323424 | 3.342111 | 0.001681 | 0.001997 | 0.001883 |
| consign.test | RUN | 0.593061 | 3.102813 | 2.934552 | 0.001881 | 0.001644 | 0.001846 |
| consign_select.test | RUN | 0.607874 | 3.151411 | 2.873158 | 0.001703 | 0.001776 | 0.001612 |
| coroutine.test | LINK | 0.148075 | 0.325474 | 0.403959 | — | — | — |
| coroutine_select.test | LINK | 0.140195 | 0.327915 | 0.389652 | — | — | — |
| deadline_timer.test | RUN | 0.868940 | 4.075799 | 3.961182 | 0.003160 | 0.002849 | 0.003616 |
| deadline_timer_select.test | RUN | 0.880684 | 4.038540 | 3.998292 | 0.002884 | 0.002736 | 0.003554 |
| deferred.test | RUN | 0.152565 | 0.301815 | 0.428237 | 0.001818 | 0.001881 | 0.001696 |
| deferred_select.test | RUN | 0.155595 | 0.317945 | 0.426652 | 0.001707 | 0.001826 | 0.001794 |
| detached.test | LINK | 0.173702 | 0.345535 | 0.479103 | — | — | — |
| detached_select.test | LINK | 0.169345 | 0.342347 | 0.474039 | — | — | — |
| disposition.test | RUN | 0.181379 | 0.795944 | 0.847500 | 0.001386 | 0.001854 | 0.001704 |
| disposition_select.test | RUN | 0.157972 | 0.792310 | 0.843583 | 0.001442 | 0.001904 | 0.001844 |
| error.test | RUN | 0.146233 | 0.761176 | 0.756072 | 0.001375 | 0.001745 | 0.001735 |
| error_select.test | RUN | 0.146164 | 0.759803 | 0.712992 | 0.001428 | 0.001826 | 0.001771 |
| file_base.test | LINK | 0.186434 | 0.635485 | 0.739179 | — | — | — |
| file_base_select.test | LINK | 0.185299 | 0.630817 | 0.583718 | — | — | — |
| fwd_first.test | LINK | 0.414141 | 0.960483 | 1.423132 | — | — | — |
| fwd_last.test | LINK | 0.420161 | 0.907080 | 1.412268 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.159790 | 0.375239 | 0.503137 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.159819 | 0.372021 | 0.500551 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.634276 | 3.228337 | 2.824862 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.626179 | 3.339224 | 2.778961 | — | — | — |
| generic_raw_protocol.test | LINK | 0.637100 | 3.272324 | 2.814113 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.638823 | 3.381963 | 2.807725 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.550891 | 2.747268 | 2.399153 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.551168 | 2.779678 | 2.440490 | — | — | — |
| generic_stream_protocol.test | LINK | 0.589031 | 3.001609 | 2.553763 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.585146 | 3.034923 | 2.568785 | — | — | — |
| high_resolution_timer.test | LINK | 0.261351 | 0.577310 | 0.794495 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.269413 | 0.582759 | 0.825538 | — | — | — |
| immediate.test | LINK | 0.182582 | 0.436902 | 0.485102 | — | — | — |
| immediate_select.test | LINK | 0.185156 | 0.437046 | 0.492142 | — | — | — |
| inline_executor.test | RUN | 0.228826 | 0.670555 | 0.753085 | 0.001488 | 0.001522 | 0.001430 |
| inline_executor_select.test | RUN | 0.235861 | 0.671803 | 0.754315 | 0.001424 | 0.001453 | 0.001334 |
| inline_or_executor.test | RUN | 0.358038 | 1.957521 | 1.388274 | 0.001449 | 0.001446 | 0.001372 |
| inline_or_executor_select.test | RUN | 0.374713 | 2.022612 | 1.538825 | 0.001438 | 0.001414 | 0.001366 |
| io_context.test | RUN | 0.504453 | 2.995165 | 2.428437 | 0.002299 | 0.002469 | 0.002337 |
| io_context_select.test | RUN | 0.507836 | 2.943672 | 2.449006 | 0.002113 | 0.002158 | 0.002111 |
| io_context_strand.test | RUN | 0.484210 | 2.485508 | 2.128168 | 0.002243 | 0.002275 | 0.002272 |
| io_context_strand_select.test | RUN | 0.496981 | 2.465471 | 2.127285 | 0.002166 | 0.002045 | 0.002145 |
| ip_address.test | LINK | 0.183788 | 0.595589 | 0.615545 | — | — | — |
| ip_address_select.test | LINK | 0.187117 | 0.591994 | 0.621314 | — | — | — |
| ip_address_v4.test | LINK | 0.190398 | 0.627474 | 0.688888 | — | — | — |
| ip_address_v4_select.test | LINK | 0.191224 | 0.628531 | 0.674853 | — | — | — |
| ip_address_v6.test | LINK | 0.213669 | 0.832041 | 0.841582 | — | — | — |
| ip_address_v6_select.test | LINK | 0.214899 | 0.812390 | 0.827432 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.169313 | 0.400185 | 0.545590 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.166366 | 0.399079 | 0.536243 | — | — | — |
| ip_basic_resolver.test | LINK | 0.265184 | 0.575527 | 0.812718 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.275763 | 0.589698 | 0.960486 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.092958 | 0.190525 | 0.279833 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.097271 | 0.191332 | 0.381654 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.171074 | 0.389071 | 0.868663 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.168011 | 0.391061 | 0.901791 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.160058 | 0.374781 | 0.897952 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.161216 | 0.373936 | 0.835476 | — | — | — |
| ip_host_name.test | RUN | 0.169687 | 0.519567 | 0.952556 | 0.001313 | 0.001454 | 0.001912 |
| ip_host_name_select.test | RUN | 0.170092 | 0.507027 | 0.978254 | 0.001420 | 0.001383 | 0.001778 |
| ip_icmp.test | RUN | 0.775969 | 6.630743 | 5.953222 | 0.001532 | 0.001868 | 0.001902 |
| ip_icmp_select.test | RUN | 0.767220 | 6.762722 | 5.815104 | 0.001389 | 0.001966 | 0.001698 |
| ip_multicast.test | RUN | 0.473480 | 3.417804 | 3.333100 | 0.001488 | 0.001902 | 0.002110 |
| ip_multicast_select.test | RUN | 0.475438 | 3.385780 | 3.358386 | 0.001513 | 0.002058 | 0.001958 |
| ip_resolver_query_base.test | LINK | 0.110160 | 0.306801 | 0.394117 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.110595 | 0.310477 | 0.407459 | — | — | — |
| ip_tcp.test | RUN | 1.133399 | 9.882334 | 8.931792 | 0.001942 | 0.002584 | 0.002478 |
| ip_tcp_select.test | RUN | 1.139708 | 10.342752 | 8.700096 | 0.002016 | 0.002644 | 0.002582 |
| ip_udp.test | RUN | 0.830621 | 6.999666 | 6.178947 | 0.001671 | 0.002062 | 0.001954 |
| ip_udp_select.test | RUN | 0.822238 | 7.144021 | 6.047666 | 0.001575 | 0.002150 | 0.001968 |
| ip_unicast.test | RUN | 0.431968 | 3.102879 | 2.870548 | 0.001474 | 0.002140 | 0.002004 |
| ip_unicast_select.test | RUN | 0.431888 | 3.149667 | 2.866911 | 0.001459 | 0.001918 | 0.001852 |
| ip_v6_only.test | RUN | 0.441183 | 3.233868 | 3.036175 | 0.001466 | 0.001974 | 0.001589 |
| ip_v6_only_select.test | RUN | 0.450399 | 3.351151 | 3.007210 | 0.001559 | 0.002100 | 0.001566 |
| is_read_buffered.test | RUN | 0.309592 | 1.011599 | 1.689262 | 0.001438 | 0.001787 | 0.001414 |
| is_read_buffered_select.test | RUN | 0.314924 | 1.064053 | 1.732332 | 0.001357 | 0.001734 | 0.001359 |
| is_write_buffered.test | RUN | 0.308071 | 1.015908 | 1.645203 | 0.001373 | 0.001879 | 0.001640 |
| is_write_buffered_select.test | RUN | 0.320035 | 1.047562 | 1.674733 | 0.001433 | 0.001849 | 0.001449 |
| local_basic_endpoint.test | LINK | 0.163178 | 0.565419 | 0.895603 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.161941 | 0.575711 | 0.884483 | — | — | — |
| local_connect_pair.test | LINK | 0.414229 | 3.208136 | 2.797983 | — | — | — |
| local_connect_pair_select.test | LINK | 0.418199 | 3.144287 | 2.790096 | — | — | — |
| local_datagram_protocol.test | LINK | 0.541143 | 4.103332 | 3.883614 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.547564 | 4.151581 | 3.815323 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.744191 | 4.063631 | 3.834843 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.806777 | 4.169461 | 3.782968 | — | — | — |
| local_stream_protocol.test | LINK | 0.760955 | 3.886197 | 3.635745 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.778994 | 3.917573 | 3.620146 | — | — | — |
| placeholders.test | LINK | 0.154456 | 0.307041 | 0.430114 | — | — | — |
| placeholders_select.test | LINK | 0.148559 | 0.301853 | 0.436108 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.402910 | 0.872132 | 1.198418 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.417368 | 0.923597 | 1.466202 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.410212 | 0.862217 | 1.224594 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.423744 | 0.929686 | 1.450157 | — | — | — |
| posix_descriptor_base.test | LINK | 0.170430 | 0.336994 | 0.433286 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.167049 | 0.322734 | 0.428075 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.797340 | 3.940844 | 3.732319 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.813956 | 4.010799 | 3.793987 | — | — | — |
| prepend.test | RUN | 0.619785 | 3.191505 | 3.024704 | 0.001856 | 0.002004 | 0.001929 |
| prepend_select.test | RUN | 0.636739 | 3.226924 | 2.999767 | 0.001920 | 0.001855 | 0.001710 |
| random_access_file.test | LINK | 0.379296 | 0.769906 | 0.994474 | — | — | — |
| random_access_file_select.test | LINK | 0.398791 | 0.820909 | 1.273187 | — | — | — |
| read.test | RUN | 1.895596 | 19.413215 | 16.634716 | 0.002610 | 0.002428 | 0.002523 |
| read_select.test | RUN | 1.936615 | 19.279439 | 17.043492 | 0.002358 | 0.002425 | 0.002553 |
| read_at.test | RUN | 1.888528 | 27.416910 | 22.271737 | 0.003066 | 0.002849 | 0.002542 |
| read_at_select.test | RUN | 1.900313 | 27.296050 | 22.695254 | 0.003037 | 0.003022 | 0.002815 |
| read_until.test | RUN | 1.011110 | 7.423640 | 6.460394 | 0.002046 | 0.002012 | 0.001899 |
| read_until_select.test | RUN | 1.020349 | 7.479026 | 6.705112 | 0.002162 | 0.001974 | 0.001992 |
| readable_pipe.test | LINK | 0.638587 | 3.202993 | 2.786486 | — | — | — |
| readable_pipe_select.test | LINK | 0.661181 | 3.346659 | 2.986338 | — | — | — |
| recycling_allocator.test | RUN | 0.204640 | 0.476905 | 0.615910 | 0.001738 | 0.001712 | 0.001758 |
| recycling_allocator_select.test | RUN | 0.200956 | 0.475151 | 0.616473 | 0.001826 | 0.001411 | 0.001780 |
| redirect_disposition.test | LINK | 0.818760 | 4.440512 | 4.392604 | — | — | — |
| redirect_disposition_select.test | LINK | 0.844610 | 4.386678 | 4.305901 | — | — | — |
| redirect_error.test | LINK | 0.733140 | 3.666912 | 3.815034 | — | — | — |
| redirect_error_select.test | LINK | 0.739032 | 3.689603 | 3.775897 | — | — | — |
| registered_buffer.test | LINK | 0.197871 | 0.402324 | 0.535765 | — | — | — |
| registered_buffer_select.test | LINK | 0.195794 | 0.398665 | 0.533086 | — | — | — |
| signal_set.test | RUN | 0.616234 | 3.131448 | 2.685986 | 0.001726 | 0.001904 | 0.001824 |
| signal_set_select.test | RUN | 0.643254 | 3.282515 | 2.922084 | 0.001824 | 0.001921 | 0.001722 |
| signal_set_base.test | LINK | 0.159661 | 0.336055 | 0.377909 | — | — | — |
| signal_set_base_select.test | LINK | 0.161380 | 0.335410 | 0.385772 | — | — | — |
| socket_base.test | RUN | 0.763237 | 4.581666 | 4.084595 | 0.002070 | 0.002205 | 0.002107 |
| socket_base_select.test | RUN | 0.775501 | 4.469414 | 4.161880 | 0.002028 | 0.002092 | 0.002011 |
| spawn.test | RUN | 1.257266 | 7.600257 | 6.974638 | 0.002167 | 0.002294 | 0.002169 |
| spawn_select.test | RUN | 1.269688 | 7.609549 | 6.919293 | 0.002060 | 0.002052 | 0.002263 |
| static_thread_pool.test | RUN | 0.353031 | 0.726228 | 0.990909 | 0.001733 | 0.001867 | 0.001830 |
| static_thread_pool_select.test | RUN | 0.368222 | 0.777374 | 1.250720 | 0.001446 | 0.001882 | 0.001872 |
| steady_timer.test | LINK | 0.385837 | 0.855237 | 1.355312 | — | — | — |
| steady_timer_select.test | LINK | 0.399494 | 0.880347 | 1.392081 | — | — | — |
| strand.test | RUN | 0.809549 | 4.315135 | 4.202166 | 0.002478 | 0.002828 | 0.002784 |
| strand_select.test | RUN | 0.820108 | 4.282671 | 4.131923 | 0.002722 | 0.002450 | 0.002702 |
| stream_file.test | LINK | 0.379431 | 0.794589 | 1.020556 | — | — | — |
| stream_file_select.test | LINK | 0.382682 | 0.838303 | 1.263019 | — | — | — |
| streambuf.test | RUN | 0.187625 | 0.575797 | 0.697349 | 0.001416 | 0.001423 | 0.001968 |
| streambuf_select.test | RUN | 0.183015 | 0.523625 | 0.589919 | 0.001266 | 0.001377 | 0.001398 |
| system_timer.test | LINK | 0.504014 | 2.765185 | 2.427948 | — | — | — |
| system_timer_select.test | LINK | 0.519384 | 2.742210 | 2.318744 | — | — | — |
| system_context.test | LINK | 0.243415 | 0.513809 | 0.571249 | — | — | — |
| system_context_select.test | LINK | 0.251734 | 0.544387 | 0.720886 | — | — | — |
| system_executor.test | LINK | 0.330800 | 1.609986 | 1.108769 | — | — | — |
| system_executor_select.test | LINK | 0.358871 | 1.583370 | 1.224548 | — | — | — |
| this_coro.test | LINK | 0.096594 | 0.195467 | 0.231554 | — | — | — |
| this_coro_select.test | LINK | 0.098516 | 0.190921 | 0.230816 | — | — | — |
| thread_pool.test | RUN | 0.376214 | 2.025757 | 1.446629 | 0.002766 | 0.003118 | 0.002497 |
| thread_pool_select.test | RUN | 0.394490 | 2.176826 | 1.562585 | 0.002838 | 0.003342 | 0.002469 |
| time_traits.test | LINK | 0.232135 | 0.575912 | 0.468239 | — | — | — |
| time_traits_select.test | LINK | 0.234655 | 0.605111 | 0.463355 | — | — | — |
| ts_buffer.test | LINK | 0.213009 | 0.631835 | 0.498088 | — | — | — |
| ts_buffer_select.test | LINK | 0.226128 | 0.662071 | 0.522026 | — | — | — |
| ts_executor.test | LINK | 0.284091 | 0.912480 | 1.319090 | — | — | — |
| ts_executor_select.test | LINK | 0.294448 | 0.964809 | 1.553072 | — | — | — |
| ts_internet.test | LINK | 0.302784 | 1.015532 | 1.613099 | — | — | — |
| ts_internet_select.test | LINK | 0.322214 | 1.030476 | 1.691611 | — | — | — |
| ts_io_context.test | LINK | 0.252908 | 0.782770 | 0.965554 | — | — | — |
| ts_io_context_select.test | LINK | 0.263829 | 0.812413 | 1.259416 | — | — | — |
| ts_net.test | LINK | 0.375486 | 1.220109 | 1.992921 | — | — | — |
| ts_net_select.test | LINK | 0.387655 | 1.238306 | 2.025418 | — | — | — |
| ts_netfwd.test | LINK | 0.368449 | 1.223759 | 2.042524 | — | — | — |
| ts_netfwd_select.test | LINK | 0.374323 | 1.238650 | 2.018943 | — | — | — |
| ts_socket.test | LINK | 0.301417 | 0.940732 | 1.494076 | — | — | — |
| ts_socket_select.test | LINK | 0.308221 | 0.973747 | 1.592040 | — | — | — |
| ts_timer.test | LINK | 0.266532 | 0.860184 | 1.359653 | — | — | — |
| ts_timer_select.test | LINK | 0.269951 | 0.849484 | 1.332628 | — | — | — |
| use_awaitable.test | LINK | 0.096666 | 0.297119 | 0.399235 | — | — | — |
| use_awaitable_select.test | LINK | 0.094673 | 0.290695 | 0.389053 | — | — | — |
| wait_traits.test | LINK | 0.095313 | 0.291225 | 0.392383 | — | — | — |
| wait_traits_select.test | LINK | 0.093642 | 0.279517 | 0.342983 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.094280 | 0.284672 | 0.365912 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.094375 | 0.286136 | 0.355125 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.095815 | 0.283466 | 0.366237 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.093411 | 0.273568 | 0.357297 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.093478 | 0.288728 | 0.364556 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.093757 | 0.283415 | 0.355913 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.094063 | 0.285716 | 0.370838 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.093824 | 0.293450 | 0.358522 | — | — | — |
| windows_object_handle.test | LINK | 0.264903 | 0.774216 | 0.982593 | — | — | — |
| windows_object_handle_select.test | LINK | 0.386126 | 0.830345 | 1.261068 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.364628 | 0.817235 | 1.081150 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.400732 | 0.879701 | 1.392637 | — | — | — |
| windows_random_access_handle.test | LINK | 0.375030 | 0.772055 | 0.955619 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.378255 | 0.812776 | 1.272985 | — | — | — |
| windows_stream_handle.test | LINK | 0.360245 | 0.784817 | 0.987664 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.381298 | 0.835306 | 1.301740 | — | — | — |
| writable_pipe.test | LINK | 0.652953 | 3.159666 | 2.973475 | — | — | — |
| writable_pipe_select.test | LINK | 0.681148 | 3.301488 | 3.201248 | — | — | — |
| write.test | RUN | 1.867494 | 16.201677 | 16.414351 | 0.002398 | 0.002222 | 0.002356 |
| write_select.test | RUN | 1.898017 | 16.222925 | 16.696283 | 0.002451 | 0.002520 | 0.002399 |
| write_at.test | RUN | 1.938087 | 23.102774 | 20.694675 | 0.002144 | 0.002698 | 0.002500 |
| write_at_select.test | RUN | 1.943914 | 23.200947 | 21.423740 | 0.002706 | 0.002683 | 0.002622 |
| any_executor.test | RUN | 0.784926 | 8.182503 | 6.365596 | 0.002424 | 0.002404 | 0.002136 |
| blocking.test | RUN | 1.944059 | 9.468136 | 13.580369 | 0.007499 | 0.007067 | 0.007448 |
| blocking_adaptation.test | RUN | 0.988495 | 4.065097 | 6.186402 | 0.003920 | 0.003876 | 0.004378 |
| context_as.test | RUN | 0.509086 | 2.858831 | 2.033643 | 0.002094 | 0.001956 | 0.001970 |
| executor.test | RUN | 0.139324 | 0.283007 | 0.399632 | 0.001841 | 0.001899 | 0.001865 |
| inline_exception_handling.test | RUN | 1.931501 | 8.675856 | 13.388272 | 0.007247 | 0.005160 | 0.005135 |
| invocable_archetype.test | RUN | 0.146873 | 0.297550 | 0.383904 | 0.001896 | 0.001868 | 0.001669 |
| mapping.test | RUN | 1.878278 | 9.141121 | 13.626908 | 0.005428 | 0.005250 | 0.005253 |
| outstanding_work.test | RUN | 0.867427 | 3.993750 | 6.031941 | 0.004174 | 0.003654 | 0.004206 |
| prefer_only.test | RUN | 0.289769 | 1.669433 | 1.349596 | 0.001852 | 0.001888 | 0.001709 |
| relationship.test | RUN | 0.639536 | 3.801469 | 4.892570 | 0.003007 | 0.004170 | 0.002878 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.991×, 1.003× | 1.002× |
| clang | 0.977× | 0.972×, 0.982× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 3 | 0.001612s | 0.001588s | 0.001574s | byte equality observed |
| any_completion_executor_select.test | 3 | 0.001610s | 0.001579s | 0.001581s | byte equality observed |
| any_completion_handler.test | 10 | 0.001292s | 0.001257s | 0.001257s | byte equality observed |
| any_completion_handler_select.test | 6 | 0.001309s | 0.001255s | 0.001262s | byte equality observed |
| any_io_executor.test | 5 | 0.001591s | 0.001593s | 0.001546s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001597s | 0.001557s | 0.001582s | byte equality observed |
| append.test | 8 | 0.001219s | 0.001198s | 0.001220s | byte equality observed |
| append_select.test | 7 | 0.001188s | 0.001198s | 0.001182s | byte equality observed |
| as_tuple.test | 8 | 0.001299s | 0.001262s | 0.001268s | byte equality observed |
| as_tuple_select.test | 8 | 0.001230s | 0.001207s | 0.001183s | byte equality observed |
| bind_allocator.test | 1 | 0.001612s | 0.001606s | 0.001681s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001422s | 0.001350s | 0.001316s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001150s | 0.001142s | 0.001110s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001070s | 0.001033s | 0.001033s | byte equality observed |
| bind_executor.test | 1 | 0.001675s | 0.001631s | 0.001651s | byte equality observed |
| bind_executor_select.test | 1 | 0.001956s | 0.001928s | 0.001931s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001109s | 0.001108s | 0.001078s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001088s | 0.001088s | 0.001100s | byte equality observed |
| buffer.test | 10 | 0.001052s | 0.001063s | 0.001023s | byte equality observed |
| buffer_select.test | 10 | 0.001063s | 0.001037s | 0.001028s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001348s | 0.001294s | 0.001340s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001322s | 0.001342s | 0.001265s | byte equality observed |
| buffered_stream.test | 10 | 0.001337s | 0.001325s | 0.001313s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001299s | 0.001313s | 0.001258s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001316s | 0.001331s | 0.001294s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001297s | 0.001292s | 0.001287s | byte equality observed |
| buffers_iterator.test | 10 | 0.001008s | 0.001006s | 0.001006s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000987s | 0.000991s | 0.001003s | byte equality observed |
| cancel_after.test | 1 | 0.003367s | 0.003319s | 0.003229s | byte equality observed |
| cancel_after_select.test | 1 | 0.002790s | 0.002738s | 0.002742s | byte equality observed |
| cancel_at.test | 1 | 0.003560s | 0.003475s | 0.003507s | byte equality observed |
| cancel_at_select.test | 1 | 0.003499s | 0.003336s | 0.003379s | byte equality observed |
| co_composed.test | 10 | 0.001037s | 0.001065s | 0.001013s | byte equality observed |
| co_composed_select.test | 10 | 0.001003s | 0.001007s | 0.000969s | byte equality observed |
| compose.test | 1 | 0.001690s | 0.001631s | 0.001572s | byte equality observed |
| compose_select.test | 1 | 0.001404s | 0.001422s | 0.001361s | byte equality observed |
| composed.test | 1 | 0.002028s | 0.002021s | 0.001997s | byte equality observed |
| composed_select.test | 1 | 0.001465s | 0.001466s | 0.001427s | byte equality observed |
| config.test | 9 | 0.001114s | 0.001118s | 0.001113s | byte equality observed |
| config_select.test | 10 | 0.001075s | 0.001066s | 0.001078s | byte equality observed |
| connect_pipe.test | 10 | 0.001137s | 0.001099s | 0.001123s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001097s | 0.001115s | 0.001107s | byte equality observed |
| consign.test | 10 | 0.001086s | 0.001100s | 0.001089s | byte equality observed |
| consign_select.test | 10 | 0.001055s | 0.001053s | 0.001022s | byte equality observed |
| deadline_timer.test | 1 | 0.002351s | 0.002313s | 0.002260s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002149s | 0.002070s | 0.002111s | byte equality observed |
| deferred.test | 10 | 0.001001s | 0.001015s | 0.000988s | byte equality observed |
| deferred_select.test | 10 | 0.000954s | 0.000962s | 0.000951s | byte equality observed |
| disposition.test | 10 | 0.001017s | 0.001015s | 0.001004s | byte equality observed |
| disposition_select.test | 10 | 0.001014s | 0.001013s | 0.001009s | byte equality observed |
| error.test | 10 | 0.000985s | 0.000988s | 0.000982s | byte equality observed |
| error_select.test | 10 | 0.000980s | 0.000984s | 0.000983s | byte equality observed |
| inline_executor.test | 10 | 0.000991s | 0.000999s | 0.000984s | byte equality observed |
| inline_executor_select.test | 10 | 0.000996s | 0.001003s | 0.000996s | byte equality observed |
| inline_or_executor.test | 10 | 0.001008s | 0.001004s | 0.000996s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001009s | 0.000999s | 0.000990s | byte equality observed |
| io_context.test | 1 | 0.001865s | 0.001845s | 0.001916s | byte equality observed |
| io_context_select.test | 1 | 0.002253s | 0.002176s | 0.002246s | byte equality observed |
| io_context_strand.test | 1 | 0.002257s | 0.002249s | 0.002224s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002024s | 0.002018s | 0.002044s | byte equality observed |
| ip_host_name.test | 10 | 0.001018s | 0.001022s | 0.001013s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000970s | 0.000969s | 0.000964s | byte equality observed |
| ip_icmp.test | 10 | 0.000998s | 0.001000s | 0.000978s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000999s | 0.000999s | 0.000965s | byte equality observed |
| ip_multicast.test | 10 | 0.001090s | 0.001081s | 0.001066s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001052s | 0.001125s | 0.001042s | byte equality observed |
| ip_tcp.test | 10 | 0.001476s | 0.001527s | 0.001466s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001396s | 0.001446s | 0.001401s | byte equality observed |
| ip_udp.test | 10 | 0.001090s | 0.001141s | 0.001085s | byte equality observed |
| ip_udp_select.test | 10 | 0.001104s | 0.001124s | 0.001063s | byte equality observed |
| ip_unicast.test | 10 | 0.001051s | 0.001119s | 0.001035s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001042s | 0.001070s | 0.001027s | byte equality observed |
| ip_v6_only.test | 10 | 0.001053s | 0.001104s | 0.001043s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001047s | 0.001082s | 0.001025s | byte equality observed |
| is_read_buffered.test | 10 | 0.000986s | 0.000998s | 0.000957s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000975s | 0.001063s | 0.000954s | byte equality observed |
| is_write_buffered.test | 10 | 0.000981s | 0.001010s | 0.000952s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000994s | 0.001025s | 0.000965s | byte equality observed |
| prepend.test | 10 | 0.001102s | 0.001093s | 0.001018s | byte equality observed |
| prepend_select.test | 10 | 0.001058s | 0.001068s | 0.001021s | byte equality observed |
| read.test | 10 | 0.001446s | 0.001452s | 0.001420s | byte equality observed |
| read_at.test | 10 | 0.001861s | 0.001865s | 0.001703s | byte equality observed |
| read_at_select.test | 10 | 0.001893s | 0.001866s | 0.001703s | byte equality observed |
| read_select.test | 10 | 0.001494s | 0.001449s | 0.001416s | byte equality observed |
| read_until.test | 10 | 0.001211s | 0.001188s | 0.001201s | byte equality observed |
| read_until_select.test | 10 | 0.001228s | 0.001211s | 0.001218s | byte equality observed |
| recycling_allocator.test | 10 | 0.001004s | 0.001067s | 0.001004s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001030s | 0.001061s | 0.001011s | byte equality observed |
| signal_set.test | 10 | 0.001058s | 0.001057s | 0.001041s | byte equality observed |
| signal_set_select.test | 10 | 0.001058s | 0.001034s | 0.001017s | byte equality observed |
| socket_base.test | 10 | 0.001158s | 0.001143s | 0.001163s | byte equality observed |
| socket_base_select.test | 10 | 0.001127s | 0.001137s | 0.001138s | byte equality observed |
| spawn.test | 10 | 0.001256s | 0.001286s | 0.001247s | byte equality observed |
| spawn_select.test | 10 | 0.001229s | 0.001257s | 0.001249s | byte equality observed |
| static_thread_pool.test | 10 | 0.001039s | 0.001021s | 0.001022s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000983s | 0.000984s | 0.001002s | byte equality observed |
| strand.test | 1 | 0.001971s | 0.001945s | 0.001916s | byte equality observed |
| strand_select.test | 1 | 0.001630s | 0.001600s | 0.001630s | byte equality observed |
| streambuf.test | 10 | 0.001062s | 0.001076s | 0.001063s | byte equality observed |
| streambuf_select.test | 10 | 0.001062s | 0.001052s | 0.001053s | byte equality observed |
| thread_pool.test | 10 | 0.002211s | 0.002156s | 0.002182s | byte equality observed |
| thread_pool_select.test | 10 | 0.002214s | 0.002193s | 0.002183s | byte equality observed |
| write.test | 10 | 0.001530s | 0.001487s | 0.001559s | byte equality observed |
| write_at.test | 8 | 0.001639s | 0.001590s | 0.001623s | byte equality observed |
| write_at_select.test | 6 | 0.001611s | 0.001602s | 0.001597s | byte equality observed |
| write_select.test | 10 | 0.001524s | 0.001532s | 0.001437s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43619774656).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
