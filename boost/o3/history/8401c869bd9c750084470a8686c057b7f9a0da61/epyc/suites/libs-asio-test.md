# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.618361 | 3.721212 | 3.529637 | 0.002498 | 0.002590 | 0.002309 |
| any_completion_executor_select.test | RUN | 0.635407 | 3.725561 | 3.767037 | 0.002368 | 0.002270 | 0.002214 |
| any_completion_handler.test | RUN | 0.721568 | 3.271811 | 3.206505 | 0.001981 | 0.001929 | 0.001934 |
| any_completion_handler_select.test | RUN | 0.729945 | 3.473560 | 3.448067 | 0.001980 | 0.002119 | 0.001932 |
| any_io_executor.test | RUN | 0.665775 | 3.919159 | 3.896093 | 0.002175 | 0.002258 | 0.002480 |
| any_io_executor_select.test | RUN | 0.680469 | 3.973258 | 4.075528 | 0.002416 | 0.002687 | 0.002225 |
| append.test | RUN | 0.626777 | 3.180447 | 2.882324 | 0.001883 | 0.001931 | 0.002113 |
| append_select.test | RUN | 0.618266 | 3.179178 | 2.931540 | 0.001893 | 0.001761 | 0.001926 |
| as_tuple.test | RUN | 0.775225 | 3.818327 | 4.057288 | 0.001832 | 0.002026 | 0.001944 |
| as_tuple_select.test | RUN | 0.790056 | 3.765147 | 4.037027 | 0.001917 | 0.001860 | 0.001672 |
| associated_allocator.test | LINK | 0.171263 | 0.352520 | 0.455984 | — | — | — |
| associated_allocator_select.test | LINK | 0.174583 | 0.343711 | 0.478566 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.183911 | 0.387108 | 0.506208 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.186488 | 0.374903 | 0.506706 | — | — | — |
| associated_executor.test | LINK | 0.269391 | 0.633818 | 0.791010 | — | — | — |
| associated_executor_select.test | LINK | 0.263507 | 0.646168 | 0.790239 | — | — | — |
| associated_immediate_executor.test | LINK | 0.240507 | 0.589220 | 0.717160 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.249963 | 0.590685 | 0.697009 | — | — | — |
| associator.test | LINK | 0.139015 | 0.286254 | 0.390206 | — | — | — |
| associator_select.test | LINK | 0.138586 | 0.283779 | 0.379646 | — | — | — |
| awaitable.test | LINK | 0.139503 | 0.286800 | 0.381178 | — | — | — |
| awaitable_select.test | LINK | 0.141293 | 0.277389 | 0.381325 | — | — | — |
| basic_datagram_socket.test | LINK | 0.405343 | 0.878880 | 1.433352 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.430014 | 0.903035 | 1.466867 | — | — | — |
| basic_deadline_timer.test | LINK | 0.504862 | 1.043984 | 1.607197 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.512106 | 1.071794 | 1.643828 | — | — | — |
| basic_file.test | LINK | 0.145053 | 0.282829 | 0.379843 | — | — | — |
| basic_file_select.test | LINK | 0.142749 | 0.282681 | 0.381455 | — | — | — |
| basic_random_access_file.test | LINK | 0.144129 | 0.285096 | 0.386914 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.138252 | 0.279021 | 0.368290 | — | — | — |
| basic_raw_socket.test | LINK | 0.408510 | 0.893296 | 1.426897 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.441816 | 0.893599 | 1.467302 | — | — | — |
| basic_readable_pipe.test | LINK | 0.417336 | 0.862682 | 1.237086 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.412832 | 0.899625 | 1.508474 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.413981 | 0.888443 | 1.418010 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.420133 | 0.895757 | 1.485107 | — | — | — |
| basic_signal_set.test | LINK | 0.381051 | 0.831783 | 1.133281 | — | — | — |
| basic_signal_set_select.test | LINK | 0.408065 | 0.874208 | 1.427606 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.416315 | 0.883888 | 1.425091 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.428534 | 0.931479 | 1.447412 | — | — | — |
| basic_stream_file.test | LINK | 0.138907 | 0.285681 | 0.397934 | — | — | — |
| basic_stream_file_select.test | LINK | 0.141195 | 0.297110 | 0.398520 | — | — | — |
| basic_stream_socket.test | LINK | 0.423518 | 0.918991 | 1.441296 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.426110 | 0.918714 | 1.447310 | — | — | — |
| basic_streambuf.test | LINK | 0.213069 | 0.430485 | 0.582735 | — | — | — |
| basic_streambuf_select.test | LINK | 0.208505 | 0.424459 | 0.583856 | — | — | — |
| basic_waitable_timer.test | LINK | 0.391952 | 0.844696 | 1.362492 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.399124 | 0.866587 | 1.392721 | — | — | — |
| basic_writable_pipe.test | LINK | 0.390729 | 0.873588 | 1.239220 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.419884 | 0.930829 | 1.513907 | — | — | — |
| bind_allocator.test | RUN | 0.648501 | 3.238153 | 3.185712 | 0.002221 | 0.002388 | 0.002256 |
| bind_allocator_select.test | RUN | 0.663431 | 3.301204 | 3.181787 | 0.001660 | 0.002262 | 0.002073 |
| bind_cancellation_slot.test | RUN | 0.668403 | 3.284469 | 3.251186 | 0.001583 | 0.001497 | 0.001464 |
| bind_cancellation_slot_select.test | RUN | 0.680528 | 3.295692 | 3.036665 | 0.001518 | 0.001602 | 0.001414 |
| bind_executor.test | RUN | 0.454150 | 2.247083 | 1.953976 | 0.002133 | 0.002236 | 0.002044 |
| bind_executor_select.test | RUN | 0.451475 | 2.308886 | 1.911011 | 0.001904 | 0.001943 | 0.001909 |
| bind_immediate_executor.test | RUN | 0.339918 | 1.879026 | 1.234174 | 0.001510 | 0.001545 | 0.001343 |
| bind_immediate_executor_select.test | RUN | 0.359271 | 1.856924 | 1.361027 | 0.001370 | 0.001397 | 0.001606 |
| buffer.test | RUN | 0.211909 | 0.784076 | 0.783377 | 0.001459 | 0.001379 | 0.001352 |
| buffer_select.test | RUN | 0.207767 | 0.802415 | 0.784431 | 0.001298 | 0.001397 | 0.001296 |
| buffer_registration.test | LINK | 0.169127 | 0.411598 | 0.450525 | — | — | — |
| buffer_registration_select.test | LINK | 0.168888 | 0.438962 | 0.448977 | — | — | — |
| buffered_read_stream.test | RUN | 0.731778 | 5.047089 | 4.597110 | 0.001796 | 0.002272 | 0.002318 |
| buffered_read_stream_select.test | RUN | 0.730409 | 5.230998 | 4.464600 | 0.001639 | 0.002324 | 0.001860 |
| buffered_stream.test | RUN | 1.103676 | 7.757228 | 7.687337 | 0.002409 | 0.002418 | 0.002388 |
| buffered_stream_select.test | RUN | 1.129853 | 7.791119 | 7.461596 | 0.002168 | 0.002389 | 0.002280 |
| buffered_write_stream.test | RUN | 1.211469 | 6.665584 | 6.598340 | 0.002050 | 0.002455 | 0.002298 |
| buffered_write_stream_select.test | RUN | 1.196541 | 6.803064 | 6.318112 | 0.002090 | 0.002493 | 0.002376 |
| buffers_iterator.test | RUN | 0.399014 | 0.652643 | 1.081920 | 0.001598 | 0.001777 | 0.001711 |
| buffers_iterator_select.test | RUN | 0.393720 | 0.656423 | 1.071145 | 0.001599 | 0.001834 | 0.001754 |
| cancel_after.test | RUN | 0.969319 | 5.218198 | 4.845775 | 0.003750 | 0.004043 | 0.003908 |
| cancel_after_select.test | RUN | 0.968590 | 5.250677 | 4.810929 | 0.003480 | 0.003811 | 0.004098 |
| cancel_at.test | RUN | 0.965363 | 4.624798 | 4.613749 | 0.003444 | 0.003548 | 0.003529 |
| cancel_at_select.test | RUN | 0.973094 | 4.548350 | 4.621813 | 0.003453 | 0.003215 | 0.003220 |
| cancellation_signal.test | LINK | 0.170128 | 0.240435 | 0.285066 | — | — | — |
| cancellation_signal_select.test | LINK | 0.170901 | 0.244030 | 0.373771 | — | — | — |
| cancellation_state.test | LINK | 0.183514 | 0.244791 | 0.325448 | — | — | — |
| cancellation_state_select.test | LINK | 0.185065 | 0.239936 | 0.474569 | — | — | — |
| cancellation_type.test | LINK | 0.136291 | 0.194462 | 0.374639 | — | — | — |
| cancellation_type_select.test | LINK | 0.136995 | 0.192776 | 0.356019 | — | — | — |
| co_composed.test | RUN | 0.137327 | 0.196081 | 0.371299 | 0.001767 | 0.001362 | 0.001580 |
| co_composed_select.test | RUN | 0.137065 | 0.193834 | 0.365785 | 0.001730 | 0.001869 | 0.001670 |
| co_spawn.test | LINK | 0.136936 | 0.232667 | 0.368705 | — | — | — |
| co_spawn_select.test | LINK | 0.141602 | 0.233883 | 0.363123 | — | — | — |
| completion_condition.test | LINK | 0.179232 | 0.398201 | 0.490312 | — | — | — |
| completion_condition_select.test | LINK | 0.178177 | 0.422800 | 0.506571 | — | — | — |
| compose.test | RUN | 0.792497 | 4.069990 | 3.991573 | 0.002325 | 0.002889 | 0.002126 |
| compose_select.test | RUN | 0.793466 | 4.053797 | 3.958680 | 0.001813 | 0.002371 | 0.002184 |
| composed.test | RUN | 0.802786 | 4.059720 | 3.941010 | 0.002030 | 0.002173 | 0.002011 |
| composed_select.test | RUN | 0.788025 | 3.951601 | 3.810222 | 0.001916 | 0.002125 | 0.001806 |
| config.test | RUN | 0.402408 | 2.619660 | 1.759144 | 0.001900 | 0.001958 | 0.001892 |
| config_select.test | RUN | 0.453393 | 2.684198 | 2.067418 | 0.001892 | 0.001837 | 0.001922 |
| connect.test | LINK | 1.280945 | 8.522091 | 8.294041 | — | — | — |
| connect_select.test | LINK | 1.297922 | 8.613094 | 8.395936 | — | — | — |
| connect_pipe.test | RUN | 0.692194 | 3.221473 | 3.099103 | 0.001945 | 0.001928 | 0.001928 |
| connect_pipe_select.test | RUN | 0.708034 | 3.397309 | 3.294595 | 0.001827 | 0.002010 | 0.001956 |
| consign.test | RUN | 0.608734 | 3.232717 | 2.784799 | 0.001930 | 0.002034 | 0.001941 |
| consign_select.test | RUN | 0.623686 | 3.293974 | 2.720454 | 0.001934 | 0.002081 | 0.001586 |
| coroutine.test | LINK | 0.142992 | 0.332908 | 0.390048 | — | — | — |
| coroutine_select.test | LINK | 0.147732 | 0.337147 | 0.402100 | — | — | — |
| deadline_timer.test | RUN | 0.888308 | 4.218803 | 4.174148 | 0.003308 | 0.003361 | 0.003315 |
| deadline_timer_select.test | RUN | 0.883989 | 4.163711 | 4.149986 | 0.003029 | 0.003054 | 0.002370 |
| deferred.test | RUN | 0.162814 | 0.313558 | 0.397146 | 0.001806 | 0.001932 | 0.001938 |
| deferred_select.test | RUN | 0.157269 | 0.306037 | 0.383618 | 0.001866 | 0.001889 | 0.001931 |
| detached.test | LINK | 0.177121 | 0.341807 | 0.448286 | — | — | — |
| detached_select.test | LINK | 0.176568 | 0.347385 | 0.443981 | — | — | — |
| disposition.test | RUN | 0.169532 | 0.785666 | 0.815510 | 0.001384 | 0.001867 | 0.001759 |
| disposition_select.test | RUN | 0.159799 | 0.787522 | 0.806049 | 0.001340 | 0.002066 | 0.002024 |
| error.test | RUN | 0.148989 | 0.772471 | 0.775056 | 0.001430 | 0.001902 | 0.001826 |
| error_select.test | RUN | 0.155090 | 0.762613 | 0.748125 | 0.001464 | 0.001955 | 0.001783 |
| file_base.test | LINK | 0.188357 | 0.647579 | 0.820883 | — | — | — |
| file_base_select.test | LINK | 0.191402 | 0.659255 | 0.726184 | — | — | — |
| fwd_first.test | LINK | 0.420154 | 0.961318 | 1.386830 | — | — | — |
| fwd_last.test | LINK | 0.433707 | 0.935285 | 1.401247 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.160010 | 0.378305 | 0.502597 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.159950 | 0.391679 | 0.503842 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.631707 | 3.375693 | 2.709133 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.645079 | 3.561329 | 2.721139 | — | — | — |
| generic_raw_protocol.test | LINK | 0.647541 | 3.375383 | 2.712884 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.635350 | 3.491856 | 2.706661 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.553210 | 2.832784 | 2.322344 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.544427 | 2.880091 | 2.345454 | — | — | — |
| generic_stream_protocol.test | LINK | 0.593072 | 3.039705 | 2.516023 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.585000 | 3.135938 | 2.531350 | — | — | — |
| high_resolution_timer.test | LINK | 0.287122 | 0.580382 | 0.785871 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.294148 | 0.594052 | 0.808845 | — | — | — |
| immediate.test | LINK | 0.193266 | 0.436235 | 0.493881 | — | — | — |
| immediate_select.test | LINK | 0.185234 | 0.433862 | 0.489018 | — | — | — |
| inline_executor.test | RUN | 0.221443 | 0.681093 | 0.733526 | 0.001392 | 0.001494 | 0.001337 |
| inline_executor_select.test | RUN | 0.223340 | 0.684281 | 0.739681 | 0.001263 | 0.001498 | 0.001324 |
| inline_or_executor.test | RUN | 0.350996 | 1.953521 | 1.383620 | 0.001392 | 0.001512 | 0.001378 |
| inline_or_executor_select.test | RUN | 0.369069 | 2.047297 | 1.520943 | 0.001337 | 0.001495 | 0.001351 |
| io_context.test | RUN | 0.512160 | 2.988660 | 2.403137 | 0.002354 | 0.002372 | 0.002245 |
| io_context_select.test | RUN | 0.514864 | 2.944135 | 2.404825 | 0.002088 | 0.002157 | 0.002062 |
| io_context_strand.test | RUN | 0.491733 | 2.557013 | 2.117494 | 0.002115 | 0.002439 | 0.002327 |
| io_context_strand_select.test | RUN | 0.509724 | 2.547383 | 2.091403 | 0.002215 | 0.002251 | 0.002089 |
| ip_address.test | LINK | 0.196592 | 0.600026 | 0.619375 | — | — | — |
| ip_address_select.test | LINK | 0.191633 | 0.600912 | 0.608338 | — | — | — |
| ip_address_v4.test | LINK | 0.194889 | 0.640603 | 0.666681 | — | — | — |
| ip_address_v4_select.test | LINK | 0.193472 | 0.644590 | 0.664578 | — | — | — |
| ip_address_v6.test | LINK | 0.229492 | 0.832539 | 0.816684 | — | — | — |
| ip_address_v6_select.test | LINK | 0.219914 | 0.842415 | 0.816555 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.173529 | 0.409624 | 0.527714 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.174638 | 0.413248 | 0.529768 | — | — | — |
| ip_basic_resolver.test | LINK | 0.272510 | 0.587937 | 1.086808 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.280505 | 0.611457 | 1.220190 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.097513 | 0.198516 | 0.400777 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.096680 | 0.198807 | 0.400944 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.172923 | 0.412213 | 0.922096 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.168741 | 0.412582 | 0.879396 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.168011 | 0.386230 | 0.850453 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.161270 | 0.384222 | 0.856018 | — | — | — |
| ip_host_name.test | RUN | 0.173193 | 0.513157 | 0.956157 | 0.001368 | 0.001389 | 0.001792 |
| ip_host_name_select.test | RUN | 0.172019 | 0.507317 | 0.955747 | 0.001162 | 0.001440 | 0.001664 |
| ip_icmp.test | RUN | 0.788437 | 6.534546 | 5.808376 | 0.001520 | 0.002022 | 0.001682 |
| ip_icmp_select.test | RUN | 0.776923 | 6.843230 | 5.768447 | 0.001428 | 0.002093 | 0.001814 |
| ip_multicast.test | RUN | 0.476838 | 3.449463 | 3.366520 | 0.001637 | 0.002092 | 0.001850 |
| ip_multicast_select.test | RUN | 0.479494 | 3.526354 | 3.326459 | 0.001499 | 0.002117 | 0.001914 |
| ip_resolver_query_base.test | LINK | 0.114595 | 0.327097 | 0.393668 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.111423 | 0.324293 | 0.405766 | — | — | — |
| ip_tcp.test | RUN | 1.159619 | 10.069380 | 8.971637 | 0.002206 | 0.002812 | 0.002500 |
| ip_tcp_select.test | RUN | 1.147910 | 10.432169 | 8.637771 | 0.001825 | 0.002618 | 0.002534 |
| ip_udp.test | RUN | 0.841600 | 7.195798 | 6.124048 | 0.001584 | 0.001978 | 0.002002 |
| ip_udp_select.test | RUN | 0.821731 | 7.387048 | 5.981131 | 0.001577 | 0.002092 | 0.001856 |
| ip_unicast.test | RUN | 0.428907 | 3.143906 | 2.878147 | 0.001506 | 0.002039 | 0.001903 |
| ip_unicast_select.test | RUN | 0.430763 | 3.198587 | 2.844243 | 0.001423 | 0.002105 | 0.001748 |
| ip_v6_only.test | RUN | 0.455168 | 3.255553 | 3.031638 | 0.001484 | 0.002145 | 0.001776 |
| ip_v6_only_select.test | RUN | 0.449836 | 3.399893 | 3.010647 | 0.001510 | 0.001858 | 0.001920 |
| is_read_buffered.test | RUN | 0.313380 | 1.015103 | 1.675150 | 0.001378 | 0.001925 | 0.001573 |
| is_read_buffered_select.test | RUN | 0.322094 | 1.071618 | 1.691842 | 0.001198 | 0.001829 | 0.001264 |
| is_write_buffered.test | RUN | 0.309392 | 1.017833 | 1.625178 | 0.001304 | 0.001931 | 0.001820 |
| is_write_buffered_select.test | RUN | 0.321866 | 1.059267 | 1.696464 | 0.001333 | 0.001966 | 0.001862 |
| local_basic_endpoint.test | LINK | 0.161328 | 0.570262 | 0.881205 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.166187 | 0.585361 | 0.889100 | — | — | — |
| local_connect_pair.test | LINK | 0.407627 | 3.190411 | 2.853701 | — | — | — |
| local_connect_pair_select.test | LINK | 0.417696 | 3.157230 | 2.798375 | — | — | — |
| local_datagram_protocol.test | LINK | 0.587994 | 4.125879 | 3.973651 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.617461 | 4.216997 | 3.821880 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.821894 | 4.119479 | 3.827986 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.835727 | 4.178007 | 3.826125 | — | — | — |
| local_stream_protocol.test | LINK | 0.785841 | 3.951351 | 3.681327 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.789998 | 3.968239 | 3.648107 | — | — | — |
| placeholders.test | LINK | 0.152848 | 0.322502 | 0.433625 | — | — | — |
| placeholders_select.test | LINK | 0.151411 | 0.306880 | 0.433318 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.393775 | 0.864217 | 1.201682 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.415635 | 0.907863 | 1.490327 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.399255 | 0.881916 | 1.231192 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.422584 | 0.902782 | 1.478977 | — | — | — |
| posix_descriptor_base.test | LINK | 0.170591 | 0.337704 | 0.429070 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.172592 | 0.317701 | 0.425410 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.798849 | 3.962315 | 3.664428 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.812902 | 4.002736 | 3.765592 | — | — | — |
| prepend.test | RUN | 0.605709 | 3.229421 | 2.948152 | 0.001704 | 0.001783 | 0.001878 |
| prepend_select.test | RUN | 0.619108 | 3.318354 | 2.912923 | 0.001503 | 0.001962 | 0.001840 |
| random_access_file.test | LINK | 0.373741 | 0.760307 | 0.974856 | — | — | — |
| random_access_file_select.test | LINK | 0.381809 | 0.826418 | 1.279251 | — | — | — |
| read.test | RUN | 1.878899 | 21.148608 | 16.454031 | 0.002546 | 0.002709 | 0.002309 |
| read_select.test | RUN | 1.878693 | 20.792691 | 16.834975 | 0.002504 | 0.002551 | 0.002495 |
| read_at.test | RUN | 1.882320 | 30.062132 | 22.630371 | 0.003031 | 0.003130 | 0.002785 |
| read_at_select.test | RUN | 1.906717 | 30.020754 | 22.755669 | 0.002961 | 0.003357 | 0.002742 |
| read_until.test | RUN | 0.971694 | 7.732097 | 5.887239 | 0.002178 | 0.002268 | 0.001992 |
| read_until_select.test | RUN | 1.025905 | 7.803618 | 6.173355 | 0.001834 | 0.001992 | 0.002126 |
| readable_pipe.test | LINK | 0.641125 | 3.326662 | 2.717422 | — | — | — |
| readable_pipe_select.test | LINK | 0.655689 | 3.526865 | 3.094311 | — | — | — |
| recycling_allocator.test | RUN | 0.201522 | 0.507702 | 0.622027 | 0.001741 | 0.001940 | 0.001779 |
| recycling_allocator_select.test | RUN | 0.202227 | 0.491036 | 0.623612 | 0.001811 | 0.001971 | 0.001762 |
| redirect_disposition.test | LINK | 0.830406 | 4.624069 | 4.352898 | — | — | — |
| redirect_disposition_select.test | LINK | 0.849572 | 4.591240 | 4.361574 | — | — | — |
| redirect_error.test | LINK | 0.742886 | 3.903373 | 3.792555 | — | — | — |
| redirect_error_select.test | LINK | 0.752882 | 3.915584 | 3.836894 | — | — | — |
| registered_buffer.test | LINK | 0.199464 | 0.407309 | 0.526253 | — | — | — |
| registered_buffer_select.test | LINK | 0.206108 | 0.406550 | 0.530706 | — | — | — |
| signal_set.test | RUN | 0.632747 | 3.255142 | 2.634199 | 0.001905 | 0.002103 | 0.001889 |
| signal_set_select.test | RUN | 0.657384 | 3.444908 | 2.933662 | 0.001970 | 0.001654 | 0.001833 |
| signal_set_base.test | LINK | 0.163621 | 0.326093 | 0.417235 | — | — | — |
| signal_set_base_select.test | LINK | 0.160763 | 0.332425 | 0.407892 | — | — | — |
| socket_base.test | RUN | 0.761083 | 5.489589 | 4.124264 | 0.002182 | 0.001858 | 0.002042 |
| socket_base_select.test | RUN | 0.790598 | 5.219349 | 4.102789 | 0.001867 | 0.002076 | 0.002054 |
| spawn.test | RUN | 1.283602 | 7.995619 | 6.838892 | 0.001975 | 0.002448 | 0.002170 |
| spawn_select.test | RUN | 1.264258 | 7.919393 | 6.848171 | 0.002167 | 0.002387 | 0.002066 |
| static_thread_pool.test | RUN | 0.367535 | 0.766014 | 0.956417 | 0.001814 | 0.001952 | 0.001776 |
| static_thread_pool_select.test | RUN | 0.379793 | 0.831864 | 1.251718 | 0.001800 | 0.001945 | 0.001740 |
| steady_timer.test | LINK | 0.400715 | 0.908998 | 1.352354 | — | — | — |
| steady_timer_select.test | LINK | 0.413109 | 0.920344 | 1.382319 | — | — | — |
| strand.test | RUN | 0.798636 | 4.561426 | 4.237899 | 0.002348 | 0.003108 | 0.002623 |
| strand_select.test | RUN | 0.816886 | 4.484925 | 4.091373 | 0.002608 | 0.002889 | 0.002776 |
| stream_file.test | LINK | 0.376455 | 0.826037 | 0.966464 | — | — | — |
| stream_file_select.test | LINK | 0.385998 | 0.881456 | 1.275032 | — | — | — |
| streambuf.test | RUN | 0.228435 | 0.649377 | 0.719675 | 0.001393 | 0.001544 | 0.001734 |
| streambuf_select.test | RUN | 0.188572 | 0.517137 | 0.716133 | 0.001494 | 0.001488 | 0.001792 |
| system_timer.test | LINK | 0.516542 | 2.954586 | 2.720996 | — | — | — |
| system_timer_select.test | LINK | 0.525396 | 2.900582 | 2.383748 | — | — | — |
| system_context.test | LINK | 0.245464 | 0.546629 | 0.587431 | — | — | — |
| system_context_select.test | LINK | 0.257870 | 0.583107 | 0.727601 | — | — | — |
| system_executor.test | LINK | 0.317369 | 1.718452 | 1.110411 | — | — | — |
| system_executor_select.test | LINK | 0.339334 | 1.669765 | 1.248291 | — | — | — |
| this_coro.test | LINK | 0.094502 | 0.204499 | 0.232566 | — | — | — |
| this_coro_select.test | LINK | 0.100763 | 0.204906 | 0.230944 | — | — | — |
| thread_pool.test | RUN | 0.387612 | 2.351216 | 1.432712 | 0.002771 | 0.003330 | 0.002524 |
| thread_pool_select.test | RUN | 0.394692 | 2.460385 | 1.547960 | 0.002655 | 0.003166 | 0.002569 |
| time_traits.test | LINK | 0.217728 | 0.617875 | 0.470921 | — | — | — |
| time_traits_select.test | LINK | 0.215189 | 0.614581 | 0.468055 | — | — | — |
| ts_buffer.test | LINK | 0.203405 | 0.679983 | 0.505945 | — | — | — |
| ts_buffer_select.test | LINK | 0.201420 | 0.681957 | 0.492858 | — | — | — |
| ts_executor.test | LINK | 0.285317 | 0.943787 | 1.221258 | — | — | — |
| ts_executor_select.test | LINK | 0.305386 | 1.011330 | 1.578723 | — | — | — |
| ts_internet.test | LINK | 0.314661 | 1.036860 | 1.260743 | — | — | — |
| ts_internet_select.test | LINK | 0.315244 | 1.055375 | 1.656337 | — | — | — |
| ts_io_context.test | LINK | 0.247094 | 0.776186 | 0.977209 | — | — | — |
| ts_io_context_select.test | LINK | 0.273601 | 0.856593 | 1.249572 | — | — | — |
| ts_net.test | LINK | 0.374158 | 1.211124 | 2.004535 | — | — | — |
| ts_net_select.test | LINK | 0.387724 | 1.247167 | 2.045817 | — | — | — |
| ts_netfwd.test | LINK | 0.380306 | 1.203673 | 1.992843 | — | — | — |
| ts_netfwd_select.test | LINK | 0.379643 | 1.271415 | 2.033339 | — | — | — |
| ts_socket.test | LINK | 0.306721 | 0.998673 | 1.559963 | — | — | — |
| ts_socket_select.test | LINK | 0.316489 | 1.026535 | 1.559689 | — | — | — |
| ts_timer.test | LINK | 0.266159 | 0.907005 | 1.326771 | — | — | — |
| ts_timer_select.test | LINK | 0.305359 | 0.880909 | 1.364923 | — | — | — |
| use_awaitable.test | LINK | 0.096228 | 0.289651 | 0.387124 | — | — | — |
| use_awaitable_select.test | LINK | 0.095567 | 0.298896 | 0.376723 | — | — | — |
| wait_traits.test | LINK | 0.099334 | 0.291353 | 0.361113 | — | — | — |
| wait_traits_select.test | LINK | 0.096962 | 0.285850 | 0.383754 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.096038 | 0.283447 | 0.353633 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.097119 | 0.283732 | 0.388043 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.099897 | 0.291893 | 0.389033 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.096195 | 0.288694 | 0.359209 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.097105 | 0.297159 | 0.379415 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.099532 | 0.281250 | 0.365871 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.100324 | 0.291082 | 0.373512 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.099963 | 0.282013 | 0.378721 | — | — | — |
| windows_object_handle.test | LINK | 0.308366 | 0.777941 | 0.996660 | — | — | — |
| windows_object_handle_select.test | LINK | 0.388528 | 0.830209 | 1.272579 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.348865 | 0.832168 | 1.087960 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.413845 | 0.881231 | 1.362251 | — | — | — |
| windows_random_access_handle.test | LINK | 0.375328 | 0.794215 | 0.978485 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.379972 | 0.840801 | 1.264638 | — | — | — |
| windows_stream_handle.test | LINK | 0.365949 | 0.781443 | 0.975429 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.397433 | 0.841018 | 1.264016 | — | — | — |
| writable_pipe.test | LINK | 0.659054 | 3.205700 | 2.978195 | — | — | — |
| writable_pipe_select.test | LINK | 0.684914 | 3.335323 | 3.165606 | — | — | — |
| write.test | RUN | 1.885025 | 16.756835 | 16.474493 | 0.002680 | 0.002463 | 0.002394 |
| write_select.test | RUN | 1.903287 | 16.714866 | 16.628162 | 0.002583 | 0.002662 | 0.002510 |
| write_at.test | RUN | 1.955940 | 24.523138 | 21.057168 | 0.002793 | 0.002720 | 0.002825 |
| write_at_select.test | RUN | 1.944797 | 24.235461 | 21.521329 | 0.002718 | 0.002847 | 0.002406 |
| any_executor.test | RUN | 0.784923 | 8.059289 | 6.411384 | 0.002039 | 0.002419 | 0.002656 |
| blocking.test | RUN | 1.909614 | 9.498733 | 13.495774 | 0.007504 | 0.006556 | 0.007397 |
| blocking_adaptation.test | RUN | 0.963054 | 4.161050 | 6.273981 | 0.004182 | 0.004333 | 0.003665 |
| context_as.test | RUN | 0.542265 | 2.848326 | 2.114837 | 0.002029 | 0.002150 | 0.001654 |
| executor.test | RUN | 0.150612 | 0.305145 | 0.410985 | 0.001914 | 0.001890 | 0.001816 |
| inline_exception_handling.test | RUN | 1.998484 | 9.078875 | 13.315508 | 0.005215 | 0.005160 | 0.005050 |
| invocable_archetype.test | RUN | 0.149056 | 0.292633 | 0.385744 | 0.001826 | 0.001792 | 0.001773 |
| mapping.test | RUN | 1.906702 | 8.838799 | 13.190120 | 0.005298 | 0.005357 | 0.005213 |
| outstanding_work.test | RUN | 0.879120 | 3.848544 | 6.070566 | 0.004293 | 0.003648 | 0.004110 |
| prefer_only.test | RUN | 0.291541 | 1.499404 | 1.346537 | 0.001828 | 0.001986 | 0.001868 |
| relationship.test | RUN | 0.695764 | 3.899763 | 5.958188 | 0.002970 | 0.004231 | 0.004001 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.007×, 0.994× | 1.001× |
| clang | 0.979× | 0.981×, 0.977× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001628s | 0.001618s | 0.001662s | byte equality observed |
| any_completion_executor_select.test | 5 | 0.001650s | 0.001661s | 0.001579s | byte equality observed |
| any_completion_handler.test | 8 | 0.001313s | 0.001297s | 0.001275s | byte equality observed |
| any_completion_handler_select.test | 9 | 0.001300s | 0.001281s | 0.001293s | byte equality observed |
| any_io_executor.test | 3 | 0.001637s | 0.001628s | 0.001624s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001631s | 0.001620s | 0.001662s | byte equality observed |
| append.test | 10 | 0.001236s | 0.001213s | 0.001238s | byte equality observed |
| append_select.test | 10 | 0.001222s | 0.001189s | 0.001188s | byte equality observed |
| as_tuple.test | 10 | 0.001330s | 0.001331s | 0.001298s | byte equality observed |
| as_tuple_select.test | 9 | 0.001234s | 0.001242s | 0.001172s | byte equality observed |
| bind_allocator.test | 1 | 0.001707s | 0.001724s | 0.001672s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001434s | 0.001334s | 0.001274s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001209s | 0.001197s | 0.001222s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001082s | 0.001072s | 0.001059s | byte equality observed |
| bind_executor.test | 1 | 0.001726s | 0.001716s | 0.001679s | byte equality observed |
| bind_executor_select.test | 1 | 0.002044s | 0.002050s | 0.002000s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001092s | 0.001120s | 0.001071s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001078s | 0.001087s | 0.001044s | byte equality observed |
| buffer.test | 10 | 0.001047s | 0.001044s | 0.001036s | byte equality observed |
| buffer_select.test | 10 | 0.001061s | 0.001002s | 0.001024s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001377s | 0.001351s | 0.001367s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001311s | 0.001342s | 0.001328s | byte equality observed |
| buffered_stream.test | 10 | 0.001339s | 0.001356s | 0.001361s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001318s | 0.001316s | 0.001334s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001351s | 0.001341s | 0.001343s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001352s | 0.001350s | 0.001356s | byte equality observed |
| buffers_iterator.test | 10 | 0.001042s | 0.001004s | 0.001048s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.001027s | 0.001005s | 0.000990s | byte equality observed |
| cancel_after.test | 1 | 0.003533s | 0.003388s | 0.003461s | byte equality observed |
| cancel_after_select.test | 1 | 0.003062s | 0.002860s | 0.002785s | byte equality observed |
| cancel_at.test | 1 | 0.003620s | 0.003633s | 0.003714s | byte equality observed |
| cancel_at_select.test | 1 | 0.003570s | 0.003653s | 0.003557s | byte equality observed |
| co_composed.test | 10 | 0.001028s | 0.001035s | 0.001034s | byte equality observed |
| co_composed_select.test | 10 | 0.000992s | 0.001022s | 0.000991s | byte equality observed |
| compose.test | 1 | 0.001764s | 0.001738s | 0.001656s | byte equality observed |
| compose_select.test | 1 | 0.001520s | 0.001427s | 0.001393s | byte equality observed |
| composed.test | 1 | 0.002067s | 0.002064s | 0.002018s | byte equality observed |
| composed_select.test | 1 | 0.001720s | 0.001602s | 0.001530s | byte equality observed |
| config.test | 10 | 0.001109s | 0.001118s | 0.001119s | byte equality observed |
| config_select.test | 10 | 0.001072s | 0.001104s | 0.001105s | byte equality observed |
| connect_pipe.test | 10 | 0.001129s | 0.001151s | 0.001110s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001107s | 0.001089s | 0.001079s | byte equality observed |
| consign.test | 10 | 0.001099s | 0.001115s | 0.001098s | byte equality observed |
| consign_select.test | 10 | 0.001068s | 0.001079s | 0.001075s | byte equality observed |
| deadline_timer.test | 1 | 0.002440s | 0.002361s | 0.002421s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002239s | 0.002193s | 0.002158s | byte equality observed |
| deferred.test | 10 | 0.000999s | 0.001013s | 0.001006s | byte equality observed |
| deferred_select.test | 10 | 0.000956s | 0.000952s | 0.000972s | byte equality observed |
| disposition.test | 10 | 0.001020s | 0.001031s | 0.001035s | byte equality observed |
| disposition_select.test | 10 | 0.001021s | 0.001021s | 0.001029s | byte equality observed |
| error.test | 10 | 0.001000s | 0.000990s | 0.000998s | byte equality observed |
| error_select.test | 10 | 0.000998s | 0.000991s | 0.000993s | byte equality observed |
| inline_executor.test | 10 | 0.001019s | 0.001005s | 0.001012s | byte equality observed |
| inline_executor_select.test | 10 | 0.001016s | 0.001013s | 0.001010s | byte equality observed |
| inline_or_executor.test | 10 | 0.001035s | 0.001018s | 0.000995s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001030s | 0.001015s | 0.001001s | byte equality observed |
| io_context.test | 1 | 0.001915s | 0.001887s | 0.001955s | byte equality observed |
| io_context_select.test | 1 | 0.002299s | 0.002288s | 0.002228s | byte equality observed |
| io_context_strand.test | 1 | 0.002301s | 0.002269s | 0.002288s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002060s | 0.002056s | 0.002029s | byte equality observed |
| ip_host_name.test | 10 | 0.001024s | 0.001032s | 0.001007s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000976s | 0.001013s | 0.000965s | byte equality observed |
| ip_icmp.test | 10 | 0.001018s | 0.001039s | 0.000975s | byte equality observed |
| ip_icmp_select.test | 10 | 0.001019s | 0.001037s | 0.000970s | byte equality observed |
| ip_multicast.test | 10 | 0.001108s | 0.001116s | 0.001090s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001080s | 0.001065s | 0.001059s | byte equality observed |
| ip_tcp.test | 10 | 0.001497s | 0.001520s | 0.001488s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001440s | 0.001487s | 0.001407s | byte equality observed |
| ip_udp.test | 10 | 0.001126s | 0.001143s | 0.001093s | byte equality observed |
| ip_udp_select.test | 10 | 0.001118s | 0.001155s | 0.001081s | byte equality observed |
| ip_unicast.test | 10 | 0.001080s | 0.001106s | 0.001051s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001062s | 0.001098s | 0.001025s | byte equality observed |
| ip_v6_only.test | 10 | 0.001072s | 0.001118s | 0.001045s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001065s | 0.001085s | 0.001026s | byte equality observed |
| is_read_buffered.test | 10 | 0.000994s | 0.001066s | 0.000977s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000996s | 0.001027s | 0.000962s | byte equality observed |
| is_write_buffered.test | 10 | 0.001025s | 0.001059s | 0.000988s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001028s | 0.001042s | 0.000993s | byte equality observed |
| prepend.test | 10 | 0.001110s | 0.001130s | 0.001119s | byte equality observed |
| prepend_select.test | 10 | 0.001074s | 0.001105s | 0.001079s | byte equality observed |
| read.test | 10 | 0.001476s | 0.001471s | 0.001436s | byte equality observed |
| read_at.test | 10 | 0.001883s | 0.001914s | 0.001703s | byte equality observed |
| read_at_select.test | 10 | 0.001870s | 0.001927s | 0.001747s | byte equality observed |
| read_select.test | 10 | 0.001504s | 0.001526s | 0.001470s | byte equality observed |
| read_until.test | 10 | 0.001236s | 0.001233s | 0.001216s | byte equality observed |
| read_until_select.test | 10 | 0.001281s | 0.001240s | 0.001203s | byte equality observed |
| recycling_allocator.test | 10 | 0.001041s | 0.001040s | 0.001005s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001056s | 0.001096s | 0.001038s | byte equality observed |
| signal_set.test | 10 | 0.001056s | 0.001109s | 0.001033s | byte equality observed |
| signal_set_select.test | 10 | 0.001060s | 0.001067s | 0.001033s | byte equality observed |
| socket_base.test | 10 | 0.001190s | 0.001218s | 0.001167s | byte equality observed |
| socket_base_select.test | 10 | 0.001168s | 0.001182s | 0.001142s | byte equality observed |
| spawn.test | 10 | 0.001269s | 0.001284s | 0.001276s | byte equality observed |
| spawn_select.test | 10 | 0.001274s | 0.001262s | 0.001243s | byte equality observed |
| static_thread_pool.test | 10 | 0.001040s | 0.001031s | 0.001039s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.001029s | 0.001039s | 0.000992s | byte equality observed |
| strand.test | 1 | 0.001946s | 0.001997s | 0.001991s | byte equality observed |
| strand_select.test | 1 | 0.001667s | 0.001680s | 0.001637s | byte equality observed |
| streambuf.test | 10 | 0.001070s | 0.001123s | 0.001065s | byte equality observed |
| streambuf_select.test | 10 | 0.001090s | 0.001057s | 0.001040s | byte equality observed |
| thread_pool.test | 10 | 0.002259s | 0.002267s | 0.002274s | byte equality observed |
| thread_pool_select.test | 10 | 0.002201s | 0.002244s | 0.002277s | byte equality observed |
| write.test | 10 | 0.001555s | 0.001512s | 0.001513s | byte equality observed |
| write_at.test | 10 | 0.001650s | 0.001621s | 0.001651s | byte equality observed |
| write_at_select.test | 10 | 0.001637s | 0.001646s | 0.001597s | byte equality observed |
| write_select.test | 10 | 0.001542s | 0.001498s | 0.001566s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43638391827).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
