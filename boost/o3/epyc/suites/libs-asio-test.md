# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.599117 | 3.888331 | 3.509642 | 0.002278 | 0.002703 | 0.002464 |
| any_completion_executor_select.test | RUN | 0.626931 | 3.845871 | 3.628141 | 0.002372 | 0.002364 | 0.002430 |
| any_completion_handler.test | RUN | 0.689813 | 3.486948 | 3.236801 | 0.001747 | 0.002190 | 0.001828 |
| any_completion_handler_select.test | RUN | 0.734338 | 3.584718 | 3.402009 | 0.001884 | 0.002158 | 0.001960 |
| any_io_executor.test | RUN | 0.680515 | 4.119387 | 3.836538 | 0.001933 | 0.002510 | 0.002233 |
| any_io_executor_select.test | RUN | 0.663183 | 4.033297 | 3.890801 | 0.002258 | 0.002674 | 0.002333 |
| append.test | RUN | 0.596772 | 3.269912 | 2.839915 | 0.001369 | 0.002073 | 0.001953 |
| append_select.test | RUN | 0.609320 | 3.369324 | 2.933013 | 0.001832 | 0.001666 | 0.001805 |
| as_tuple.test | RUN | 0.779807 | 3.862849 | 3.937695 | 0.001914 | 0.002215 | 0.001976 |
| as_tuple_select.test | RUN | 0.780526 | 3.868730 | 3.893458 | 0.001742 | 0.001990 | 0.001680 |
| associated_allocator.test | LINK | 0.165564 | 0.354135 | 0.473256 | — | — | — |
| associated_allocator_select.test | LINK | 0.168565 | 0.353161 | 0.472153 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.185451 | 0.382924 | 0.510852 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.183443 | 0.392801 | 0.516656 | — | — | — |
| associated_executor.test | LINK | 0.264783 | 0.659009 | 0.821854 | — | — | — |
| associated_executor_select.test | LINK | 0.258805 | 0.641948 | 0.832405 | — | — | — |
| associated_immediate_executor.test | LINK | 0.242536 | 0.610676 | 0.702188 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.245457 | 0.581722 | 0.699487 | — | — | — |
| associator.test | LINK | 0.135708 | 0.281709 | 0.367264 | — | — | — |
| associator_select.test | LINK | 0.137007 | 0.293233 | 0.370532 | — | — | — |
| awaitable.test | LINK | 0.138361 | 0.292402 | 0.368406 | — | — | — |
| awaitable_select.test | LINK | 0.137867 | 0.282325 | 0.363631 | — | — | — |
| basic_datagram_socket.test | LINK | 0.402637 | 0.899652 | 1.415662 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.411493 | 0.898659 | 1.469319 | — | — | — |
| basic_deadline_timer.test | LINK | 0.491156 | 1.077170 | 1.639133 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.504361 | 1.095003 | 1.628667 | — | — | — |
| basic_file.test | LINK | 0.135245 | 0.296575 | 0.380149 | — | — | — |
| basic_file_select.test | LINK | 0.137515 | 0.298526 | 0.381196 | — | — | — |
| basic_random_access_file.test | LINK | 0.134839 | 0.279129 | 0.369273 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.137003 | 0.281255 | 0.387735 | — | — | — |
| basic_raw_socket.test | LINK | 0.410873 | 0.894813 | 1.420189 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.421654 | 0.927674 | 1.449929 | — | — | — |
| basic_readable_pipe.test | LINK | 0.390638 | 0.875340 | 1.222264 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.410293 | 0.911700 | 1.514208 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.413088 | 0.896935 | 1.424555 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.429886 | 0.903217 | 1.435749 | — | — | — |
| basic_signal_set.test | LINK | 0.385373 | 0.839440 | 1.125843 | — | — | — |
| basic_signal_set_select.test | LINK | 0.403675 | 0.889086 | 1.379172 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.407476 | 0.916781 | 1.471855 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.417774 | 0.941866 | 1.504929 | — | — | — |
| basic_stream_file.test | LINK | 0.134344 | 0.287184 | 0.383683 | — | — | — |
| basic_stream_file_select.test | LINK | 0.136833 | 0.291406 | 0.392693 | — | — | — |
| basic_stream_socket.test | LINK | 0.414328 | 0.876821 | 1.418968 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.423548 | 0.908403 | 1.458984 | — | — | — |
| basic_streambuf.test | LINK | 0.200479 | 0.418828 | 0.564656 | — | — | — |
| basic_streambuf_select.test | LINK | 0.209857 | 0.432678 | 0.550752 | — | — | — |
| basic_waitable_timer.test | LINK | 0.390929 | 0.845400 | 1.342054 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.397264 | 0.867443 | 1.360888 | — | — | — |
| basic_writable_pipe.test | LINK | 0.389447 | 0.873625 | 1.239029 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.421101 | 0.932866 | 1.513225 | — | — | — |
| bind_allocator.test | RUN | 0.652748 | 3.293150 | 3.135258 | 0.002298 | 0.002292 | 0.002100 |
| bind_allocator_select.test | RUN | 0.658881 | 3.358159 | 3.128053 | 0.001660 | 0.002136 | 0.002082 |
| bind_cancellation_slot.test | RUN | 0.654462 | 3.340700 | 3.195574 | 0.001880 | 0.001471 | 0.001438 |
| bind_cancellation_slot_select.test | RUN | 0.665967 | 3.369205 | 2.961298 | 0.001447 | 0.001553 | 0.001337 |
| bind_executor.test | RUN | 0.438469 | 2.297459 | 1.911143 | 0.002072 | 0.002178 | 0.002026 |
| bind_executor_select.test | RUN | 0.448148 | 2.355437 | 1.899093 | 0.001857 | 0.002065 | 0.001880 |
| bind_immediate_executor.test | RUN | 0.334941 | 1.910833 | 1.209952 | 0.001360 | 0.001408 | 0.001308 |
| bind_immediate_executor_select.test | RUN | 0.346292 | 1.869502 | 1.335548 | 0.001406 | 0.001495 | 0.001307 |
| buffer.test | RUN | 0.207399 | 0.808775 | 0.759531 | 0.001371 | 0.001437 | 0.001296 |
| buffer_select.test | RUN | 0.209148 | 0.798722 | 0.751274 | 0.001356 | 0.001408 | 0.001284 |
| buffer_registration.test | LINK | 0.167378 | 0.427531 | 0.447804 | — | — | — |
| buffer_registration_select.test | LINK | 0.171645 | 0.414712 | 0.448028 | — | — | — |
| buffered_read_stream.test | RUN | 0.714452 | 5.119786 | 4.413685 | 0.001743 | 0.002400 | 0.002292 |
| buffered_read_stream_select.test | RUN | 0.720242 | 5.105571 | 4.419242 | 0.001810 | 0.002331 | 0.002379 |
| buffered_stream.test | RUN | 1.065496 | 7.742999 | 7.616423 | 0.002416 | 0.002342 | 0.002319 |
| buffered_stream_select.test | RUN | 1.153118 | 7.822304 | 7.427866 | 0.002256 | 0.002331 | 0.002374 |
| buffered_write_stream.test | RUN | 1.188685 | 6.681922 | 6.588869 | 0.002326 | 0.002496 | 0.002216 |
| buffered_write_stream_select.test | RUN | 1.179038 | 6.761435 | 6.323156 | 0.002160 | 0.002390 | 0.002316 |
| buffers_iterator.test | RUN | 0.393151 | 0.653657 | 1.082349 | 0.001551 | 0.002019 | 0.001698 |
| buffers_iterator_select.test | RUN | 0.378264 | 0.655586 | 1.074004 | 0.001621 | 0.001766 | 0.001716 |
| cancel_after.test | RUN | 0.966221 | 5.207831 | 4.797444 | 0.003770 | 0.004334 | 0.003838 |
| cancel_after_select.test | RUN | 0.953310 | 5.225698 | 4.762008 | 0.003486 | 0.004143 | 0.003321 |
| cancel_at.test | RUN | 0.965492 | 4.596251 | 4.623506 | 0.003511 | 0.003354 | 0.003530 |
| cancel_at_select.test | RUN | 0.954270 | 4.489161 | 4.579099 | 0.003125 | 0.003131 | 0.003001 |
| cancellation_signal.test | LINK | 0.125549 | 0.235927 | 0.288312 | — | — | — |
| cancellation_signal_select.test | LINK | 0.178001 | 0.241120 | 0.291865 | — | — | — |
| cancellation_state.test | LINK | 0.182602 | 0.241240 | 0.339196 | — | — | — |
| cancellation_state_select.test | LINK | 0.184405 | 0.237759 | 0.484869 | — | — | — |
| cancellation_type.test | LINK | 0.146001 | 0.190060 | 0.396064 | — | — | — |
| cancellation_type_select.test | LINK | 0.140916 | 0.190010 | 0.350018 | — | — | — |
| co_composed.test | RUN | 0.139637 | 0.189833 | 0.359536 | 0.001636 | 0.001367 | 0.001662 |
| co_composed_select.test | RUN | 0.140238 | 0.193785 | 0.384205 | 0.001584 | 0.001359 | 0.001458 |
| co_spawn.test | LINK | 0.139519 | 0.191684 | 0.385011 | — | — | — |
| co_spawn_select.test | LINK | 0.140808 | 0.262573 | 0.356287 | — | — | — |
| completion_condition.test | LINK | 0.179037 | 0.416349 | 0.496289 | — | — | — |
| completion_condition_select.test | LINK | 0.175655 | 0.411870 | 0.518477 | — | — | — |
| compose.test | RUN | 0.804983 | 4.042434 | 3.978564 | 0.002383 | 0.002367 | 0.001920 |
| compose_select.test | RUN | 0.814864 | 3.994839 | 3.922009 | 0.002256 | 0.001940 | 0.002269 |
| composed.test | RUN | 0.787162 | 3.997824 | 3.867949 | 0.002066 | 0.001959 | 0.001906 |
| composed_select.test | RUN | 0.763750 | 3.924319 | 3.776055 | 0.001725 | 0.001913 | 0.001802 |
| config.test | RUN | 0.367419 | 2.500800 | 1.755021 | 0.001961 | 0.002128 | 0.001807 |
| config_select.test | RUN | 0.473536 | 2.731295 | 2.020139 | 0.001952 | 0.001962 | 0.001758 |
| connect.test | LINK | 1.276310 | 8.518835 | 8.217994 | — | — | — |
| connect_select.test | LINK | 1.294725 | 8.551528 | 8.208992 | — | — | — |
| connect_pipe.test | RUN | 0.698828 | 3.218245 | 3.039943 | 0.001966 | 0.001966 | 0.001848 |
| connect_pipe_select.test | RUN | 0.735127 | 3.336332 | 3.273021 | 0.002224 | 0.001913 | 0.001832 |
| consign.test | RUN | 0.614091 | 3.155583 | 2.730218 | 0.001866 | 0.001841 | 0.001850 |
| consign_select.test | RUN | 0.613384 | 3.261344 | 2.707928 | 0.001949 | 0.001665 | 0.001601 |
| coroutine.test | LINK | 0.152096 | 0.342993 | 0.390111 | — | — | — |
| coroutine_select.test | LINK | 0.146162 | 0.317321 | 0.409304 | — | — | — |
| deadline_timer.test | RUN | 0.905661 | 4.124119 | 4.007470 | 0.003319 | 0.003198 | 0.003018 |
| deadline_timer_select.test | RUN | 0.907154 | 4.081880 | 3.962997 | 0.003177 | 0.003122 | 0.002508 |
| deferred.test | RUN | 0.151360 | 0.309058 | 0.430034 | 0.001801 | 0.001831 | 0.001778 |
| deferred_select.test | RUN | 0.157462 | 0.303950 | 0.433435 | 0.001483 | 0.001591 | 0.001706 |
| detached.test | LINK | 0.168943 | 0.344592 | 0.440637 | — | — | — |
| detached_select.test | LINK | 0.174742 | 0.331765 | 0.433362 | — | — | — |
| disposition.test | RUN | 0.212630 | 0.774922 | 0.801463 | 0.001501 | 0.001838 | 0.001956 |
| disposition_select.test | RUN | 0.160428 | 0.770924 | 0.796860 | 0.001526 | 0.001887 | 0.001420 |
| error.test | RUN | 0.151845 | 0.742847 | 0.701427 | 0.001409 | 0.001869 | 0.001827 |
| error_select.test | RUN | 0.148755 | 0.744683 | 0.707382 | 0.001424 | 0.001934 | 0.001826 |
| file_base.test | LINK | 0.186635 | 0.621098 | 0.797909 | — | — | — |
| file_base_select.test | LINK | 0.189437 | 0.620298 | 0.648072 | — | — | — |
| fwd_first.test | LINK | 0.423802 | 1.012660 | 1.380194 | — | — | — |
| fwd_last.test | LINK | 0.423977 | 0.901871 | 1.407666 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.163553 | 0.380554 | 0.506773 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.161904 | 0.377946 | 0.506823 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.642378 | 3.235642 | 2.700209 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.638636 | 3.310463 | 2.684656 | — | — | — |
| generic_raw_protocol.test | LINK | 0.636072 | 3.268633 | 2.695296 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.643658 | 3.344713 | 2.683044 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.560269 | 2.800087 | 2.320078 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.556071 | 2.813646 | 2.305894 | — | — | — |
| generic_stream_protocol.test | LINK | 0.591303 | 2.994432 | 2.499862 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.595544 | 3.051485 | 2.492137 | — | — | — |
| high_resolution_timer.test | LINK | 0.270319 | 0.573178 | 0.783359 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.276753 | 0.584243 | 0.808515 | — | — | — |
| immediate.test | LINK | 0.189761 | 0.434720 | 0.489249 | — | — | — |
| immediate_select.test | LINK | 0.189798 | 0.432012 | 0.490585 | — | — | — |
| inline_executor.test | RUN | 0.229607 | 0.677914 | 0.728618 | 0.001519 | 0.001407 | 0.001333 |
| inline_executor_select.test | RUN | 0.233276 | 0.680194 | 0.726819 | 0.001399 | 0.001478 | 0.001321 |
| inline_or_executor.test | RUN | 0.360945 | 1.945384 | 1.371179 | 0.001501 | 0.001439 | 0.001322 |
| inline_or_executor_select.test | RUN | 0.373796 | 1.959907 | 1.509417 | 0.001455 | 0.001411 | 0.001301 |
| io_context.test | RUN | 0.514640 | 2.935223 | 2.372448 | 0.002331 | 0.002365 | 0.002190 |
| io_context_select.test | RUN | 0.516806 | 2.859231 | 2.376438 | 0.002317 | 0.002262 | 0.002046 |
| io_context_strand.test | RUN | 0.488253 | 2.468779 | 2.074871 | 0.002273 | 0.002379 | 0.002152 |
| io_context_strand_select.test | RUN | 0.500444 | 2.458362 | 2.076001 | 0.002151 | 0.002198 | 0.002124 |
| ip_address.test | LINK | 0.189267 | 0.582671 | 0.607207 | — | — | — |
| ip_address_select.test | LINK | 0.196754 | 0.580590 | 0.604868 | — | — | — |
| ip_address_v4.test | LINK | 0.204882 | 0.618677 | 0.662187 | — | — | — |
| ip_address_v4_select.test | LINK | 0.202923 | 0.612402 | 0.661095 | — | — | — |
| ip_address_v6.test | LINK | 0.228076 | 0.793942 | 0.816205 | — | — | — |
| ip_address_v6_select.test | LINK | 0.221156 | 0.798596 | 0.805914 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.175368 | 0.402803 | 0.529502 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.170199 | 0.405014 | 0.523119 | — | — | — |
| ip_basic_resolver.test | LINK | 0.271779 | 0.573664 | 1.292348 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.277621 | 0.582803 | 1.092425 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.096345 | 0.192515 | 0.393161 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.096552 | 0.187745 | 0.391680 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.173577 | 0.389168 | 0.874718 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.192710 | 0.392406 | 0.885149 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.210952 | 0.379533 | 0.863175 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.166142 | 0.380020 | 0.846780 | — | — | — |
| ip_host_name.test | RUN | 0.174623 | 0.496617 | 0.942659 | 0.001372 | 0.001860 | 0.001730 |
| ip_host_name_select.test | RUN | 0.174729 | 0.529823 | 0.954998 | 0.001391 | 0.001881 | 0.001676 |
| ip_icmp.test | RUN | 0.786897 | 6.679262 | 5.791452 | 0.001503 | 0.002024 | 0.001775 |
| ip_icmp_select.test | RUN | 0.791034 | 6.788035 | 5.660189 | 0.001394 | 0.001930 | 0.001428 |
| ip_multicast.test | RUN | 0.471459 | 3.409085 | 3.345987 | 0.001597 | 0.002179 | 0.002084 |
| ip_multicast_select.test | RUN | 0.480010 | 3.416055 | 3.277842 | 0.001477 | 0.002018 | 0.001971 |
| ip_resolver_query_base.test | LINK | 0.115821 | 0.326413 | 0.400380 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.110403 | 0.325839 | 0.402723 | — | — | — |
| ip_tcp.test | RUN | 1.153329 | 9.905094 | 8.865735 | 0.001998 | 0.002573 | 0.002732 |
| ip_tcp_select.test | RUN | 1.160731 | 10.261566 | 8.551948 | 0.002034 | 0.002597 | 0.002318 |
| ip_udp.test | RUN | 0.827367 | 7.157362 | 6.071187 | 0.001716 | 0.002094 | 0.002018 |
| ip_udp_select.test | RUN | 0.833796 | 7.284063 | 5.925250 | 0.001706 | 0.002040 | 0.001962 |
| ip_unicast.test | RUN | 0.439389 | 3.094562 | 2.871304 | 0.001566 | 0.002028 | 0.001822 |
| ip_unicast_select.test | RUN | 0.448089 | 3.102763 | 2.850216 | 0.001519 | 0.001851 | 0.001799 |
| ip_v6_only.test | RUN | 0.446319 | 3.179145 | 3.010356 | 0.001578 | 0.001942 | 0.001633 |
| ip_v6_only_select.test | RUN | 0.458641 | 3.255537 | 2.997698 | 0.001555 | 0.002093 | 0.001561 |
| is_read_buffered.test | RUN | 0.319955 | 0.980860 | 1.654304 | 0.001409 | 0.001559 | 0.001444 |
| is_read_buffered_select.test | RUN | 0.319889 | 1.034305 | 1.676489 | 0.001480 | 0.001738 | 0.001693 |
| is_write_buffered.test | RUN | 0.321700 | 1.016160 | 1.593671 | 0.001513 | 0.001916 | 0.001742 |
| is_write_buffered_select.test | RUN | 0.330547 | 1.033091 | 1.682206 | 0.001323 | 0.001685 | 0.001762 |
| local_basic_endpoint.test | LINK | 0.171120 | 0.559016 | 0.887545 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.162066 | 0.544813 | 0.885390 | — | — | — |
| local_connect_pair.test | LINK | 0.422397 | 3.130425 | 2.815074 | — | — | — |
| local_connect_pair_select.test | LINK | 0.439886 | 3.097615 | 2.754129 | — | — | — |
| local_datagram_protocol.test | LINK | 0.590759 | 4.027960 | 3.867159 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.728120 | 4.112663 | 3.831874 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.831113 | 4.017685 | 3.814971 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.827856 | 4.038197 | 3.806989 | — | — | — |
| local_stream_protocol.test | LINK | 0.783512 | 3.803381 | 3.622253 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.809204 | 3.851000 | 3.618063 | — | — | — |
| placeholders.test | LINK | 0.155029 | 0.302540 | 0.423363 | — | — | — |
| placeholders_select.test | LINK | 0.150808 | 0.312733 | 0.433278 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.417874 | 0.820081 | 1.194531 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.423617 | 0.898747 | 1.474143 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.412084 | 0.876729 | 1.180975 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.428828 | 0.919450 | 1.483475 | — | — | — |
| posix_descriptor_base.test | LINK | 0.178289 | 0.365381 | 0.429364 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.172738 | 0.310373 | 0.432429 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.778069 | 3.828952 | 3.572183 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.798805 | 3.867127 | 3.686368 | — | — | — |
| prepend.test | RUN | 0.602683 | 3.122003 | 2.858928 | 0.001774 | 0.001879 | 0.001825 |
| prepend_select.test | RUN | 0.624465 | 3.208361 | 2.852133 | 0.001896 | 0.001735 | 0.001759 |
| random_access_file.test | LINK | 0.361991 | 0.784183 | 0.973821 | — | — | — |
| random_access_file_select.test | LINK | 0.379766 | 0.821117 | 1.237822 | — | — | — |
| read.test | RUN | 1.897291 | 19.800325 | 16.308698 | 0.002358 | 0.002388 | 0.002376 |
| read_select.test | RUN | 1.891806 | 19.809996 | 16.463735 | 0.002449 | 0.002525 | 0.002502 |
| read_at.test | RUN | 1.884159 | 27.163291 | 22.258767 | 0.003171 | 0.002914 | 0.002768 |
| read_at_select.test | RUN | 1.898621 | 26.840980 | 22.402724 | 0.003070 | 0.002878 | 0.002853 |
| read_until.test | RUN | 0.987944 | 7.345687 | 5.850438 | 0.001995 | 0.001991 | 0.001928 |
| read_until_select.test | RUN | 1.016291 | 7.418386 | 6.087087 | 0.001914 | 0.001950 | 0.001978 |
| readable_pipe.test | LINK | 0.632733 | 3.150347 | 2.877585 | — | — | — |
| readable_pipe_select.test | LINK | 0.678074 | 3.320189 | 3.078000 | — | — | — |
| recycling_allocator.test | RUN | 0.210754 | 0.485452 | 0.550255 | 0.001842 | 0.001881 | 0.001781 |
| recycling_allocator_select.test | RUN | 0.208721 | 0.487894 | 0.577524 | 0.001855 | 0.001800 | 0.001789 |
| redirect_disposition.test | LINK | 0.846727 | 4.458241 | 4.317751 | — | — | — |
| redirect_disposition_select.test | LINK | 0.860699 | 4.429209 | 4.336279 | — | — | — |
| redirect_error.test | LINK | 0.773375 | 3.687385 | 3.759614 | — | — | — |
| redirect_error_select.test | LINK | 0.781490 | 3.659260 | 3.787676 | — | — | — |
| registered_buffer.test | LINK | 0.203140 | 0.404762 | 0.544376 | — | — | — |
| registered_buffer_select.test | LINK | 0.206103 | 0.399512 | 0.524387 | — | — | — |
| signal_set.test | RUN | 0.639203 | 3.084302 | 2.624246 | 0.001841 | 0.001873 | 0.001802 |
| signal_set_select.test | RUN | 0.671074 | 3.207213 | 2.881248 | 0.001855 | 0.001780 | 0.001718 |
| signal_set_base.test | LINK | 0.163763 | 0.334878 | 0.416130 | — | — | — |
| signal_set_base_select.test | LINK | 0.166340 | 0.328425 | 0.417273 | — | — | — |
| socket_base.test | RUN | 0.770752 | 4.547514 | 4.004624 | 0.002179 | 0.002047 | 0.001949 |
| socket_base_select.test | RUN | 0.779719 | 4.401236 | 4.104403 | 0.001866 | 0.002128 | 0.001969 |
| spawn.test | RUN | 1.261911 | 7.458258 | 6.860185 | 0.001617 | 0.002140 | 0.002128 |
| spawn_select.test | RUN | 1.274880 | 7.464399 | 6.864484 | 0.002194 | 0.002009 | 0.002030 |
| static_thread_pool.test | RUN | 0.361086 | 0.735679 | 0.990442 | 0.001932 | 0.001879 | 0.001645 |
| static_thread_pool_select.test | RUN | 0.385393 | 0.808027 | 1.241575 | 0.001696 | 0.001870 | 0.001731 |
| steady_timer.test | LINK | 0.393662 | 0.846204 | 1.359913 | — | — | — |
| steady_timer_select.test | LINK | 0.403867 | 0.864153 | 1.337512 | — | — | — |
| strand.test | RUN | 0.800705 | 4.174801 | 4.151161 | 0.002446 | 0.002650 | 0.002553 |
| strand_select.test | RUN | 0.809556 | 4.170480 | 4.081805 | 0.002794 | 0.002492 | 0.002641 |
| stream_file.test | LINK | 0.373148 | 0.758107 | 0.967215 | — | — | — |
| stream_file_select.test | LINK | 0.389412 | 0.822416 | 1.272271 | — | — | — |
| streambuf.test | RUN | 0.219608 | 0.577308 | 0.690751 | 0.001400 | 0.001624 | 0.001726 |
| streambuf_select.test | RUN | 0.188167 | 0.590395 | 0.696258 | 0.001321 | 0.001363 | 0.001839 |
| system_timer.test | LINK | 0.504666 | 2.716368 | 2.585265 | — | — | — |
| system_timer_select.test | LINK | 0.518704 | 2.690919 | 2.454544 | — | — | — |
| system_context.test | LINK | 0.240752 | 0.501165 | 0.574158 | — | — | — |
| system_context_select.test | LINK | 0.257077 | 0.528964 | 0.723601 | — | — | — |
| system_executor.test | LINK | 0.315673 | 1.567049 | 1.106084 | — | — | — |
| system_executor_select.test | LINK | 0.328253 | 1.522353 | 1.237762 | — | — | — |
| this_coro.test | LINK | 0.099399 | 0.193953 | 0.226954 | — | — | — |
| this_coro_select.test | LINK | 0.100232 | 0.197096 | 0.228533 | — | — | — |
| thread_pool.test | RUN | 0.491572 | 1.974526 | 1.420462 | 0.002846 | 0.002612 | 0.002535 |
| thread_pool_select.test | RUN | 0.499991 | 2.020928 | 1.551671 | 0.002861 | 0.002800 | 0.002574 |
| time_traits.test | LINK | 0.244680 | 0.551202 | 0.470662 | — | — | — |
| time_traits_select.test | LINK | 0.251109 | 0.489318 | 0.468410 | — | — | — |
| ts_buffer.test | LINK | 0.235419 | 0.653866 | 0.501366 | — | — | — |
| ts_buffer_select.test | LINK | 0.241720 | 0.649407 | 0.497119 | — | — | — |
| ts_executor.test | LINK | 0.328598 | 0.893009 | 1.125036 | — | — | — |
| ts_executor_select.test | LINK | 0.336762 | 0.947878 | 1.570058 | — | — | — |
| ts_internet.test | LINK | 0.312453 | 0.993377 | 1.195888 | — | — | — |
| ts_internet_select.test | LINK | 0.319567 | 1.007850 | 1.652666 | — | — | — |
| ts_io_context.test | LINK | 0.255514 | 0.748994 | 0.968233 | — | — | — |
| ts_io_context_select.test | LINK | 0.264090 | 0.789297 | 1.239170 | — | — | — |
| ts_net.test | LINK | 0.371769 | 1.189443 | 1.992158 | — | — | — |
| ts_net_select.test | LINK | 0.385193 | 1.200548 | 2.035473 | — | — | — |
| ts_netfwd.test | LINK | 0.371085 | 1.187424 | 1.976789 | — | — | — |
| ts_netfwd_select.test | LINK | 0.386134 | 1.208750 | 2.025497 | — | — | — |
| ts_socket.test | LINK | 0.304423 | 0.928111 | 1.530975 | — | — | — |
| ts_socket_select.test | LINK | 0.311306 | 0.948512 | 1.571138 | — | — | — |
| ts_timer.test | LINK | 0.271779 | 0.825572 | 1.319137 | — | — | — |
| ts_timer_select.test | LINK | 0.274995 | 0.871946 | 1.380960 | — | — | — |
| use_awaitable.test | LINK | 0.097709 | 0.290138 | 0.381247 | — | — | — |
| use_awaitable_select.test | LINK | 0.096690 | 0.288420 | 0.380716 | — | — | — |
| wait_traits.test | LINK | 0.099106 | 0.286753 | 0.361694 | — | — | — |
| wait_traits_select.test | LINK | 0.096495 | 0.288524 | 0.379374 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.097442 | 0.282557 | 0.369254 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.098435 | 0.287512 | 0.378821 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.098500 | 0.285900 | 0.368792 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.100403 | 0.287414 | 0.383254 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.097669 | 0.277061 | 0.372675 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.098096 | 0.278015 | 0.368495 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.099067 | 0.277019 | 0.381042 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.126896 | 0.278891 | 0.391738 | — | — | — |
| windows_object_handle.test | LINK | 0.353834 | 0.756583 | 0.969981 | — | — | — |
| windows_object_handle_select.test | LINK | 0.377749 | 0.802085 | 1.267329 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.380919 | 0.812912 | 1.122301 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.403261 | 0.855298 | 1.360833 | — | — | — |
| windows_random_access_handle.test | LINK | 0.367243 | 0.758588 | 0.982284 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.385174 | 0.798656 | 1.252381 | — | — | — |
| windows_stream_handle.test | LINK | 0.370079 | 0.771250 | 1.025961 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.390855 | 0.819671 | 1.268520 | — | — | — |
| writable_pipe.test | LINK | 0.652702 | 3.132078 | 2.967251 | — | — | — |
| writable_pipe_select.test | LINK | 0.671820 | 3.254974 | 3.157748 | — | — | — |
| write.test | RUN | 1.881025 | 16.123836 | 16.233474 | 0.002586 | 0.002665 | 0.002304 |
| write_select.test | RUN | 1.904349 | 16.119022 | 16.321233 | 0.002590 | 0.002222 | 0.002631 |
| write_at.test | RUN | 1.941450 | 23.035957 | 20.777137 | 0.002718 | 0.002689 | 0.002604 |
| write_at_select.test | RUN | 1.962966 | 22.708214 | 20.922274 | 0.002756 | 0.002875 | 0.002592 |
| any_executor.test | RUN | 0.809555 | 7.437997 | 6.161020 | 0.002483 | 0.002530 | 0.002402 |
| blocking.test | RUN | 1.980427 | 9.362162 | 13.497051 | 0.007338 | 0.007053 | 0.007449 |
| blocking_adaptation.test | RUN | 0.950537 | 4.104780 | 6.105166 | 0.004078 | 0.004268 | 0.004062 |
| context_as.test | RUN | 0.532348 | 2.880874 | 2.042904 | 0.002071 | 0.002148 | 0.002063 |
| executor.test | RUN | 0.153908 | 0.302681 | 0.398439 | 0.001806 | 0.001958 | 0.001855 |
| inline_exception_handling.test | RUN | 1.930811 | 8.578978 | 12.454817 | 0.007298 | 0.005168 | 0.007184 |
| invocable_archetype.test | RUN | 0.135936 | 0.304729 | 0.394219 | 0.001733 | 0.001932 | 0.001655 |
| mapping.test | RUN | 1.869649 | 9.331869 | 13.357825 | 0.005316 | 0.005311 | 0.005228 |
| outstanding_work.test | RUN | 0.918042 | 3.730708 | 5.914694 | 0.004214 | 0.004173 | 0.004040 |
| prefer_only.test | RUN | 0.284640 | 1.540695 | 1.347933 | 0.001672 | 0.001811 | 0.001572 |
| relationship.test | RUN | 0.631885 | 3.825460 | 5.553146 | 0.002950 | 0.004150 | 0.002857 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.994×, 0.995× | 1.000× |
| clang | 0.986× | 0.982×, 0.991× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001585s | 0.001599s | 0.001577s | byte equality observed |
| any_completion_executor_select.test | 4 | 0.001607s | 0.001576s | 0.001579s | byte equality observed |
| any_completion_handler.test | 10 | 0.001283s | 0.001252s | 0.001267s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001275s | 0.001249s | 0.001269s | byte equality observed |
| any_io_executor.test | 4 | 0.001605s | 0.001544s | 0.001586s | byte equality observed |
| any_io_executor_select.test | 5 | 0.001592s | 0.001579s | 0.001605s | byte equality observed |
| append.test | 10 | 0.001204s | 0.001185s | 0.001226s | byte equality observed |
| append_select.test | 7 | 0.001197s | 0.001183s | 0.001199s | byte equality observed |
| as_tuple.test | 7 | 0.001289s | 0.001275s | 0.001303s | byte equality observed |
| as_tuple_select.test | 8 | 0.001229s | 0.001203s | 0.001220s | byte equality observed |
| bind_allocator.test | 1 | 0.001665s | 0.001671s | 0.001677s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001415s | 0.001393s | 0.001353s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001155s | 0.001131s | 0.001131s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.001064s | 0.001041s | 0.001040s | byte equality observed |
| bind_executor.test | 1 | 0.001686s | 0.001687s | 0.001699s | byte equality observed |
| bind_executor_select.test | 1 | 0.002011s | 0.001949s | 0.001961s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.001095s | 0.001105s | 0.001078s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.001108s | 0.001071s | 0.001069s | byte equality observed |
| buffer.test | 10 | 0.001035s | 0.001049s | 0.001034s | byte equality observed |
| buffer_select.test | 10 | 0.001028s | 0.001042s | 0.001069s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001341s | 0.001341s | 0.001322s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001262s | 0.001311s | 0.001275s | byte equality observed |
| buffered_stream.test | 10 | 0.001296s | 0.001317s | 0.001333s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001276s | 0.001287s | 0.001294s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001353s | 0.001342s | 0.001307s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001300s | 0.001275s | 0.001326s | byte equality observed |
| buffers_iterator.test | 10 | 0.001009s | 0.001013s | 0.001003s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000996s | 0.001015s | 0.001001s | byte equality observed |
| cancel_after.test | 1 | 0.003305s | 0.003180s | 0.003401s | byte equality observed |
| cancel_after_select.test | 1 | 0.002759s | 0.002759s | 0.002770s | byte equality observed |
| cancel_at.test | 1 | 0.003582s | 0.003520s | 0.003575s | byte equality observed |
| cancel_at_select.test | 1 | 0.003395s | 0.003291s | 0.003605s | byte equality observed |
| co_composed.test | 10 | 0.001046s | 0.001036s | 0.001050s | byte equality observed |
| co_composed_select.test | 10 | 0.001003s | 0.000970s | 0.001013s | byte equality observed |
| compose.test | 1 | 0.001724s | 0.001691s | 0.001686s | byte equality observed |
| compose_select.test | 1 | 0.001417s | 0.001368s | 0.001397s | byte equality observed |
| composed.test | 1 | 0.002061s | 0.002008s | 0.002068s | byte equality observed |
| composed_select.test | 1 | 0.001490s | 0.001475s | 0.001509s | byte equality observed |
| config.test | 10 | 0.001103s | 0.001106s | 0.001137s | byte equality observed |
| config_select.test | 10 | 0.001110s | 0.001077s | 0.001079s | byte equality observed |
| connect_pipe.test | 10 | 0.001143s | 0.001163s | 0.001095s | byte equality observed |
| connect_pipe_select.test | 10 | 0.001111s | 0.001084s | 0.001135s | byte equality observed |
| consign.test | 10 | 0.001121s | 0.001104s | 0.001091s | byte equality observed |
| consign_select.test | 10 | 0.001040s | 0.001096s | 0.001040s | byte equality observed |
| deadline_timer.test | 1 | 0.002353s | 0.002314s | 0.002381s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002155s | 0.002076s | 0.002148s | byte equality observed |
| deferred.test | 10 | 0.001004s | 0.001011s | 0.001009s | byte equality observed |
| deferred_select.test | 10 | 0.000962s | 0.000965s | 0.000973s | byte equality observed |
| disposition.test | 10 | 0.001020s | 0.001018s | 0.001026s | byte equality observed |
| disposition_select.test | 10 | 0.001013s | 0.001007s | 0.001018s | byte equality observed |
| error.test | 10 | 0.000989s | 0.000983s | 0.000991s | byte equality observed |
| error_select.test | 10 | 0.000982s | 0.000989s | 0.000982s | byte equality observed |
| inline_executor.test | 10 | 0.000999s | 0.000995s | 0.000997s | byte equality observed |
| inline_executor_select.test | 10 | 0.000999s | 0.000993s | 0.001000s | byte equality observed |
| inline_or_executor.test | 10 | 0.001004s | 0.001005s | 0.000995s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.001002s | 0.001004s | 0.000995s | byte equality observed |
| io_context.test | 1 | 0.001923s | 0.001855s | 0.001950s | byte equality observed |
| io_context_select.test | 1 | 0.002257s | 0.002247s | 0.002265s | byte equality observed |
| io_context_strand.test | 1 | 0.002293s | 0.002234s | 0.002303s | byte equality observed |
| io_context_strand_select.test | 1 | 0.002049s | 0.002011s | 0.002041s | byte equality observed |
| ip_host_name.test | 10 | 0.001021s | 0.001008s | 0.001014s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000975s | 0.000961s | 0.000965s | byte equality observed |
| ip_icmp.test | 10 | 0.001007s | 0.000994s | 0.000986s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000999s | 0.000996s | 0.000986s | byte equality observed |
| ip_multicast.test | 10 | 0.001068s | 0.001073s | 0.001071s | byte equality observed |
| ip_multicast_select.test | 10 | 0.001056s | 0.001042s | 0.001048s | byte equality observed |
| ip_tcp.test | 10 | 0.001467s | 0.001451s | 0.001467s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001401s | 0.001385s | 0.001393s | byte equality observed |
| ip_udp.test | 10 | 0.001094s | 0.001081s | 0.001077s | byte equality observed |
| ip_udp_select.test | 10 | 0.001084s | 0.001066s | 0.001073s | byte equality observed |
| ip_unicast.test | 10 | 0.001045s | 0.001045s | 0.001039s | byte equality observed |
| ip_unicast_select.test | 10 | 0.001035s | 0.001036s | 0.001015s | byte equality observed |
| ip_v6_only.test | 10 | 0.001042s | 0.001074s | 0.001045s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.001025s | 0.001063s | 0.001022s | byte equality observed |
| is_read_buffered.test | 10 | 0.000956s | 0.001038s | 0.000973s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000963s | 0.001040s | 0.000954s | byte equality observed |
| is_write_buffered.test | 10 | 0.000974s | 0.001011s | 0.000959s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.001029s | 0.001019s | 0.000970s | byte equality observed |
| prepend.test | 10 | 0.001089s | 0.001104s | 0.001046s | byte equality observed |
| prepend_select.test | 10 | 0.001073s | 0.001063s | 0.001057s | byte equality observed |
| read.test | 10 | 0.001479s | 0.001432s | 0.001467s | byte equality observed |
| read_at.test | 10 | 0.001837s | 0.001849s | 0.001653s | byte equality observed |
| read_at_select.test | 10 | 0.001912s | 0.001805s | 0.001709s | byte equality observed |
| read_select.test | 10 | 0.001455s | 0.001428s | 0.001422s | byte equality observed |
| read_until.test | 10 | 0.001223s | 0.001197s | 0.001195s | byte equality observed |
| read_until_select.test | 10 | 0.001199s | 0.001174s | 0.001189s | byte equality observed |
| recycling_allocator.test | 10 | 0.001015s | 0.001014s | 0.000992s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.001028s | 0.000998s | 0.001032s | byte equality observed |
| signal_set.test | 10 | 0.001073s | 0.001032s | 0.001013s | byte equality observed |
| signal_set_select.test | 10 | 0.001045s | 0.001036s | 0.001029s | byte equality observed |
| socket_base.test | 10 | 0.001158s | 0.001132s | 0.001141s | byte equality observed |
| socket_base_select.test | 10 | 0.001143s | 0.001140s | 0.001102s | byte equality observed |
| spawn.test | 10 | 0.001242s | 0.001234s | 0.001234s | byte equality observed |
| spawn_select.test | 10 | 0.001246s | 0.001236s | 0.001232s | byte equality observed |
| static_thread_pool.test | 10 | 0.001020s | 0.000992s | 0.001007s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000996s | 0.000952s | 0.000957s | byte equality observed |
| strand.test | 1 | 0.001916s | 0.001937s | 0.002021s | byte equality observed |
| strand_select.test | 1 | 0.001644s | 0.001576s | 0.001674s | byte equality observed |
| streambuf.test | 10 | 0.001053s | 0.001055s | 0.001029s | byte equality observed |
| streambuf_select.test | 10 | 0.001062s | 0.001049s | 0.001026s | byte equality observed |
| thread_pool.test | 10 | 0.002214s | 0.002174s | 0.002273s | byte equality observed |
| thread_pool_select.test | 10 | 0.002188s | 0.002194s | 0.002266s | byte equality observed |
| write.test | 10 | 0.001508s | 0.001467s | 0.001515s | byte equality observed |
| write_at.test | 10 | 0.001642s | 0.001586s | 0.001571s | byte equality observed |
| write_at_select.test | 10 | 0.001625s | 0.001573s | 0.001619s | byte equality observed |
| write_select.test | 10 | 0.001497s | 0.001431s | 0.001491s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43632677224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
