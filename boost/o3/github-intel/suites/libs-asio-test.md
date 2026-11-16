# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.538928 | 3.493637 | 2.987400 | 0.001941 | 0.001918 | 0.002071 |
| any_completion_executor_select.test | RUN | 0.552788 | 3.516366 | 3.132184 | 0.001817 | 0.001701 | 0.001503 |
| any_completion_handler.test | RUN | 0.614542 | 3.127037 | 2.738458 | 0.001316 | 0.001366 | 0.001301 |
| any_completion_handler_select.test | RUN | 0.615961 | 3.231578 | 2.891692 | 0.001640 | 0.001802 | 0.001282 |
| any_io_executor.test | RUN | 0.561963 | 3.751899 | 3.251702 | 0.001674 | 0.001732 | 0.001462 |
| any_io_executor_select.test | RUN | 0.581917 | 3.731795 | 3.307126 | 0.001604 | 0.001789 | 0.001810 |
| append.test | RUN | 0.523210 | 2.972536 | 2.402184 | 0.001198 | 0.001423 | 0.001333 |
| append_select.test | RUN | 0.529131 | 3.038040 | 2.429533 | 0.001171 | 0.001510 | 0.001160 |
| as_tuple.test | RUN | 0.677198 | 3.637898 | 3.421382 | 0.001362 | 0.001307 | 0.001424 |
| as_tuple_select.test | RUN | 0.693989 | 3.557733 | 3.434973 | 0.001459 | 0.001365 | 0.001422 |
| associated_allocator.test | LINK | 0.128238 | 0.290692 | 0.361993 | — | — | — |
| associated_allocator_select.test | LINK | 0.133744 | 0.294442 | 0.359085 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.144691 | 0.318082 | 0.381104 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.146867 | 0.318627 | 0.391748 | — | — | — |
| associated_executor.test | LINK | 0.213264 | 0.556980 | 0.640995 | — | — | — |
| associated_executor_select.test | LINK | 0.211865 | 0.552232 | 0.636606 | — | — | — |
| associated_immediate_executor.test | LINK | 0.195555 | 0.511116 | 0.579039 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.194050 | 0.517350 | 0.575238 | — | — | — |
| associator.test | LINK | 0.105046 | 0.247869 | 0.302275 | — | — | — |
| associator_select.test | LINK | 0.106259 | 0.245196 | 0.308168 | — | — | — |
| awaitable.test | LINK | 0.105179 | 0.245285 | 0.293525 | — | — | — |
| awaitable_select.test | LINK | 0.105900 | 0.245506 | 0.298832 | — | — | — |
| basic_datagram_socket.test | LINK | 0.325176 | 0.773067 | 1.142514 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.330173 | 0.792790 | 1.174582 | — | — | — |
| basic_deadline_timer.test | LINK | 0.405478 | 0.912002 | 1.288601 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.407125 | 0.930093 | 1.315925 | — | — | — |
| basic_file.test | LINK | 0.108183 | 0.243229 | 0.295179 | — | — | — |
| basic_file_select.test | LINK | 0.110127 | 0.240957 | 0.299447 | — | — | — |
| basic_random_access_file.test | LINK | 0.107448 | 0.241753 | 0.291222 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.107042 | 0.243835 | 0.286284 | — | — | — |
| basic_raw_socket.test | LINK | 0.338871 | 0.760481 | 1.121853 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.347261 | 0.773734 | 1.141909 | — | — | — |
| basic_readable_pipe.test | LINK | 0.323239 | 0.738914 | 0.976056 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.337080 | 0.792623 | 1.169107 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.334458 | 0.776426 | 1.102151 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.339269 | 0.789812 | 1.139527 | — | — | — |
| basic_signal_set.test | LINK | 0.309444 | 0.714852 | 0.873002 | — | — | — |
| basic_signal_set_select.test | LINK | 0.320054 | 0.766462 | 1.078208 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.343007 | 0.776596 | 1.132059 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.337711 | 0.798839 | 1.149476 | — | — | — |
| basic_stream_file.test | LINK | 0.104258 | 0.241538 | 0.302396 | — | — | — |
| basic_stream_file_select.test | LINK | 0.105629 | 0.243375 | 0.304053 | — | — | — |
| basic_stream_socket.test | LINK | 0.336636 | 0.781533 | 1.118967 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.346686 | 0.804947 | 1.146413 | — | — | — |
| basic_streambuf.test | LINK | 0.162353 | 0.348537 | 0.432809 | — | — | — |
| basic_streambuf_select.test | LINK | 0.164348 | 0.351547 | 0.424470 | — | — | — |
| basic_waitable_timer.test | LINK | 0.316990 | 0.726336 | 1.040324 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.324787 | 0.752591 | 1.059781 | — | — | — |
| basic_writable_pipe.test | LINK | 0.322649 | 0.738188 | 0.972684 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.339272 | 0.790682 | 1.186480 | — | — | — |
| bind_allocator.test | RUN | 0.568946 | 2.996614 | 2.646943 | 0.001695 | 0.001810 | 0.001581 |
| bind_allocator_select.test | RUN | 0.582104 | 3.061359 | 2.633067 | 0.001452 | 0.001719 | 0.001661 |
| bind_cancellation_slot.test | RUN | 0.582420 | 3.082602 | 2.718026 | 0.000940 | 0.001020 | 0.000987 |
| bind_cancellation_slot_select.test | RUN | 0.595478 | 3.034674 | 2.612610 | 0.000977 | 0.001023 | 0.000937 |
| bind_executor.test | RUN | 0.391892 | 2.076775 | 1.696023 | 0.001730 | 0.001650 | 0.001800 |
| bind_executor_select.test | RUN | 0.404697 | 2.111355 | 1.672357 | 0.001584 | 0.001554 | 0.001495 |
| bind_immediate_executor.test | RUN | 0.297302 | 1.717954 | 1.065311 | 0.001019 | 0.000969 | 0.000959 |
| bind_immediate_executor_select.test | RUN | 0.310000 | 1.661002 | 1.173906 | 0.000988 | 0.000931 | 0.000934 |
| buffer.test | RUN | 0.179063 | 0.706595 | 0.625503 | 0.000979 | 0.001030 | 0.000916 |
| buffer_select.test | RUN | 0.178556 | 0.699621 | 0.631927 | 0.000964 | 0.000923 | 0.000910 |
| buffer_registration.test | LINK | 0.139122 | 0.346981 | 0.363760 | — | — | — |
| buffer_registration_select.test | LINK | 0.139455 | 0.344862 | 0.368289 | — | — | — |
| buffered_read_stream.test | RUN | 0.686830 | 4.684157 | 3.772986 | 0.001266 | 0.001564 | 0.001846 |
| buffered_read_stream_select.test | RUN | 0.692549 | 4.625554 | 3.844461 | 0.001235 | 0.001446 | 0.001696 |
| buffered_stream.test | RUN | 0.983440 | 7.423395 | 6.840084 | 0.001818 | 0.001734 | 0.001620 |
| buffered_stream_select.test | RUN | 1.020576 | 7.439244 | 6.609292 | 0.001916 | 0.001668 | 0.001776 |
| buffered_write_stream.test | RUN | 1.128048 | 6.382036 | 5.825026 | 0.001717 | 0.001799 | 0.001730 |
| buffered_write_stream_select.test | RUN | 1.168850 | 6.496372 | 5.656517 | 0.001956 | 0.001660 | 0.001568 |
| buffers_iterator.test | RUN | 0.327890 | 0.567675 | 0.893384 | 0.001236 | 0.001261 | 0.001217 |
| buffers_iterator_select.test | RUN | 0.325492 | 0.552068 | 0.893595 | 0.001351 | 0.001227 | 0.001217 |
| cancel_after.test | RUN | 0.956759 | 4.987346 | 4.196496 | 0.003913 | 0.003562 | 0.003135 |
| cancel_after_select.test | RUN | 0.966657 | 4.938658 | 4.169705 | 0.003775 | 0.003357 | 0.003534 |
| cancel_at.test | RUN | 0.882899 | 4.478873 | 4.139671 | 0.003236 | 0.002731 | 0.003088 |
| cancel_at_select.test | RUN | 0.878311 | 4.370259 | 4.082801 | 0.003195 | 0.003065 | 0.002819 |
| cancellation_signal.test | LINK | 0.095635 | 0.200762 | 0.257358 | — | — | — |
| cancellation_signal_select.test | LINK | 0.101165 | 0.200487 | 0.258750 | — | — | — |
| cancellation_state.test | LINK | 0.124800 | 0.202333 | 0.374286 | — | — | — |
| cancellation_state_select.test | LINK | 0.123149 | 0.201464 | 0.369938 | — | — | — |
| cancellation_type.test | LINK | 0.105768 | 0.159470 | 0.289764 | — | — | — |
| cancellation_type_select.test | LINK | 0.104174 | 0.159142 | 0.291070 | — | — | — |
| co_composed.test | RUN | 0.113755 | 0.159185 | 0.293228 | 0.001292 | 0.000912 | 0.001129 |
| co_composed_select.test | RUN | 0.112513 | 0.169776 | 0.293365 | 0.001147 | 0.001392 | 0.001181 |
| co_spawn.test | LINK | 0.113860 | 0.185403 | 0.291469 | — | — | — |
| co_spawn_select.test | LINK | 0.110133 | 0.242920 | 0.289978 | — | — | — |
| completion_condition.test | LINK | 0.144323 | 0.370987 | 0.401191 | — | — | — |
| completion_condition_select.test | LINK | 0.141762 | 0.372120 | 0.399912 | — | — | — |
| compose.test | RUN | 0.695263 | 3.819695 | 3.415216 | 0.001945 | 0.001860 | 0.001837 |
| compose_select.test | RUN | 0.706997 | 3.680911 | 3.368518 | 0.001700 | 0.001778 | 0.001861 |
| composed.test | RUN | 0.691116 | 3.724625 | 3.271048 | 0.001684 | 0.001546 | 0.001600 |
| composed_select.test | RUN | 0.681897 | 3.652004 | 3.281884 | 0.001495 | 0.001431 | 0.001380 |
| config.test | RUN | 0.348658 | 2.385941 | 1.414288 | 0.001682 | 0.001539 | 0.001249 |
| config_select.test | RUN | 0.374275 | 2.478501 | 1.603295 | 0.001296 | 0.001388 | 0.001240 |
| connect.test | LINK | 1.133488 | 8.072847 | 7.080974 | — | — | — |
| connect_select.test | LINK | 1.149938 | 7.993035 | 7.055298 | — | — | — |
| connect_pipe.test | RUN | 0.594450 | 3.019480 | 2.620823 | 0.001299 | 0.001635 | 0.001348 |
| connect_pipe_select.test | RUN | 0.618197 | 3.157332 | 2.773693 | 0.001237 | 0.001425 | 0.001342 |
| consign.test | RUN | 0.522465 | 2.978439 | 2.430451 | 0.001460 | 0.001545 | 0.001377 |
| consign_select.test | RUN | 0.537527 | 3.029722 | 2.386913 | 0.001250 | 0.001489 | 0.001220 |
| coroutine.test | LINK | 0.111646 | 0.281739 | 0.336167 | — | — | — |
| coroutine_select.test | LINK | 0.115964 | 0.284608 | 0.331064 | — | — | — |
| deadline_timer.test | RUN | 0.780199 | 3.775252 | 3.420909 | 0.002797 | 0.002600 | 0.003230 |
| deadline_timer_select.test | RUN | 0.780489 | 3.742233 | 3.383126 | 0.002322 | 0.003142 | 0.002579 |
| deferred.test | RUN | 0.120408 | 0.258479 | 0.318727 | 0.001258 | 0.001253 | 0.001363 |
| deferred_select.test | RUN | 0.122182 | 0.260432 | 0.318941 | 0.001120 | 0.001417 | 0.001199 |
| detached.test | LINK | 0.134481 | 0.291436 | 0.353716 | — | — | — |
| detached_select.test | LINK | 0.138136 | 0.285839 | 0.354625 | — | — | — |
| disposition.test | RUN | 0.141712 | 0.714887 | 0.669599 | 0.001052 | 0.001290 | 0.001329 |
| disposition_select.test | RUN | 0.132097 | 0.697774 | 0.669359 | 0.000997 | 0.001330 | 0.001378 |
| error.test | RUN | 0.120145 | 0.686189 | 0.590783 | 0.000994 | 0.001401 | 0.001338 |
| error_select.test | RUN | 0.119624 | 0.676872 | 0.591023 | 0.000943 | 0.001306 | 0.001409 |
| file_base.test | LINK | 0.150310 | 0.555869 | 0.648908 | — | — | — |
| file_base_select.test | LINK | 0.147647 | 0.549868 | 0.576437 | — | — | — |
| fwd_first.test | LINK | 0.347980 | 0.958012 | 1.161025 | — | — | — |
| fwd_last.test | LINK | 0.345501 | 0.853752 | 1.159693 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.128106 | 0.324371 | 0.416700 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.127334 | 0.322459 | 0.411672 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.580175 | 3.028962 | 2.420179 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.574264 | 3.132665 | 2.418736 | — | — | — |
| generic_raw_protocol.test | LINK | 0.579348 | 3.044657 | 2.400125 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.571456 | 3.153162 | 2.405694 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.494642 | 2.577576 | 2.058367 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.490576 | 2.607785 | 2.054551 | — | — | — |
| generic_stream_protocol.test | LINK | 0.525990 | 2.765015 | 2.230995 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.524554 | 2.838388 | 2.224657 | — | — | — |
| high_resolution_timer.test | LINK | 0.218442 | 0.476324 | 0.648050 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.221105 | 0.500398 | 0.673604 | — | — | — |
| immediate.test | LINK | 0.150469 | 0.371632 | 0.397048 | — | — | — |
| immediate_select.test | LINK | 0.149250 | 0.370924 | 0.395805 | — | — | — |
| inline_executor.test | RUN | 0.185675 | 0.584986 | 0.600404 | 0.001032 | 0.000987 | 0.000878 |
| inline_executor_select.test | RUN | 0.185403 | 0.584280 | 0.600273 | 0.001009 | 0.001051 | 0.000858 |
| inline_or_executor.test | RUN | 0.307518 | 1.789213 | 1.202192 | 0.000987 | 0.000988 | 0.000954 |
| inline_or_executor_select.test | RUN | 0.313586 | 1.832605 | 1.313701 | 0.000937 | 0.001044 | 0.000935 |
| io_context.test | RUN | 0.451406 | 2.746523 | 2.112803 | 0.001966 | 0.001916 | 0.001954 |
| io_context_select.test | RUN | 0.456359 | 2.679624 | 2.119507 | 0.001605 | 0.002015 | 0.001915 |
| io_context_strand.test | RUN | 0.433339 | 2.290014 | 1.829235 | 0.001762 | 0.001846 | 0.001828 |
| io_context_strand_select.test | RUN | 0.443058 | 2.271121 | 1.801602 | 0.001538 | 0.001734 | 0.001482 |
| ip_address.test | LINK | 0.154171 | 0.516236 | 0.525904 | — | — | — |
| ip_address_select.test | LINK | 0.153545 | 0.518520 | 0.537805 | — | — | — |
| ip_address_v4.test | LINK | 0.153977 | 0.544045 | 0.840568 | — | — | — |
| ip_address_v4_select.test | LINK | 0.154037 | 0.543418 | 0.905316 | — | — | — |
| ip_address_v6.test | LINK | 0.178658 | 0.718447 | 1.121183 | — | — | — |
| ip_address_v6_select.test | LINK | 0.178806 | 0.712126 | 1.101623 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.135434 | 0.338046 | 0.716265 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.135547 | 0.338794 | 0.693427 | — | — | — |
| ip_basic_resolver.test | LINK | 0.220953 | 0.498173 | 1.045960 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.223345 | 0.511794 | 1.060922 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.073642 | 0.161830 | 0.290440 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.073744 | 0.172068 | 0.287950 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.134301 | 0.492721 | 0.674734 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.134372 | 0.399646 | 0.679026 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.126361 | 0.490061 | 0.649520 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.126188 | 0.480764 | 0.660563 | — | — | — |
| ip_host_name.test | RUN | 0.135442 | 0.657915 | 0.754982 | 0.001006 | 0.001469 | 0.001306 |
| ip_host_name_select.test | RUN | 0.135125 | 0.655896 | 0.747587 | 0.000855 | 0.001278 | 0.001095 |
| ip_icmp.test | RUN | 0.719721 | 6.423273 | 5.059058 | 0.000943 | 0.001455 | 0.001337 |
| ip_icmp_select.test | RUN | 0.718291 | 6.570076 | 4.966538 | 0.001017 | 0.001432 | 0.001310 |
| ip_multicast.test | RUN | 0.393251 | 3.154086 | 2.799288 | 0.001095 | 0.001436 | 0.001432 |
| ip_multicast_select.test | RUN | 0.402758 | 3.121304 | 2.759604 | 0.001045 | 0.001529 | 0.001454 |
| ip_resolver_query_base.test | LINK | 0.084014 | 0.262830 | 0.309198 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.082220 | 0.263730 | 0.311651 | — | — | — |
| ip_tcp.test | RUN | 1.057796 | 9.438605 | 7.932707 | 0.001351 | 0.001732 | 0.001950 |
| ip_tcp_select.test | RUN | 1.063713 | 9.839182 | 7.599953 | 0.001564 | 0.001815 | 0.002018 |
| ip_udp.test | RUN | 0.766871 | 6.680706 | 5.374957 | 0.001180 | 0.001539 | 0.001210 |
| ip_udp_select.test | RUN | 0.764237 | 6.842378 | 5.270704 | 0.001170 | 0.001538 | 0.001414 |
| ip_unicast.test | RUN | 0.368229 | 2.858938 | 2.477881 | 0.001090 | 0.001545 | 0.001334 |
| ip_unicast_select.test | RUN | 0.372665 | 2.894006 | 2.458265 | 0.001058 | 0.001353 | 0.001324 |
| ip_v6_only.test | RUN | 0.386458 | 2.980535 | 2.568915 | 0.001140 | 0.001507 | 0.001385 |
| ip_v6_only_select.test | RUN | 0.394200 | 3.068207 | 2.549027 | 0.000992 | 0.001491 | 0.001335 |
| is_read_buffered.test | RUN | 0.259788 | 0.864192 | 1.320520 | 0.000944 | 0.001228 | 0.001194 |
| is_read_buffered_select.test | RUN | 0.263955 | 0.882878 | 1.354231 | 0.000876 | 0.001232 | 0.001132 |
| is_write_buffered.test | RUN | 0.258666 | 0.872523 | 1.297016 | 0.000949 | 0.001208 | 0.001126 |
| is_write_buffered_select.test | RUN | 0.263129 | 0.890848 | 1.320316 | 0.000968 | 0.001184 | 0.001197 |
| local_basic_endpoint.test | LINK | 0.125798 | 0.487178 | 0.686926 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.125387 | 0.482216 | 0.682687 | — | — | — |
| local_connect_pair.test | LINK | 0.350735 | 2.892301 | 2.337789 | — | — | — |
| local_connect_pair_select.test | LINK | 0.355908 | 2.912090 | 2.303414 | — | — | — |
| local_datagram_protocol.test | LINK | 0.483519 | 3.775618 | 3.302950 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.496083 | 3.824578 | 3.231115 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.492354 | 3.720904 | 3.230517 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.492219 | 3.835698 | 3.230306 | — | — | — |
| local_stream_protocol.test | LINK | 0.451700 | 3.556296 | 3.041964 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.463952 | 3.604491 | 2.999307 | — | — | — |
| placeholders.test | LINK | 0.081377 | 0.254174 | 0.315122 | — | — | — |
| placeholders_select.test | LINK | 0.079671 | 0.256185 | 0.310315 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.223028 | 0.746684 | 0.958359 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.229687 | 0.783114 | 1.158440 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.224014 | 0.730146 | 0.965842 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.230019 | 0.784870 | 1.172530 | — | — | — |
| posix_descriptor_base.test | LINK | 0.086487 | 0.272728 | 0.312344 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.085076 | 0.265120 | 0.314538 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.571995 | 3.683995 | 3.094808 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.617503 | 3.711784 | 3.175165 | — | — | — |
| prepend.test | RUN | 0.511421 | 2.941809 | 2.423044 | 0.001300 | 0.001378 | 0.001228 |
| prepend_select.test | RUN | 0.531420 | 3.027045 | 2.397724 | 0.001202 | 0.001414 | 0.001180 |
| random_access_file.test | LINK | 0.296135 | 0.670202 | 0.781895 | — | — | — |
| random_access_file_select.test | LINK | 0.316056 | 0.713844 | 0.981794 | — | — | — |
| read.test | RUN | 1.719008 | 18.746699 | 14.044584 | 0.001994 | 0.001774 | 0.001805 |
| read_select.test | RUN | 1.723714 | 18.731592 | 14.383555 | 0.001788 | 0.001950 | 0.001938 |
| read_at.test | RUN | 1.716735 | 24.658390 | 18.803983 | 0.002064 | 0.002469 | 0.002082 |
| read_at_select.test | RUN | 1.727272 | 24.911431 | 18.752266 | 0.002122 | 0.002432 | 0.002170 |
| read_until.test | RUN | 0.878254 | 7.305873 | 5.388972 | 0.001451 | 0.001686 | 0.001416 |
| read_until_select.test | RUN | 0.885470 | 7.373047 | 5.573968 | 0.001620 | 0.001657 | 0.001375 |
| readable_pipe.test | LINK | 0.546375 | 3.037327 | 2.419361 | — | — | — |
| readable_pipe_select.test | LINK | 0.571090 | 3.200973 | 2.585948 | — | — | — |
| recycling_allocator.test | RUN | 0.164501 | 0.422315 | 0.476676 | 0.001249 | 0.001449 | 0.001164 |
| recycling_allocator_select.test | RUN | 0.168348 | 0.424831 | 0.480203 | 0.001396 | 0.001538 | 0.001386 |
| redirect_disposition.test | LINK | 0.739279 | 4.219113 | 3.770703 | — | — | — |
| redirect_disposition_select.test | LINK | 0.737995 | 4.227682 | 3.707517 | — | — | — |
| redirect_error.test | LINK | 0.648181 | 3.523829 | 3.230237 | — | — | — |
| redirect_error_select.test | LINK | 0.649859 | 3.522755 | 3.221927 | — | — | — |
| registered_buffer.test | LINK | 0.157298 | 0.346873 | 0.441954 | — | — | — |
| registered_buffer_select.test | LINK | 0.158635 | 0.347871 | 0.423752 | — | — | — |
| signal_set.test | RUN | 0.527890 | 2.926568 | 2.293909 | 0.001256 | 0.001449 | 0.001271 |
| signal_set_select.test | RUN | 0.552666 | 3.031054 | 2.488400 | 0.001450 | 0.001594 | 0.001352 |
| signal_set_base.test | LINK | 0.127700 | 0.268577 | 0.313903 | — | — | — |
| signal_set_base_select.test | LINK | 0.125346 | 0.267048 | 0.316414 | — | — | — |
| socket_base.test | RUN | 0.651039 | 4.315176 | 3.469200 | 0.001500 | 0.001401 | 0.001579 |
| socket_base_select.test | RUN | 0.661515 | 4.187350 | 3.470699 | 0.001415 | 0.001370 | 0.001440 |
| spawn.test | RUN | 1.151353 | 7.094405 | 6.086557 | 0.001588 | 0.001753 | 0.001773 |
| spawn_select.test | RUN | 1.158048 | 7.137352 | 6.023040 | 0.001598 | 0.001685 | 0.001480 |
| static_thread_pool.test | RUN | 0.290026 | 0.657819 | 0.775262 | 0.001309 | 0.001469 | 0.001491 |
| static_thread_pool_select.test | RUN | 0.305704 | 0.704037 | 1.012169 | 0.001396 | 0.001210 | 0.001288 |
| steady_timer.test | LINK | 0.330427 | 0.730954 | 1.096477 | — | — | — |
| steady_timer_select.test | LINK | 0.334947 | 0.761405 | 1.125806 | — | — | — |
| strand.test | RUN | 0.688517 | 4.037975 | 3.586801 | 0.002006 | 0.002230 | 0.001942 |
| strand_select.test | RUN | 0.708356 | 3.977746 | 3.612276 | 0.001608 | 0.001592 | 0.002025 |
| stream_file.test | LINK | 0.302111 | 0.665567 | 0.836978 | — | — | — |
| stream_file_select.test | LINK | 0.317109 | 0.722222 | 1.002069 | — | — | — |
| streambuf.test | RUN | 0.181937 | 0.511001 | 0.560832 | 0.000981 | 0.001046 | 0.001174 |
| streambuf_select.test | RUN | 0.168989 | 0.387460 | 0.398260 | 0.000988 | 0.000995 | 0.001002 |
| system_timer.test | LINK | 0.460808 | 2.587991 | 2.213300 | — | — | — |
| system_timer_select.test | LINK | 0.469508 | 2.554792 | 2.045198 | — | — | — |
| system_context.test | LINK | 0.198757 | 0.436567 | 0.477954 | — | — | — |
| system_context_select.test | LINK | 0.206612 | 0.466930 | 0.601158 | — | — | — |
| system_executor.test | LINK | 0.268654 | 1.451744 | 0.975468 | — | — | — |
| system_executor_select.test | LINK | 0.278945 | 1.429334 | 1.077155 | — | — | — |
| this_coro.test | LINK | 0.074238 | 0.161748 | 0.187001 | — | — | — |
| this_coro_select.test | LINK | 0.074229 | 0.163669 | 0.189442 | — | — | — |
| thread_pool.test | RUN | 0.322425 | 1.882049 | 1.263081 | 0.001717 | 0.001608 | 0.001660 |
| thread_pool_select.test | RUN | 0.337218 | 1.902527 | 1.367696 | 0.001661 | 0.001705 | 0.001670 |
| time_traits.test | LINK | 0.172437 | 0.342492 | 0.387621 | — | — | — |
| time_traits_select.test | LINK | 0.167566 | 0.345265 | 0.386766 | — | — | — |
| ts_buffer.test | LINK | 0.159075 | 0.523300 | 0.405615 | — | — | — |
| ts_buffer_select.test | LINK | 0.160047 | 0.572053 | 0.410824 | — | — | — |
| ts_executor.test | LINK | 0.228960 | 0.813927 | 0.634209 | — | — | — |
| ts_executor_select.test | LINK | 0.243593 | 0.854379 | 0.760284 | — | — | — |
| ts_internet.test | LINK | 0.253830 | 0.876753 | 1.103548 | — | — | — |
| ts_internet_select.test | LINK | 0.260603 | 0.895030 | 1.306229 | — | — | — |
| ts_io_context.test | LINK | 0.211944 | 0.671293 | 0.609344 | — | — | — |
| ts_io_context_select.test | LINK | 0.207918 | 0.712544 | 0.983066 | — | — | — |
| ts_net.test | LINK | 0.298852 | 1.045945 | 1.568553 | — | — | — |
| ts_net_select.test | LINK | 0.306178 | 1.092609 | 1.593885 | — | — | — |
| ts_netfwd.test | LINK | 0.298256 | 1.056383 | 1.558547 | — | — | — |
| ts_netfwd_select.test | LINK | 0.304466 | 1.091669 | 1.605950 | — | — | — |
| ts_socket.test | LINK | 0.244404 | 0.830404 | 1.210374 | — | — | — |
| ts_socket_select.test | LINK | 0.247555 | 0.840481 | 1.228083 | — | — | — |
| ts_timer.test | LINK | 0.217801 | 0.734532 | 1.044071 | — | — | — |
| ts_timer_select.test | LINK | 0.220917 | 0.759905 | 1.069688 | — | — | — |
| use_awaitable.test | LINK | 0.071404 | 0.241140 | 0.300925 | — | — | — |
| use_awaitable_select.test | LINK | 0.070710 | 0.244846 | 0.298906 | — | — | — |
| wait_traits.test | LINK | 0.071909 | 0.243921 | 0.303544 | — | — | — |
| wait_traits_select.test | LINK | 0.071956 | 0.244876 | 0.300598 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.071754 | 0.242393 | 0.297716 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.071746 | 0.247114 | 0.293834 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.070626 | 0.243715 | 0.305087 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.071576 | 0.243778 | 0.297648 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.070256 | 0.241978 | 0.295427 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.071782 | 0.244464 | 0.290041 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.071302 | 0.239008 | 0.294621 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.072081 | 0.243451 | 0.288106 | — | — | — |
| windows_object_handle.test | LINK | 0.202937 | 0.682027 | 0.789803 | — | — | — |
| windows_object_handle_select.test | LINK | 0.215304 | 0.721598 | 1.005927 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.209716 | 0.714063 | 0.876401 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.221395 | 0.760600 | 1.074398 | — | — | — |
| windows_random_access_handle.test | LINK | 0.203424 | 0.675897 | 0.782467 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.214155 | 0.718516 | 0.976157 | — | — | — |
| windows_stream_handle.test | LINK | 0.205622 | 0.664633 | 0.779414 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.212854 | 0.722570 | 0.990402 | — | — | — |
| writable_pipe.test | LINK | 0.399408 | 2.955830 | 2.511687 | — | — | — |
| writable_pipe_select.test | LINK | 0.514204 | 3.113363 | 2.682989 | — | — | — |
| write.test | RUN | 1.707066 | 15.550801 | 13.951495 | 0.001954 | 0.001986 | 0.001784 |
| write_select.test | RUN | 1.714656 | 15.743341 | 13.950011 | 0.001944 | 0.001839 | 0.001779 |
| write_at.test | RUN | 1.766821 | 21.077702 | 17.519396 | 0.001929 | 0.002012 | 0.001953 |
| write_at_select.test | RUN | 1.779430 | 21.181529 | 17.847514 | 0.002103 | 0.002058 | 0.001951 |
| any_executor.test | RUN | 0.698310 | 6.911284 | 5.663464 | 0.001704 | 0.001712 | 0.001515 |
| blocking.test | RUN | 1.506498 | 9.107986 | 11.514970 | 0.003300 | 0.003193 | 0.003332 |
| blocking_adaptation.test | RUN | 0.759029 | 3.881877 | 5.155015 | 0.002218 | 0.002525 | 0.002150 |
| context_as.test | RUN | 0.434221 | 2.723021 | 1.756763 | 0.001369 | 0.001642 | 0.001409 |
| executor.test | RUN | 0.111528 | 0.241503 | 0.308167 | 0.001232 | 0.001392 | 0.001212 |
| inline_exception_handling.test | RUN | 1.498475 | 8.232946 | 11.330830 | 0.003321 | 0.002303 | 0.002317 |
| invocable_archetype.test | RUN | 0.106845 | 0.242854 | 0.311696 | 0.001226 | 0.001377 | 0.001131 |
| mapping.test | RUN | 1.509385 | 8.710668 | 11.230904 | 0.002460 | 0.002344 | 0.002348 |
| outstanding_work.test | RUN | 0.685578 | 3.558838 | 4.985583 | 0.002078 | 0.002052 | 0.002213 |
| prefer_only.test | RUN | 0.221020 | 1.444255 | 1.104520 | 0.001229 | 0.001370 | 0.001196 |
| relationship.test | RUN | 0.506096 | 3.354031 | 5.017954 | 0.001567 | 0.001515 | 0.001986 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.995×, 0.990× | 1.007× |
| clang | 0.991× | 1.001×, 0.982× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 2 | 0.001277s | 0.001263s | 0.001253s | byte equality observed |
| any_completion_executor_select.test | 2 | 0.001238s | 0.001273s | 0.001299s | byte equality observed |
| any_completion_handler.test | 10 | 0.001046s | 0.001015s | 0.001020s | byte equality observed |
| any_completion_handler_select.test | 10 | 0.001045s | 0.001027s | 0.001041s | byte equality observed |
| any_io_executor.test | 4 | 0.001241s | 0.001225s | 0.001203s | byte equality observed |
| any_io_executor_select.test | 3 | 0.001220s | 0.001193s | 0.001299s | byte equality observed |
| append.test | 10 | 0.000987s | 0.000986s | 0.000978s | byte equality observed |
| append_select.test | 10 | 0.000983s | 0.000984s | 0.000980s | byte equality observed |
| as_tuple.test | 10 | 0.001053s | 0.001030s | 0.001040s | byte equality observed |
| as_tuple_select.test | 9 | 0.000997s | 0.000973s | 0.000965s | byte equality observed |
| bind_allocator.test | 1 | 0.001513s | 0.001514s | 0.001479s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001188s | 0.001237s | 0.001212s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.000904s | 0.000913s | 0.000876s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000813s | 0.000827s | 0.000791s | byte equality observed |
| bind_executor.test | 1 | 0.001516s | 0.001478s | 0.001499s | byte equality observed |
| bind_executor_select.test | 1 | 0.001745s | 0.001786s | 0.001672s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000931s | 0.000948s | 0.000912s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000886s | 0.000884s | 0.000868s | byte equality observed |
| buffer.test | 10 | 0.000848s | 0.000838s | 0.000841s | byte equality observed |
| buffer_select.test | 10 | 0.000824s | 0.000837s | 0.000812s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001025s | 0.001030s | 0.001011s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001012s | 0.001015s | 0.001015s | byte equality observed |
| buffered_stream.test | 10 | 0.001032s | 0.000995s | 0.000989s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001033s | 0.000996s | 0.000991s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001016s | 0.001027s | 0.001008s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001020s | 0.001025s | 0.000996s | byte equality observed |
| buffers_iterator.test | 10 | 0.000821s | 0.000814s | 0.000821s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000818s | 0.000794s | 0.000774s | byte equality observed |
| cancel_after.test | 1 | 0.003412s | 0.003409s | 0.003128s | byte equality observed |
| cancel_after_select.test | 1 | 0.002824s | 0.002847s | 0.002638s | byte equality observed |
| cancel_at.test | 1 | 0.003570s | 0.003710s | 0.003436s | byte equality observed |
| cancel_at_select.test | 1 | 0.003474s | 0.003460s | 0.003284s | byte equality observed |
| co_composed.test | 10 | 0.000885s | 0.000894s | 0.000832s | byte equality observed |
| co_composed_select.test | 10 | 0.000815s | 0.000830s | 0.000796s | byte equality observed |
| compose.test | 1 | 0.001577s | 0.001565s | 0.001564s | byte equality observed |
| compose_select.test | 1 | 0.001249s | 0.001278s | 0.001232s | byte equality observed |
| composed.test | 1 | 0.001886s | 0.001824s | 0.001820s | byte equality observed |
| composed_select.test | 1 | 0.001464s | 0.001527s | 0.001357s | byte equality observed |
| config.test | 10 | 0.000959s | 0.000932s | 0.000893s | byte equality observed |
| config_select.test | 10 | 0.000911s | 0.000901s | 0.000903s | byte equality observed |
| connect_pipe.test | 10 | 0.000903s | 0.000915s | 0.000917s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000898s | 0.000886s | 0.000918s | byte equality observed |
| consign.test | 10 | 0.000888s | 0.000907s | 0.000895s | byte equality observed |
| consign_select.test | 10 | 0.000866s | 0.000866s | 0.000839s | byte equality observed |
| deadline_timer.test | 1 | 0.002311s | 0.002312s | 0.002234s | byte equality observed |
| deadline_timer_select.test | 1 | 0.001993s | 0.001991s | 0.002018s | byte equality observed |
| deferred.test | 10 | 0.000841s | 0.000826s | 0.000815s | byte equality observed |
| deferred_select.test | 10 | 0.000752s | 0.000769s | 0.000742s | byte equality observed |
| disposition.test | 10 | 0.000796s | 0.000803s | 0.000783s | byte equality observed |
| disposition_select.test | 10 | 0.000792s | 0.000795s | 0.000781s | byte equality observed |
| error.test | 10 | 0.000779s | 0.000771s | 0.000759s | byte equality observed |
| error_select.test | 10 | 0.000778s | 0.000780s | 0.000755s | byte equality observed |
| inline_executor.test | 10 | 0.000779s | 0.000780s | 0.000773s | byte equality observed |
| inline_executor_select.test | 10 | 0.000783s | 0.000780s | 0.000769s | byte equality observed |
| inline_or_executor.test | 10 | 0.000790s | 0.000789s | 0.000780s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000794s | 0.000794s | 0.000781s | byte equality observed |
| io_context.test | 1 | 0.001832s | 0.001807s | 0.001893s | byte equality observed |
| io_context_select.test | 1 | 0.002197s | 0.002129s | 0.002103s | byte equality observed |
| io_context_strand.test | 1 | 0.002155s | 0.002160s | 0.002096s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001832s | 0.001820s | 0.001834s | byte equality observed |
| ip_host_name.test | 10 | 0.000857s | 0.000862s | 0.000845s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000771s | 0.000773s | 0.000764s | byte equality observed |
| ip_icmp.test | 10 | 0.000801s | 0.000795s | 0.000773s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000790s | 0.000802s | 0.000771s | byte equality observed |
| ip_multicast.test | 10 | 0.000854s | 0.000858s | 0.000846s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000840s | 0.000836s | 0.000827s | byte equality observed |
| ip_tcp.test | 10 | 0.001064s | 0.001053s | 0.001043s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001027s | 0.001016s | 0.001000s | byte equality observed |
| ip_udp.test | 10 | 0.000881s | 0.000865s | 0.000856s | byte equality observed |
| ip_udp_select.test | 10 | 0.000861s | 0.000862s | 0.000842s | byte equality observed |
| ip_unicast.test | 10 | 0.000830s | 0.000828s | 0.000806s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000818s | 0.000817s | 0.000802s | byte equality observed |
| ip_v6_only.test | 10 | 0.000830s | 0.000820s | 0.000813s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000820s | 0.000814s | 0.000794s | byte equality observed |
| is_read_buffered.test | 10 | 0.000769s | 0.000756s | 0.000750s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000769s | 0.000757s | 0.000757s | byte equality observed |
| is_write_buffered.test | 10 | 0.000760s | 0.000756s | 0.000748s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000767s | 0.000759s | 0.000742s | byte equality observed |
| prepend.test | 10 | 0.000821s | 0.000844s | 0.000810s | byte equality observed |
| prepend_select.test | 10 | 0.000804s | 0.000851s | 0.000794s | byte equality observed |
| read.test | 10 | 0.001114s | 0.001177s | 0.001078s | byte equality observed |
| read_at.test | 10 | 0.001329s | 0.001481s | 0.001308s | byte equality observed |
| read_at_select.test | 10 | 0.001331s | 0.001444s | 0.001303s | byte equality observed |
| read_select.test | 10 | 0.001115s | 0.001204s | 0.001069s | byte equality observed |
| read_until.test | 10 | 0.000922s | 0.000972s | 0.000887s | byte equality observed |
| read_until_select.test | 10 | 0.000984s | 0.000963s | 0.000881s | byte equality observed |
| recycling_allocator.test | 10 | 0.000830s | 0.000814s | 0.000747s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000829s | 0.000811s | 0.000815s | byte equality observed |
| signal_set.test | 10 | 0.000842s | 0.000836s | 0.000832s | byte equality observed |
| signal_set_select.test | 10 | 0.000851s | 0.000862s | 0.000849s | byte equality observed |
| socket_base.test | 10 | 0.000917s | 0.000918s | 0.000910s | byte equality observed |
| socket_base_select.test | 10 | 0.000916s | 0.000907s | 0.000919s | byte equality observed |
| spawn.test | 10 | 0.000997s | 0.000996s | 0.000967s | byte equality observed |
| spawn_select.test | 10 | 0.000984s | 0.000976s | 0.000954s | byte equality observed |
| static_thread_pool.test | 10 | 0.000835s | 0.000811s | 0.000829s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000787s | 0.000804s | 0.000743s | byte equality observed |
| strand.test | 1 | 0.001709s | 0.001750s | 0.001760s | byte equality observed |
| strand_select.test | 1 | 0.001424s | 0.001501s | 0.001504s | byte equality observed |
| streambuf.test | 10 | 0.000894s | 0.000891s | 0.000887s | byte equality observed |
| streambuf_select.test | 10 | 0.000842s | 0.000864s | 0.000832s | byte equality observed |
| thread_pool.test | 10 | 0.001595s | 0.001604s | 0.001595s | byte equality observed |
| thread_pool_select.test | 10 | 0.001581s | 0.001563s | 0.001525s | byte equality observed |
| write.test | 10 | 0.001210s | 0.001157s | 0.001164s | byte equality observed |
| write_at.test | 10 | 0.001318s | 0.001331s | 0.001283s | byte equality observed |
| write_at_select.test | 10 | 0.001305s | 0.001307s | 0.001279s | byte equality observed |
| write_select.test | 10 | 0.001193s | 0.001168s | 0.001200s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/43822097733).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
