# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.535527 | 3.008956 | 2.375995 | 0.002546 | 0.002465 | 0.002082 |
| any_completion_executor_select.test | RUN | 0.545231 | 3.043722 | 2.535418 | 0.002492 | 0.002132 | 0.001943 |
| any_completion_handler.test | RUN | 0.641144 | 2.837742 | 2.219076 | 0.001695 | 0.001948 | 0.001682 |
| any_completion_handler_select.test | RUN | 0.636385 | 2.835539 | 2.433689 | 0.001768 | 0.001952 | 0.001676 |
| any_io_executor.test | RUN | 0.585201 | 3.335489 | 2.665527 | 0.002362 | 0.002179 | 0.001944 |
| any_io_executor_select.test | RUN | 0.571956 | 3.288907 | 2.678729 | 0.002025 | 0.002533 | 0.001909 |
| append.test | RUN | 0.537380 | 2.667586 | 2.003752 | 0.001785 | 0.001911 | 0.001624 |
| append_select.test | RUN | 0.547930 | 2.768377 | 2.031121 | 0.001892 | 0.001713 | 0.001579 |
| as_tuple.test | RUN | 0.694796 | 3.252793 | 2.786960 | 0.001740 | 0.001887 | 0.001780 |
| as_tuple_select.test | RUN | 0.679759 | 3.199499 | 2.763505 | 0.001614 | 0.001932 | 0.001286 |
| associated_allocator.test | LINK | 0.144747 | 0.289531 | 0.308843 | — | — | — |
| associated_allocator_select.test | LINK | 0.147080 | 0.267818 | 0.299396 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.164251 | 0.305889 | 0.319588 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.158500 | 0.305098 | 0.328220 | — | — | — |
| associated_executor.test | LINK | 0.229231 | 0.528252 | 0.564199 | — | — | — |
| associated_executor_select.test | LINK | 0.226065 | 0.543187 | 0.563849 | — | — | — |
| associated_immediate_executor.test | LINK | 0.213195 | 0.485311 | 0.478487 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.217871 | 0.465120 | 0.500779 | — | — | — |
| associator.test | LINK | 0.119495 | 0.229180 | 0.241532 | — | — | — |
| associator_select.test | LINK | 0.119377 | 0.217831 | 0.247112 | — | — | — |
| awaitable.test | LINK | 0.122714 | 0.224946 | 0.238120 | — | — | — |
| awaitable_select.test | LINK | 0.122535 | 0.215427 | 0.249960 | — | — | — |
| basic_datagram_socket.test | LINK | 0.363023 | 0.693324 | 0.902864 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.372042 | 0.715538 | 0.936006 | — | — | — |
| basic_deadline_timer.test | LINK | 0.432259 | 0.827752 | 1.024084 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.449458 | 0.859485 | 1.071339 | — | — | — |
| basic_file.test | LINK | 0.119912 | 0.233593 | 0.249728 | — | — | — |
| basic_file_select.test | LINK | 0.119084 | 0.238808 | 0.249192 | — | — | — |
| basic_random_access_file.test | LINK | 0.126213 | 0.212738 | 0.245089 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.144818 | 0.214087 | 0.247421 | — | — | — |
| basic_raw_socket.test | LINK | 0.381102 | 0.702363 | 0.904584 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.389243 | 0.720263 | 0.930228 | — | — | — |
| basic_readable_pipe.test | LINK | 0.346705 | 0.695549 | 0.801997 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.370068 | 0.726975 | 0.949777 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.358618 | 0.717528 | 0.966297 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.359655 | 0.741776 | 0.982318 | — | — | — |
| basic_signal_set.test | LINK | 0.331205 | 0.655808 | 0.773769 | — | — | — |
| basic_signal_set_select.test | LINK | 0.368795 | 0.698526 | 0.935530 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.363650 | 0.710538 | 0.964541 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.372730 | 0.732577 | 0.990572 | — | — | — |
| basic_stream_file.test | LINK | 0.120271 | 0.218534 | 0.243451 | — | — | — |
| basic_stream_file_select.test | LINK | 0.124489 | 0.222999 | 0.248578 | — | — | — |
| basic_stream_socket.test | LINK | 0.368485 | 0.708824 | 0.929504 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.371888 | 0.742370 | 0.946685 | — | — | — |
| basic_streambuf.test | LINK | 0.178564 | 0.319410 | 0.349872 | — | — | — |
| basic_streambuf_select.test | LINK | 0.186418 | 0.324836 | 0.357418 | — | — | — |
| basic_waitable_timer.test | LINK | 0.338986 | 0.656503 | 0.867166 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.345329 | 0.681364 | 0.900864 | — | — | — |
| basic_writable_pipe.test | LINK | 0.347150 | 0.666430 | 0.822085 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.370617 | 0.729040 | 0.976964 | — | — | — |
| bind_allocator.test | RUN | 0.568772 | 2.727905 | 2.172340 | 0.002254 | 0.002210 | 0.001670 |
| bind_allocator_select.test | RUN | 0.581866 | 2.704619 | 2.144654 | 0.001840 | 0.002066 | 0.001475 |
| bind_cancellation_slot.test | RUN | 0.580909 | 2.704899 | 2.213641 | 0.001794 | 0.001496 | 0.001251 |
| bind_cancellation_slot_select.test | RUN | 0.580886 | 2.765428 | 2.134010 | 0.001550 | 0.001472 | 0.001426 |
| bind_executor.test | RUN | 0.390880 | 1.909002 | 1.342143 | 0.002198 | 0.002116 | 0.001838 |
| bind_executor_select.test | RUN | 0.392384 | 1.933733 | 1.340662 | 0.001957 | 0.002000 | 0.001580 |
| bind_immediate_executor.test | RUN | 0.296092 | 1.560769 | 0.875863 | 0.001312 | 0.001085 | 0.001090 |
| bind_immediate_executor_select.test | RUN | 0.313956 | 1.523427 | 0.936106 | 0.001357 | 0.001330 | 0.001107 |
| buffer.test | RUN | 0.169938 | 0.610413 | 0.503350 | 0.001280 | 0.001237 | 0.001109 |
| buffer_select.test | RUN | 0.171072 | 0.605184 | 0.508030 | 0.001268 | 0.001274 | 0.001060 |
| buffer_registration.test | LINK | 0.137164 | 0.320422 | 0.298953 | — | — | — |
| buffer_registration_select.test | LINK | 0.137244 | 0.321873 | 0.297953 | — | — | — |
| buffered_read_stream.test | RUN | 0.591365 | 4.054205 | 3.020898 | 0.001714 | 0.002304 | 0.002119 |
| buffered_read_stream_select.test | RUN | 0.605358 | 4.195752 | 2.860865 | 0.001814 | 0.002228 | 0.002170 |
| buffered_stream.test | RUN | 0.823335 | 6.638419 | 5.613366 | 0.002108 | 0.002228 | 0.002041 |
| buffered_stream_select.test | RUN | 0.891512 | 6.687325 | 5.435424 | 0.002452 | 0.002388 | 0.001822 |
| buffered_write_stream.test | RUN | 1.023843 | 5.631260 | 4.839870 | 0.002370 | 0.002216 | 0.001805 |
| buffered_write_stream_select.test | RUN | 1.060061 | 5.711068 | 4.667563 | 0.002292 | 0.001912 | 0.001798 |
| buffers_iterator.test | RUN | 0.295251 | 0.521650 | 0.756800 | 0.001640 | 0.001702 | 0.001321 |
| buffers_iterator_select.test | RUN | 0.301703 | 0.511815 | 0.755317 | 0.001800 | 0.001746 | 0.001119 |
| cancel_after.test | RUN | 0.876384 | 4.334435 | 3.460190 | 0.003720 | 0.003600 | 0.002216 |
| cancel_after_select.test | RUN | 0.892317 | 4.293984 | 3.460852 | 0.003902 | 0.003085 | 0.002012 |
| cancel_at.test | RUN | 0.780385 | 3.970757 | 3.495944 | 0.003738 | 0.003276 | 0.001994 |
| cancel_at_select.test | RUN | 0.697537 | 3.965497 | 3.457504 | 0.003015 | 0.002934 | 0.001861 |
| cancellation_signal.test | LINK | 0.100212 | 0.187424 | 0.304387 | — | — | — |
| cancellation_signal_select.test | LINK | 0.106907 | 0.187517 | 0.328025 | — | — | — |
| cancellation_state.test | LINK | 0.106107 | 0.189989 | 0.314307 | — | — | — |
| cancellation_state_select.test | LINK | 0.140205 | 0.190074 | 0.326104 | — | — | — |
| cancellation_type.test | LINK | 0.115076 | 0.149065 | 0.250688 | — | — | — |
| cancellation_type_select.test | LINK | 0.110501 | 0.149784 | 0.253240 | — | — | — |
| co_composed.test | RUN | 0.118833 | 0.169409 | 0.253890 | 0.001699 | 0.001659 | 0.001390 |
| co_composed_select.test | RUN | 0.125273 | 0.228587 | 0.248065 | 0.001373 | 0.001582 | 0.001408 |
| co_spawn.test | LINK | 0.117462 | 0.225514 | 0.261938 | — | — | — |
| co_spawn_select.test | LINK | 0.118510 | 0.224678 | 0.247338 | — | — | — |
| completion_condition.test | LINK | 0.157816 | 0.349291 | 0.336339 | — | — | — |
| completion_condition_select.test | LINK | 0.151538 | 0.369169 | 0.334976 | — | — | — |
| compose.test | RUN | 0.700920 | 3.394936 | 2.880466 | 0.002622 | 0.002293 | 0.001792 |
| compose_select.test | RUN | 0.708919 | 3.324506 | 2.864353 | 0.002176 | 0.001944 | 0.001668 |
| composed.test | RUN | 0.674126 | 3.333297 | 2.876818 | 0.002079 | 0.002021 | 0.001698 |
| composed_select.test | RUN | 0.650237 | 3.263629 | 2.845298 | 0.002068 | 0.001747 | 0.001479 |
| config.test | RUN | 0.365044 | 2.089291 | 1.243228 | 0.001843 | 0.001758 | 0.001518 |
| config_select.test | RUN | 0.398557 | 2.195857 | 1.413722 | 0.001748 | 0.001862 | 0.001526 |
| connect.test | LINK | 1.037571 | 7.278283 | 5.842087 | — | — | — |
| connect_select.test | LINK | 1.088176 | 7.311883 | 5.878928 | — | — | — |
| connect_pipe.test | RUN | 0.594792 | 2.777666 | 2.152554 | 0.001719 | 0.001842 | 0.001708 |
| connect_pipe_select.test | RUN | 0.601163 | 2.878627 | 2.290496 | 0.001818 | 0.002038 | 0.001738 |
| consign.test | RUN | 0.472905 | 2.778903 | 2.003021 | 0.001748 | 0.001930 | 0.001627 |
| consign_select.test | RUN | 0.494443 | 2.856518 | 2.013655 | 0.001870 | 0.001919 | 0.001480 |
| coroutine.test | LINK | 0.113092 | 0.289504 | 0.263739 | — | — | — |
| coroutine_select.test | LINK | 0.112544 | 0.299034 | 0.279025 | — | — | — |
| deadline_timer.test | RUN | 0.771896 | 3.589924 | 2.805825 | 0.003125 | 0.003182 | 0.003233 |
| deadline_timer_select.test | RUN | 0.804521 | 3.577715 | 2.787636 | 0.003250 | 0.003647 | 0.002765 |
| deferred.test | RUN | 0.137038 | 0.250430 | 0.272360 | 0.001880 | 0.001808 | 0.001431 |
| deferred_select.test | RUN | 0.164618 | 0.251701 | 0.276305 | 0.001752 | 0.001851 | 0.001536 |
| detached.test | LINK | 0.153582 | 0.275669 | 0.301417 | — | — | — |
| detached_select.test | LINK | 0.149375 | 0.267408 | 0.284420 | — | — | — |
| disposition.test | RUN | 0.148276 | 0.620985 | 0.546051 | 0.001402 | 0.001852 | 0.001514 |
| disposition_select.test | RUN | 0.145228 | 0.644087 | 0.542211 | 0.001414 | 0.001890 | 0.001588 |
| error.test | RUN | 0.126671 | 0.607116 | 0.491551 | 0.001295 | 0.001794 | 0.001588 |
| error_select.test | RUN | 0.124914 | 0.612429 | 0.499184 | 0.001199 | 0.001880 | 0.001533 |
| file_base.test | LINK | 0.147736 | 0.546611 | 0.510237 | — | — | — |
| file_base_select.test | LINK | 0.148276 | 0.557087 | 0.432447 | — | — | — |
| fwd_first.test | LINK | 0.347601 | 0.855889 | 0.985460 | — | — | — |
| fwd_last.test | LINK | 0.348742 | 0.817000 | 0.959070 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.128749 | 0.316612 | 0.342382 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.138364 | 0.299389 | 0.331805 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.570812 | 2.963010 | 1.954337 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.563063 | 3.059538 | 1.955767 | — | — | — |
| generic_raw_protocol.test | LINK | 0.535930 | 2.880745 | 1.933941 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.530125 | 2.949996 | 1.907238 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.443299 | 2.504611 | 1.652912 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.448737 | 2.465212 | 1.675161 | — | — | — |
| generic_stream_protocol.test | LINK | 0.500862 | 2.510388 | 1.831509 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.507947 | 2.597537 | 1.838693 | — | — | — |
| high_resolution_timer.test | LINK | 0.232508 | 0.469035 | 0.537150 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.235943 | 0.499321 | 0.551449 | — | — | — |
| immediate.test | LINK | 0.158196 | 0.379013 | 0.383414 | — | — | — |
| immediate_select.test | LINK | 0.159452 | 0.351695 | 0.386549 | — | — | — |
| inline_executor.test | RUN | 0.191591 | 0.551273 | 0.510874 | 0.002200 | 0.001502 | 0.001177 |
| inline_executor_select.test | RUN | 0.188292 | 0.567744 | 0.505401 | 0.001182 | 0.001475 | 0.001159 |
| inline_or_executor.test | RUN | 0.299891 | 1.678993 | 1.002967 | 0.001284 | 0.001431 | 0.001276 |
| inline_or_executor_select.test | RUN | 0.316030 | 1.656954 | 1.130317 | 0.001375 | 0.001390 | 0.001170 |
| io_context.test | RUN | 0.448044 | 2.468377 | 1.759359 | 0.002702 | 0.002184 | 0.002031 |
| io_context_select.test | RUN | 0.448644 | 2.362079 | 1.761627 | 0.002085 | 0.002040 | 0.002403 |
| io_context_strand.test | RUN | 0.436288 | 2.150510 | 1.521026 | 0.002114 | 0.002180 | 0.001925 |
| io_context_strand_select.test | RUN | 0.438202 | 2.128811 | 1.521206 | 0.002116 | 0.002124 | 0.001748 |
| ip_address.test | LINK | 0.168931 | 0.473227 | 0.437682 | — | — | — |
| ip_address_select.test | LINK | 0.172474 | 0.487108 | 0.436319 | — | — | — |
| ip_address_v4.test | LINK | 0.178402 | 0.513046 | 0.476218 | — | — | — |
| ip_address_v4_select.test | LINK | 0.176271 | 0.505456 | 0.468574 | — | — | — |
| ip_address_v6.test | LINK | 0.199105 | 0.675589 | 0.590789 | — | — | — |
| ip_address_v6_select.test | LINK | 0.194493 | 0.680864 | 0.600085 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.156260 | 0.317577 | 0.387995 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.155262 | 0.340442 | 0.465362 | — | — | — |
| ip_basic_resolver.test | LINK | 0.248460 | 0.629034 | 0.927521 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.242636 | 0.651040 | 0.925721 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.088048 | 0.230941 | 0.246972 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.085311 | 0.228616 | 0.251191 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.156044 | 0.497310 | 0.583632 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.154303 | 0.509284 | 0.588950 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.140953 | 0.508518 | 0.564950 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.139077 | 0.519756 | 0.565005 | — | — | — |
| ip_host_name.test | RUN | 0.143550 | 0.587517 | 0.631249 | 0.001247 | 0.001637 | 0.001568 |
| ip_host_name_select.test | RUN | 0.140553 | 0.582419 | 0.623311 | 0.001371 | 0.001606 | 0.001534 |
| ip_icmp.test | RUN | 0.680598 | 5.519249 | 4.310184 | 0.001414 | 0.001724 | 0.001445 |
| ip_icmp_select.test | RUN | 0.687566 | 5.708023 | 4.195662 | 0.001538 | 0.001828 | 0.001416 |
| ip_multicast.test | RUN | 0.418832 | 2.761836 | 2.370730 | 0.001754 | 0.001941 | 0.001916 |
| ip_multicast_select.test | RUN | 0.460625 | 2.735056 | 2.355055 | 0.001426 | 0.001804 | 0.001698 |
| ip_resolver_query_base.test | LINK | 0.100720 | 0.250656 | 0.272138 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.099100 | 0.255016 | 0.263417 | — | — | — |
| ip_tcp.test | RUN | 0.972789 | 8.035285 | 6.560072 | 0.001808 | 0.002480 | 0.001913 |
| ip_tcp_select.test | RUN | 0.946312 | 8.433682 | 6.364114 | 0.001630 | 0.002511 | 0.002165 |
| ip_udp.test | RUN | 0.671356 | 5.786513 | 4.465367 | 0.001690 | 0.001936 | 0.001589 |
| ip_udp_select.test | RUN | 0.685871 | 5.875613 | 4.364647 | 0.001438 | 0.001840 | 0.001854 |
| ip_unicast.test | RUN | 0.367181 | 2.448125 | 2.090558 | 0.001550 | 0.001908 | 0.001648 |
| ip_unicast_select.test | RUN | 0.379765 | 2.458654 | 2.048032 | 0.001506 | 0.001792 | 0.001620 |
| ip_v6_only.test | RUN | 0.364175 | 2.551090 | 2.206171 | 0.001482 | 0.001883 | 0.001577 |
| ip_v6_only_select.test | RUN | 0.379353 | 2.660339 | 2.182997 | 0.001347 | 0.001660 | 0.001786 |
| is_read_buffered.test | RUN | 0.250919 | 0.805561 | 1.152327 | 0.001247 | 0.001704 | 0.001659 |
| is_read_buffered_select.test | RUN | 0.253789 | 0.796517 | 1.176317 | 0.001198 | 0.001725 | 0.001469 |
| is_write_buffered.test | RUN | 0.262410 | 0.807229 | 1.058643 | 0.001295 | 0.001622 | 0.001396 |
| is_write_buffered_select.test | RUN | 0.265492 | 0.782376 | 1.075578 | 0.001168 | 0.001666 | 0.001504 |
| local_basic_endpoint.test | LINK | 0.125513 | 0.437154 | 0.549947 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.132058 | 0.434578 | 0.548115 | — | — | — |
| local_connect_pair.test | LINK | 0.334226 | 2.481094 | 1.913626 | — | — | — |
| local_connect_pair_select.test | LINK | 0.334936 | 2.509534 | 1.883939 | — | — | — |
| local_datagram_protocol.test | LINK | 0.447466 | 3.287852 | 2.734733 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.457802 | 3.326541 | 2.643674 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.456361 | 3.241605 | 2.733087 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.450908 | 3.348417 | 2.697743 | — | — | — |
| local_stream_protocol.test | LINK | 0.436211 | 3.149302 | 2.585095 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.437870 | 3.222021 | 2.561614 | — | — | — |
| placeholders.test | LINK | 0.085579 | 0.233359 | 0.277571 | — | — | — |
| placeholders_select.test | LINK | 0.084795 | 0.232390 | 0.274477 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.223013 | 0.683694 | 0.801469 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.232370 | 0.700972 | 0.962071 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.233040 | 0.676922 | 0.778828 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.238262 | 0.690892 | 0.936974 | — | — | — |
| posix_descriptor_base.test | LINK | 0.096628 | 0.251145 | 0.267495 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.091775 | 0.255422 | 0.254708 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.587954 | 3.196195 | 2.561504 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.643167 | 3.244807 | 2.599478 | — | — | — |
| prepend.test | RUN | 0.462938 | 2.614789 | 2.023596 | 0.001578 | 0.001880 | 0.001716 |
| prepend_select.test | RUN | 0.489370 | 2.639000 | 2.028297 | 0.001438 | 0.001774 | 0.001401 |
| random_access_file.test | LINK | 0.290207 | 0.580718 | 0.675955 | — | — | — |
| random_access_file_select.test | LINK | 0.296826 | 0.602564 | 0.847547 | — | — | — |
| read.test | RUN | 1.467872 | 16.240873 | 11.563227 | 0.002142 | 0.002582 | 0.002286 |
| read_select.test | RUN | 1.488313 | 16.215675 | 11.637006 | 0.002061 | 0.002301 | 0.002058 |
| read_at.test | RUN | 1.475419 | 23.711602 | 15.520090 | 0.002865 | 0.002637 | 0.002305 |
| read_at_select.test | RUN | 1.474495 | 23.533219 | 15.679784 | 0.002284 | 0.002543 | 0.002227 |
| read_until.test | RUN | 0.802018 | 6.041772 | 4.488797 | 0.001742 | 0.002066 | 0.001596 |
| read_until_select.test | RUN | 0.803544 | 6.098618 | 4.565594 | 0.001626 | 0.002064 | 0.001862 |
| readable_pipe.test | LINK | 0.510153 | 2.599047 | 1.950148 | — | — | — |
| readable_pipe_select.test | LINK | 0.538614 | 2.722489 | 2.094381 | — | — | — |
| recycling_allocator.test | RUN | 0.153420 | 0.373078 | 0.396308 | 0.001750 | 0.001575 | 0.001581 |
| recycling_allocator_select.test | RUN | 0.151728 | 0.380338 | 0.392915 | 0.001484 | 0.001676 | 0.001516 |
| redirect_disposition.test | LINK | 0.651163 | 3.614316 | 3.091633 | — | — | — |
| redirect_disposition_select.test | LINK | 0.665130 | 3.652073 | 3.070101 | — | — | — |
| redirect_error.test | LINK | 0.593438 | 3.095675 | 2.724925 | — | — | — |
| redirect_error_select.test | LINK | 0.607260 | 3.068945 | 2.673128 | — | — | — |
| registered_buffer.test | LINK | 0.159839 | 0.307485 | 0.378109 | — | — | — |
| registered_buffer_select.test | LINK | 0.164150 | 0.302704 | 0.384412 | — | — | — |
| signal_set.test | RUN | 0.502155 | 2.530942 | 1.889401 | 0.001947 | 0.001814 | 0.001583 |
| signal_set_select.test | RUN | 0.538064 | 2.633450 | 2.055762 | 0.001556 | 0.001834 | 0.001654 |
| signal_set_base.test | LINK | 0.128459 | 0.242049 | 0.252648 | — | — | — |
| signal_set_base_select.test | LINK | 0.129438 | 0.246327 | 0.258147 | — | — | — |
| socket_base.test | RUN | 0.672098 | 3.946791 | 2.800349 | 0.001861 | 0.001966 | 0.001562 |
| socket_base_select.test | RUN | 0.675650 | 3.813803 | 2.824762 | 0.001803 | 0.001993 | 0.001646 |
| spawn.test | RUN | 1.055259 | 6.092231 | 5.067818 | 0.001940 | 0.002116 | 0.001891 |
| spawn_select.test | RUN | 1.063501 | 6.110887 | 5.011082 | 0.001992 | 0.002046 | 0.001928 |
| static_thread_pool.test | RUN | 0.273570 | 0.588180 | 0.642538 | 0.001449 | 0.001696 | 0.001561 |
| static_thread_pool_select.test | RUN | 0.282552 | 0.630467 | 0.814187 | 0.001585 | 0.001591 | 0.001516 |
| steady_timer.test | LINK | 0.310543 | 0.672394 | 0.923085 | — | — | — |
| steady_timer_select.test | LINK | 0.315352 | 0.698198 | 0.955576 | — | — | — |
| strand.test | RUN | 0.638481 | 3.391329 | 2.947833 | 0.002307 | 0.002692 | 0.002286 |
| strand_select.test | RUN | 0.657426 | 3.376523 | 2.918510 | 0.001925 | 0.001996 | 0.002165 |
| stream_file.test | LINK | 0.291763 | 0.605165 | 0.679510 | — | — | — |
| stream_file_select.test | LINK | 0.308457 | 0.656635 | 0.875119 | — | — | — |
| streambuf.test | RUN | 0.183506 | 0.424808 | 0.499683 | 0.001492 | 0.001386 | 0.001541 |
| streambuf_select.test | RUN | 0.171809 | 0.346351 | 0.349607 | 0.001248 | 0.001340 | 0.001117 |
| system_timer.test | LINK | 0.494677 | 2.360997 | 1.684867 | — | — | — |
| system_timer_select.test | LINK | 0.463915 | 2.326553 | 1.642324 | — | — | — |
| system_context.test | LINK | 0.231306 | 0.441754 | 0.405699 | — | — | — |
| system_context_select.test | LINK | 0.207762 | 0.416098 | 0.509679 | — | — | — |
| system_executor.test | LINK | 0.257072 | 1.284112 | 0.863949 | — | — | — |
| system_executor_select.test | LINK | 0.269231 | 1.265117 | 0.919655 | — | — | — |
| this_coro.test | LINK | 0.078045 | 0.154961 | 0.164825 | — | — | — |
| this_coro_select.test | LINK | 0.080588 | 0.146165 | 0.163758 | — | — | — |
| thread_pool.test | RUN | 0.306943 | 1.582859 | 1.047615 | 0.002292 | 0.002382 | 0.002071 |
| thread_pool_select.test | RUN | 0.320178 | 1.622124 | 1.121072 | 0.002406 | 0.002392 | 0.002041 |
| time_traits.test | LINK | 0.174071 | 0.318080 | 0.322287 | — | — | — |
| time_traits_select.test | LINK | 0.175735 | 0.314144 | 0.325655 | — | — | — |
| ts_buffer.test | LINK | 0.165359 | 0.345569 | 0.337997 | — | — | — |
| ts_buffer_select.test | LINK | 0.167381 | 0.353379 | 0.340239 | — | — | — |
| ts_executor.test | LINK | 0.228794 | 0.544603 | 0.531959 | — | — | — |
| ts_executor_select.test | LINK | 0.254305 | 0.702025 | 0.628036 | — | — | — |
| ts_internet.test | LINK | 0.253886 | 0.753919 | 0.637844 | — | — | — |
| ts_internet_select.test | LINK | 0.266809 | 0.750144 | 0.665596 | — | — | — |
| ts_io_context.test | LINK | 0.204807 | 0.572606 | 0.395819 | — | — | — |
| ts_io_context_select.test | LINK | 0.216617 | 0.608926 | 0.543245 | — | — | — |
| ts_net.test | LINK | 0.301134 | 0.908677 | 1.246219 | — | — | — |
| ts_net_select.test | LINK | 0.313856 | 0.949492 | 1.330101 | — | — | — |
| ts_netfwd.test | LINK | 0.295248 | 0.927574 | 1.307662 | — | — | — |
| ts_netfwd_select.test | LINK | 0.303527 | 0.938122 | 1.330080 | — | — | — |
| ts_socket.test | LINK | 0.249053 | 0.702144 | 0.969133 | — | — | — |
| ts_socket_select.test | LINK | 0.255276 | 0.704207 | 1.022798 | — | — | — |
| ts_timer.test | LINK | 0.223263 | 0.612196 | 0.869912 | — | — | — |
| ts_timer_select.test | LINK | 0.221709 | 0.632362 | 0.919222 | — | — | — |
| use_awaitable.test | LINK | 0.078793 | 0.209148 | 0.252489 | — | — | — |
| use_awaitable_select.test | LINK | 0.077255 | 0.200769 | 0.258098 | — | — | — |
| wait_traits.test | LINK | 0.079797 | 0.210664 | 0.245364 | — | — | — |
| wait_traits_select.test | LINK | 0.111927 | 0.205678 | 0.266254 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.084556 | 0.204752 | 0.256846 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.076400 | 0.232134 | 0.259524 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.078326 | 0.253982 | 0.255305 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.077306 | 0.206297 | 0.259292 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.077426 | 0.204783 | 0.247838 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.077974 | 0.207029 | 0.260746 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.078749 | 0.206347 | 0.248870 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.077909 | 0.205572 | 0.254032 | — | — | — |
| windows_object_handle.test | LINK | 0.212078 | 0.578407 | 0.660419 | — | — | — |
| windows_object_handle_select.test | LINK | 0.220789 | 0.610677 | 0.824236 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.218177 | 0.613715 | 0.726583 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.220493 | 0.645334 | 0.893831 | — | — | — |
| windows_random_access_handle.test | LINK | 0.212471 | 0.572006 | 0.653132 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.209171 | 0.600968 | 0.832231 | — | — | — |
| windows_stream_handle.test | LINK | 0.208325 | 0.571680 | 0.657861 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.207676 | 0.599175 | 0.823528 | — | — | — |
| writable_pipe.test | LINK | 0.470865 | 2.458200 | 2.037462 | — | — | — |
| writable_pipe_select.test | LINK | 0.531067 | 2.576862 | 2.206560 | — | — | — |
| write.test | RUN | 1.491962 | 12.659137 | 11.627655 | 0.002399 | 0.002210 | 0.002092 |
| write_select.test | RUN | 1.505505 | 12.707997 | 11.569301 | 0.002116 | 0.002248 | 0.002172 |
| write_at.test | RUN | 1.524123 | 18.060724 | 14.743342 | 0.002266 | 0.002172 | 0.001978 |
| write_at_select.test | RUN | 1.529915 | 17.903470 | 14.889672 | 0.002532 | 0.002340 | 0.002358 |
| any_executor.test | RUN | 0.614615 | 5.934392 | 4.453052 | 0.002098 | 0.002259 | 0.002119 |
| blocking.test | RUN | 1.337906 | 7.543179 | 9.322210 | 0.006175 | 0.005773 | 0.006449 |
| blocking_adaptation.test | RUN | 0.686295 | 3.159027 | 4.297702 | 0.003237 | 0.003517 | 0.003483 |
| context_as.test | RUN | 0.408164 | 2.195940 | 1.463648 | 0.001677 | 0.001757 | 0.002504 |
| executor.test | RUN | 0.118126 | 0.212160 | 0.280209 | 0.001701 | 0.001609 | 0.001461 |
| inline_exception_handling.test | RUN | 1.379813 | 6.686727 | 8.984254 | 0.005321 | 0.004457 | 0.004397 |
| invocable_archetype.test | RUN | 0.114932 | 0.223126 | 0.248203 | 0.001686 | 0.001579 | 0.001636 |
| mapping.test | RUN | 1.311007 | 6.867443 | 9.343245 | 0.004509 | 0.004480 | 0.004614 |
| outstanding_work.test | RUN | 0.645549 | 2.782660 | 4.044203 | 0.003578 | 0.003381 | 0.003444 |
| prefer_only.test | RUN | 0.214353 | 1.061867 | 0.904897 | 0.001785 | 0.001466 | 0.001542 |
| relationship.test | RUN | 0.606636 | 2.418526 | 4.060105 | 0.002609 | 0.002478 | 0.002442 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.982× | 0.987×, 0.976× | 1.039× |
| clang | 0.973× | 0.962×, 0.985× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001405s | 0.001332s | 0.001451s | byte equality observed |
| any_completion_executor_select.test | 6 | 0.001386s | 0.001321s | 0.001438s | byte equality observed |
| any_completion_handler.test | 10 | 0.001111s | 0.001040s | 0.001142s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001114s | 0.001074s | 0.001144s | byte equality observed |
| any_io_executor.test | 6 | 0.001383s | 0.001289s | 0.001413s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001393s | 0.001327s | 0.001408s | byte equality observed |
| append.test | 10 | 0.001088s | 0.001059s | 0.001071s | byte equality observed |
| append_select.test | 10 | 0.001081s | 0.001022s | 0.001034s | byte equality observed |
| as_tuple.test | 6 | 0.001163s | 0.001121s | 0.001116s | byte equality observed |
| as_tuple_select.test | 8 | 0.001106s | 0.001018s | 0.001047s | byte equality observed |
| bind_allocator.test | 1 | 0.001556s | 0.001480s | 0.001563s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001268s | 0.001175s | 0.001242s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001071s | 0.001012s | 0.001094s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000949s | 0.000929s | 0.000941s | byte equality observed |
| bind_executor.test | 1 | 0.001543s | 0.001429s | 0.001622s | byte equality observed |
| bind_executor_select.test | 1 | 0.001902s | 0.001543s | 0.001941s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000978s | 0.000926s | 0.000932s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000956s | 0.000926s | 0.000952s | byte equality observed |
| buffer.test | 10 | 0.000915s | 0.000886s | 0.000904s | byte equality observed |
| buffer_select.test | 10 | 0.000897s | 0.000883s | 0.000889s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001209s | 0.001149s | 0.001186s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001158s | 0.001137s | 0.001131s | byte equality observed |
| buffered_stream.test | 10 | 0.001179s | 0.001139s | 0.001174s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001148s | 0.001112s | 0.001126s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001191s | 0.001140s | 0.001162s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001163s | 0.001132s | 0.001126s | byte equality observed |
| buffers_iterator.test | 10 | 0.000889s | 0.000874s | 0.000883s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000842s | 0.000820s | 0.000848s | byte equality observed |
| cancel_after.test | 1 | 0.002952s | 0.002319s | 0.003445s | byte equality observed |
| cancel_after_select.test | 1 | 0.002431s | 0.002017s | 0.002805s | byte equality observed |
| cancel_at.test | 1 | 0.003228s | 0.002477s | 0.003656s | byte equality observed |
| cancel_at_select.test | 1 | 0.003199s | 0.002253s | 0.003711s | byte equality observed |
| co_composed.test | 10 | 0.000902s | 0.000866s | 0.000894s | byte equality observed |
| co_composed_select.test | 10 | 0.000860s | 0.000842s | 0.000860s | byte equality observed |
| compose.test | 1 | 0.001537s | 0.001319s | 0.001636s | byte equality observed |
| compose_select.test | 1 | 0.001260s | 0.001105s | 0.001307s | byte equality observed |
| composed.test | 1 | 0.001925s | 0.001529s | 0.001983s | byte equality observed |
| composed_select.test | 1 | 0.001486s | 0.001090s | 0.001643s | byte equality observed |
| config.test | 10 | 0.000964s | 0.000941s | 0.000960s | byte equality observed |
| config_select.test | 10 | 0.000959s | 0.000918s | 0.000962s | byte equality observed |
| connect_pipe.test | 10 | 0.000989s | 0.000955s | 0.000963s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000955s | 0.000956s | 0.000952s | byte equality observed |
| consign.test | 10 | 0.000966s | 0.000927s | 0.000946s | byte equality observed |
| consign_select.test | 10 | 0.000927s | 0.000894s | 0.000889s | byte equality observed |
| deadline_timer.test | 1 | 0.002235s | 0.002013s | 0.002203s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001927s | 0.001864s | 0.002149s | byte equality observed |
| deferred.test | 10 | 0.000883s | 0.000856s | 0.000866s | byte equality observed |
| deferred_select.test | 10 | 0.000840s | 0.000805s | 0.000824s | byte equality observed |
| disposition.test | 10 | 0.000892s | 0.000858s | 0.000858s | byte equality observed |
| disposition_select.test | 10 | 0.000889s | 0.000849s | 0.000868s | byte equality observed |
| error.test | 10 | 0.000861s | 0.000853s | 0.000846s | byte equality observed |
| error_select.test | 10 | 0.000862s | 0.000844s | 0.000857s | byte equality observed |
| inline_executor.test | 10 | 0.000874s | 0.000854s | 0.000866s | byte equality observed |
| inline_executor_select.test | 10 | 0.000870s | 0.000851s | 0.000865s | byte equality observed |
| inline_or_executor.test | 10 | 0.000879s | 0.000856s | 0.000861s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000860s | 0.000863s | 0.000867s | byte equality observed |
| io_context.test | 1 | 0.001738s | 0.001671s | 0.001824s | byte equality observed |
| io_context_select.test | 1 | 0.002091s | 0.001850s | 0.002083s | byte equality observed |
| io_context_strand.test | 1 | 0.002129s | 0.002112s | 0.002191s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001844s | 0.001632s | 0.001922s | byte equality observed |
| ip_host_name.test | 10 | 0.000886s | 0.000901s | 0.000895s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000838s | 0.000847s | 0.000844s | byte equality observed |
| ip_icmp.test | 10 | 0.000853s | 0.000877s | 0.000862s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000859s | 0.000878s | 0.000855s | byte equality observed |
| ip_multicast.test | 10 | 0.000932s | 0.000939s | 0.000937s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000915s | 0.000914s | 0.000913s | byte equality observed |
| ip_tcp.test | 10 | 0.001284s | 0.001278s | 0.001291s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001229s | 0.001203s | 0.001221s | byte equality observed |
| ip_udp.test | 10 | 0.000972s | 0.000928s | 0.000955s | byte equality observed |
| ip_udp_select.test | 10 | 0.000963s | 0.000916s | 0.000937s | byte equality observed |
| ip_unicast.test | 10 | 0.000929s | 0.000895s | 0.000910s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000901s | 0.000883s | 0.000896s | byte equality observed |
| ip_v6_only.test | 10 | 0.000928s | 0.000898s | 0.000907s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000909s | 0.000883s | 0.000892s | byte equality observed |
| is_read_buffered.test | 10 | 0.000840s | 0.000848s | 0.000832s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000842s | 0.000889s | 0.000838s | byte equality observed |
| is_write_buffered.test | 10 | 0.000837s | 0.000894s | 0.000846s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000867s | 0.000896s | 0.000884s | byte equality observed |
| prepend.test | 10 | 0.000934s | 0.000927s | 0.000943s | byte equality observed |
| prepend_select.test | 10 | 0.000922s | 0.000914s | 0.000912s | byte equality observed |
| read.test | 10 | 0.001285s | 0.001248s | 0.001241s | byte equality observed |
| read_at.test | 10 | 0.001481s | 0.001497s | 0.001362s | byte equality observed |
| read_at_select.test | 10 | 0.001503s | 0.001496s | 0.001388s | byte equality observed |
| read_select.test | 10 | 0.001290s | 0.001239s | 0.001248s | byte equality observed |
| read_until.test | 10 | 0.001050s | 0.001030s | 0.001034s | byte equality observed |
| read_until_select.test | 10 | 0.001057s | 0.001028s | 0.001019s | byte equality observed |
| recycling_allocator.test | 10 | 0.000877s | 0.000885s | 0.000901s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000901s | 0.000869s | 0.000879s | byte equality observed |
| signal_set.test | 10 | 0.000916s | 0.000897s | 0.000915s | byte equality observed |
| signal_set_select.test | 10 | 0.000918s | 0.000895s | 0.000919s | byte equality observed |
| socket_base.test | 10 | 0.001015s | 0.000992s | 0.001016s | byte equality observed |
| socket_base_select.test | 10 | 0.000990s | 0.000954s | 0.000977s | byte equality observed |
| spawn.test | 10 | 0.001088s | 0.001066s | 0.001084s | byte equality observed |
| spawn_select.test | 10 | 0.001079s | 0.001047s | 0.001113s | byte equality observed |
| static_thread_pool.test | 10 | 0.000885s | 0.000862s | 0.000903s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000875s | 0.000838s | 0.000853s | byte equality observed |
| strand.test | 1 | 0.001780s | 0.001621s | 0.001752s | byte equality observed |
| strand_select.test | 1 | 0.001467s | 0.001371s | 0.001523s | byte equality observed |
| streambuf.test | 10 | 0.000934s | 0.000940s | 0.000899s | byte equality observed |
| streambuf_select.test | 10 | 0.000908s | 0.000895s | 0.000895s | byte equality observed |
| thread_pool.test | 10 | 0.001882s | 0.001836s | 0.001904s | byte equality observed |
| thread_pool_select.test | 10 | 0.001861s | 0.001819s | 0.001912s | byte equality observed |
| write.test | 10 | 0.001344s | 0.001296s | 0.001331s | byte equality observed |
| write_at.test | 10 | 0.001389s | 0.001382s | 0.001392s | byte equality observed |
| write_at_select.test | 10 | 0.001396s | 0.001381s | 0.001387s | byte equality observed |
| write_select.test | 10 | 0.001298s | 0.001262s | 0.001325s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398833).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
