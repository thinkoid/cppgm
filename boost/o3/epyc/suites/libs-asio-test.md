# libs/asio/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| any_completion_executor.test | RUN | 0.492410 | 2.899892 | 2.465828 | 0.002322 | 0.002268 | 0.002036 |
| any_completion_executor_select.test | RUN | 0.498998 | 2.934687 | 2.585065 | 0.002091 | 0.002244 | 0.002255 |
| any_completion_handler.test | RUN | 0.517800 | 2.646039 | 2.330524 | 0.001618 | 0.001547 | 0.001742 |
| any_completion_handler_select.test | RUN | 0.543284 | 2.727514 | 2.463342 | 0.001528 | 0.001890 | 0.001800 |
| any_io_executor.test | RUN | 0.517678 | 3.051259 | 2.707316 | 0.001657 | 0.002339 | 0.002246 |
| any_io_executor_select.test | RUN | 0.518857 | 3.018670 | 2.821055 | 0.002086 | 0.002182 | 0.002004 |
| append.test | RUN | 0.478323 | 2.474322 | 2.070915 | 0.001721 | 0.001746 | 0.001705 |
| append_select.test | RUN | 0.470488 | 2.536044 | 2.058407 | 0.001633 | 0.001708 | 0.001628 |
| as_tuple.test | RUN | 0.609065 | 2.939355 | 2.843822 | 0.001565 | 0.001713 | 0.001447 |
| as_tuple_select.test | RUN | 0.606154 | 2.919061 | 2.791124 | 0.001566 | 0.001594 | 0.001305 |
| associated_allocator.test | LINK | 0.129191 | 0.247492 | 0.304693 | — | — | — |
| associated_allocator_select.test | LINK | 0.130733 | 0.254159 | 0.311925 | — | — | — |
| associated_cancellation_slot.test | LINK | 0.139974 | 0.274327 | 0.332097 | — | — | — |
| associated_cancellation_slot_select.test | LINK | 0.135525 | 0.276131 | 0.357909 | — | — | — |
| associated_executor.test | LINK | 0.199802 | 0.479725 | 0.546628 | — | — | — |
| associated_executor_select.test | LINK | 0.198938 | 0.471099 | 0.562374 | — | — | — |
| associated_immediate_executor.test | LINK | 0.180345 | 0.442217 | 0.521150 | — | — | — |
| associated_immediate_executor_select.test | LINK | 0.185424 | 0.425736 | 0.479320 | — | — | — |
| associator.test | LINK | 0.105244 | 0.214991 | 0.264424 | — | — | — |
| associator_select.test | LINK | 0.102589 | 0.200814 | 0.248421 | — | — | — |
| awaitable.test | LINK | 0.103412 | 0.204460 | 0.244996 | — | — | — |
| awaitable_select.test | LINK | 0.105208 | 0.207071 | 0.253424 | — | — | — |
| basic_datagram_socket.test | LINK | 0.311117 | 0.641937 | 0.915589 | — | — | — |
| basic_datagram_socket_select.test | LINK | 0.315033 | 0.666551 | 0.951882 | — | — | — |
| basic_deadline_timer.test | LINK | 0.364483 | 0.730043 | 1.064067 | — | — | — |
| basic_deadline_timer_select.test | LINK | 0.377527 | 0.750623 | 1.079115 | — | — | — |
| basic_file.test | LINK | 0.101870 | 0.200070 | 0.260823 | — | — | — |
| basic_file_select.test | LINK | 0.104702 | 0.203822 | 0.272765 | — | — | — |
| basic_random_access_file.test | LINK | 0.102649 | 0.200074 | 0.258075 | — | — | — |
| basic_random_access_file_select.test | LINK | 0.102421 | 0.199109 | 0.257074 | — | — | — |
| basic_raw_socket.test | LINK | 0.305269 | 0.652438 | 0.933653 | — | — | — |
| basic_raw_socket_select.test | LINK | 0.315566 | 0.659271 | 0.952026 | — | — | — |
| basic_readable_pipe.test | LINK | 0.296193 | 0.624844 | 0.812910 | — | — | — |
| basic_readable_pipe_select.test | LINK | 0.307199 | 0.654540 | 0.997198 | — | — | — |
| basic_seq_packet_socket.test | LINK | 0.308140 | 0.650084 | 0.938300 | — | — | — |
| basic_seq_packet_socket_select.test | LINK | 0.321969 | 0.659283 | 0.957896 | — | — | — |
| basic_signal_set.test | LINK | 0.287785 | 0.605479 | 0.736673 | — | — | — |
| basic_signal_set_select.test | LINK | 0.297187 | 0.637678 | 0.901066 | — | — | — |
| basic_socket_acceptor.test | LINK | 0.304858 | 0.646384 | 0.934614 | — | — | — |
| basic_socket_acceptor_select.test | LINK | 0.323142 | 0.663849 | 0.953400 | — | — | — |
| basic_stream_file.test | LINK | 0.101697 | 0.209620 | 0.250839 | — | — | — |
| basic_stream_file_select.test | LINK | 0.102769 | 0.207986 | 0.248611 | — | — | — |
| basic_stream_socket.test | LINK | 0.303870 | 0.648103 | 0.954988 | — | — | — |
| basic_stream_socket_select.test | LINK | 0.316653 | 0.659879 | 0.971428 | — | — | — |
| basic_streambuf.test | LINK | 0.152627 | 0.299362 | 0.366361 | — | — | — |
| basic_streambuf_select.test | LINK | 0.159614 | 0.300023 | 0.362005 | — | — | — |
| basic_waitable_timer.test | LINK | 0.287240 | 0.618140 | 0.883726 | — | — | — |
| basic_waitable_timer_select.test | LINK | 0.290134 | 0.644610 | 0.905778 | — | — | — |
| basic_writable_pipe.test | LINK | 0.294042 | 0.620517 | 0.823033 | — | — | — |
| basic_writable_pipe_select.test | LINK | 0.309848 | 0.664868 | 1.000692 | — | — | — |
| bind_allocator.test | RUN | 0.496382 | 2.463810 | 2.277414 | 0.001927 | 0.001867 | 0.001930 |
| bind_allocator_select.test | RUN | 0.510797 | 2.512586 | 2.267588 | 0.001696 | 0.001518 | 0.001922 |
| bind_cancellation_slot.test | RUN | 0.511057 | 2.506795 | 2.288177 | 0.001370 | 0.001274 | 0.001403 |
| bind_cancellation_slot_select.test | RUN | 0.520257 | 2.500348 | 2.216587 | 0.003404 | 0.001203 | 0.001391 |
| bind_executor.test | RUN | 0.383791 | 1.762866 | 1.435029 | 0.001813 | 0.001869 | 0.001970 |
| bind_executor_select.test | RUN | 0.365498 | 1.752902 | 1.399019 | 0.001579 | 0.001664 | 0.001768 |
| bind_immediate_executor.test | RUN | 0.257734 | 1.414393 | 0.882701 | 0.001198 | 0.001234 | 0.001300 |
| bind_immediate_executor_select.test | RUN | 0.271864 | 1.403807 | 0.981976 | 0.001277 | 0.001214 | 0.001303 |
| buffer.test | RUN | 0.159556 | 0.578278 | 0.526347 | 0.001240 | 0.001199 | 0.001236 |
| buffer_select.test | RUN | 0.163734 | 0.569929 | 0.536400 | 0.001228 | 0.001195 | 0.001241 |
| buffer_registration.test | LINK | 0.133729 | 0.302224 | 0.311790 | — | — | — |
| buffer_registration_select.test | LINK | 0.135244 | 0.300116 | 0.315945 | — | — | — |
| buffered_read_stream.test | RUN | 0.571489 | 3.625639 | 2.972918 | 0.001556 | 0.002014 | 0.001950 |
| buffered_read_stream_select.test | RUN | 0.576223 | 3.678273 | 2.970378 | 0.001754 | 0.002112 | 0.002036 |
| buffered_stream.test | RUN | 0.713459 | 6.063487 | 5.649393 | 0.001717 | 0.001965 | 0.002051 |
| buffered_stream_select.test | RUN | 0.732871 | 6.100603 | 5.441137 | 0.001888 | 0.001812 | 0.002343 |
| buffered_write_stream.test | RUN | 0.911282 | 5.259404 | 4.919117 | 0.002091 | 0.002180 | 0.001749 |
| buffered_write_stream_select.test | RUN | 0.971105 | 5.333506 | 4.734175 | 0.002147 | 0.002156 | 0.001760 |
| buffers_iterator.test | RUN | 0.280151 | 0.458871 | 0.772177 | 0.001789 | 0.001603 | 0.001371 |
| buffers_iterator_select.test | RUN | 0.289491 | 0.477497 | 0.763205 | 0.001653 | 0.001436 | 0.001625 |
| cancel_after.test | RUN | 0.767265 | 4.162611 | 3.551602 | 0.003836 | 0.003145 | 0.003189 |
| cancel_after_select.test | RUN | 0.768843 | 4.150605 | 3.527029 | 0.003764 | 0.002917 | 0.002412 |
| cancel_at.test | RUN | 0.660219 | 3.945607 | 3.507015 | 0.003641 | 0.002990 | 0.002546 |
| cancel_at_select.test | RUN | 0.627259 | 3.900653 | 3.480185 | 0.003280 | 0.002619 | 0.002643 |
| cancellation_signal.test | LINK | 0.096108 | 0.179435 | 0.294708 | — | — | — |
| cancellation_signal_select.test | LINK | 0.099197 | 0.178275 | 0.299435 | — | — | — |
| cancellation_state.test | LINK | 0.097735 | 0.180453 | 0.319926 | — | — | — |
| cancellation_state_select.test | LINK | 0.117689 | 0.214306 | 0.318489 | — | — | — |
| cancellation_type.test | LINK | 0.095485 | 0.205955 | 0.253278 | — | — | — |
| cancellation_type_select.test | LINK | 0.113329 | 0.205632 | 0.244200 | — | — | — |
| co_composed.test | RUN | 0.102225 | 0.200093 | 0.256318 | 0.001673 | 0.001353 | 0.001537 |
| co_composed_select.test | RUN | 0.102676 | 0.210798 | 0.247216 | 0.001429 | 0.001632 | 0.001482 |
| co_spawn.test | LINK | 0.111325 | 0.204330 | 0.259507 | — | — | — |
| co_spawn_select.test | LINK | 0.111189 | 0.204904 | 0.241601 | — | — | — |
| completion_condition.test | LINK | 0.146405 | 0.314018 | 0.330702 | — | — | — |
| completion_condition_select.test | LINK | 0.145482 | 0.308730 | 0.335157 | — | — | — |
| compose.test | RUN | 0.638324 | 3.127238 | 2.924405 | 0.002204 | 0.002034 | 0.001854 |
| compose_select.test | RUN | 0.667747 | 3.074130 | 2.887554 | 0.002091 | 0.001437 | 0.002248 |
| composed.test | RUN | 0.617505 | 3.111282 | 2.894252 | 0.001930 | 0.001768 | 0.001910 |
| composed_select.test | RUN | 0.647540 | 3.058353 | 2.872208 | 0.001754 | 0.001562 | 0.001822 |
| config.test | RUN | 0.322771 | 2.034008 | 1.318026 | 0.001809 | 0.001822 | 0.001621 |
| config_select.test | RUN | 0.380107 | 2.094853 | 1.434902 | 0.001795 | 0.001703 | 0.001725 |
| connect.test | LINK | 1.052981 | 6.675489 | 6.290258 | — | — | — |
| connect_select.test | LINK | 1.043305 | 6.717787 | 6.294021 | — | — | — |
| connect_pipe.test | RUN | 0.602041 | 2.617578 | 2.264039 | 0.001716 | 0.001738 | 0.001871 |
| connect_pipe_select.test | RUN | 0.626052 | 2.688374 | 2.457412 | 0.001970 | 0.001946 | 0.001814 |
| consign.test | RUN | 0.538941 | 2.577136 | 2.110640 | 0.001685 | 0.001725 | 0.001734 |
| consign_select.test | RUN | 0.557810 | 2.590091 | 2.141970 | 0.001772 | 0.001846 | 0.001775 |
| coroutine.test | LINK | 0.123705 | 0.261274 | 0.283601 | — | — | — |
| coroutine_select.test | LINK | 0.125108 | 0.264817 | 0.285466 | — | — | — |
| deadline_timer.test | RUN | 0.756729 | 3.301382 | 3.067652 | 0.003041 | 0.002836 | 0.003358 |
| deadline_timer_select.test | RUN | 0.753776 | 3.262042 | 3.018313 | 0.002975 | 0.002270 | 0.003036 |
| deferred.test | RUN | 0.130590 | 0.229512 | 0.264049 | 0.001708 | 0.001678 | 0.001652 |
| deferred_select.test | RUN | 0.129344 | 0.222648 | 0.274408 | 0.001710 | 0.001578 | 0.001700 |
| detached.test | LINK | 0.145191 | 0.242284 | 0.307271 | — | — | — |
| detached_select.test | LINK | 0.151212 | 0.239786 | 0.316144 | — | — | — |
| disposition.test | RUN | 0.137274 | 0.583686 | 0.580822 | 0.001414 | 0.001823 | 0.001784 |
| disposition_select.test | RUN | 0.130671 | 0.588846 | 0.583740 | 0.001390 | 0.001784 | 0.001827 |
| error.test | RUN | 0.130112 | 0.604435 | 0.524314 | 0.001296 | 0.001666 | 0.001784 |
| error_select.test | RUN | 0.125937 | 0.596659 | 0.535037 | 0.001292 | 0.001665 | 0.001752 |
| file_base.test | LINK | 0.151421 | 0.487246 | 0.572667 | — | — | — |
| file_base_select.test | LINK | 0.154899 | 0.478577 | 0.468350 | — | — | — |
| fwd_first.test | LINK | 0.351686 | 0.670587 | 1.028353 | — | — | — |
| fwd_last.test | LINK | 0.342567 | 0.685685 | 1.029490 | — | — | — |
| generic_basic_endpoint.test | LINK | 0.131337 | 0.283218 | 0.361487 | — | — | — |
| generic_basic_endpoint_select.test | LINK | 0.129900 | 0.285380 | 0.376904 | — | — | — |
| generic_datagram_protocol.test | LINK | 0.512186 | 2.554456 | 2.124309 | — | — | — |
| generic_datagram_protocol_select.test | LINK | 0.507779 | 2.588620 | 2.161098 | — | — | — |
| generic_raw_protocol.test | LINK | 0.502073 | 2.530542 | 2.099647 | — | — | — |
| generic_raw_protocol_select.test | LINK | 0.500512 | 2.621023 | 2.142311 | — | — | — |
| generic_seq_packet_protocol.test | LINK | 0.441086 | 2.143679 | 1.850934 | — | — | — |
| generic_seq_packet_protocol_select.test | LINK | 0.441899 | 2.178622 | 1.874791 | — | — | — |
| generic_stream_protocol.test | LINK | 0.465292 | 2.306212 | 2.031483 | — | — | — |
| generic_stream_protocol_select.test | LINK | 0.461171 | 2.343165 | 2.049752 | — | — | — |
| high_resolution_timer.test | LINK | 0.207230 | 0.418585 | 0.598479 | — | — | — |
| high_resolution_timer_select.test | LINK | 0.209778 | 0.433057 | 0.631791 | — | — | — |
| immediate.test | LINK | 0.140025 | 0.324354 | 0.374848 | — | — | — |
| immediate_select.test | LINK | 0.142486 | 0.325715 | 0.380142 | — | — | — |
| inline_executor.test | RUN | 0.172005 | 0.499310 | 0.547679 | 0.001171 | 0.001185 | 0.001291 |
| inline_executor_select.test | RUN | 0.171453 | 0.497437 | 0.520380 | 0.001349 | 0.001227 | 0.001282 |
| inline_or_executor.test | RUN | 0.276197 | 1.454978 | 1.051849 | 0.001255 | 0.001193 | 0.001220 |
| inline_or_executor_select.test | RUN | 0.289834 | 1.521039 | 1.149256 | 0.001249 | 0.001205 | 0.001294 |
| io_context.test | RUN | 0.412157 | 2.255946 | 1.796902 | 0.002058 | 0.001984 | 0.002273 |
| io_context_select.test | RUN | 0.414022 | 2.220752 | 1.766561 | 0.001960 | 0.001930 | 0.002076 |
| io_context_strand.test | RUN | 0.384697 | 1.956724 | 1.692984 | 0.001926 | 0.001963 | 0.002298 |
| io_context_strand_select.test | RUN | 0.383389 | 1.911247 | 1.697697 | 0.001652 | 0.001840 | 0.002035 |
| ip_address.test | LINK | 0.142939 | 0.587442 | 0.421682 | — | — | — |
| ip_address_select.test | LINK | 0.145350 | 0.483742 | 0.436223 | — | — | — |
| ip_address_v4.test | LINK | 0.146252 | 0.696778 | 0.465845 | — | — | — |
| ip_address_v4_select.test | LINK | 0.145965 | 0.686351 | 0.620179 | — | — | — |
| ip_address_v6.test | LINK | 0.163598 | 0.922815 | 0.830104 | — | — | — |
| ip_address_v6_select.test | LINK | 0.162151 | 0.885527 | 0.926862 | — | — | — |
| ip_basic_endpoint.test | LINK | 0.129262 | 0.451584 | 0.600719 | — | — | — |
| ip_basic_endpoint_select.test | LINK | 0.128532 | 0.448706 | 0.604796 | — | — | — |
| ip_basic_resolver.test | LINK | 0.201555 | 0.644241 | 0.887713 | — | — | — |
| ip_basic_resolver_select.test | LINK | 0.208501 | 0.663466 | 0.896633 | — | — | — |
| ip_basic_resolver_entry.test | LINK | 0.073657 | 0.205347 | 0.260846 | — | — | — |
| ip_basic_resolver_entry_select.test | LINK | 0.073421 | 0.206171 | 0.253416 | — | — | — |
| ip_basic_resolver_iterator.test | LINK | 0.128857 | 0.428501 | 0.581293 | — | — | — |
| ip_basic_resolver_iterator_select.test | LINK | 0.127130 | 0.437057 | 0.603286 | — | — | — |
| ip_basic_resolver_query.test | LINK | 0.120980 | 0.403536 | 0.583245 | — | — | — |
| ip_basic_resolver_query_select.test | LINK | 0.122390 | 0.417206 | 0.589247 | — | — | — |
| ip_host_name.test | RUN | 0.131286 | 0.553070 | 0.663928 | 0.001141 | 0.001650 | 0.001660 |
| ip_host_name_select.test | RUN | 0.131076 | 0.568104 | 0.678917 | 0.001074 | 0.001571 | 0.001685 |
| ip_icmp.test | RUN | 0.600477 | 5.287775 | 4.679614 | 0.001235 | 0.001842 | 0.001802 |
| ip_icmp_select.test | RUN | 0.593049 | 5.450382 | 4.540294 | 0.001109 | 0.001765 | 0.001639 |
| ip_multicast.test | RUN | 0.361888 | 2.619756 | 2.531432 | 0.001370 | 0.001744 | 0.001720 |
| ip_multicast_select.test | RUN | 0.356370 | 2.608631 | 2.488562 | 0.001262 | 0.001670 | 0.001834 |
| ip_resolver_query_base.test | LINK | 0.084601 | 0.225301 | 0.288716 | — | — | — |
| ip_resolver_query_base_select.test | LINK | 0.087963 | 0.233211 | 0.290607 | — | — | — |
| ip_tcp.test | RUN | 0.866937 | 7.877618 | 7.181631 | 0.001726 | 0.002397 | 0.002152 |
| ip_tcp_select.test | RUN | 0.889350 | 8.181139 | 6.938589 | 0.001662 | 0.002356 | 0.002490 |
| ip_udp.test | RUN | 0.627878 | 5.663075 | 4.854853 | 0.001356 | 0.001890 | 0.001736 |
| ip_udp_select.test | RUN | 0.630638 | 5.737823 | 4.764130 | 0.001325 | 0.001890 | 0.001953 |
| ip_unicast.test | RUN | 0.321601 | 2.421875 | 2.120789 | 0.001248 | 0.001824 | 0.001898 |
| ip_unicast_select.test | RUN | 0.331006 | 2.417862 | 2.139171 | 0.001274 | 0.001839 | 0.001808 |
| ip_v6_only.test | RUN | 0.346209 | 2.533819 | 2.236918 | 0.001274 | 0.001881 | 0.001756 |
| ip_v6_only_select.test | RUN | 0.337910 | 2.584918 | 2.227634 | 0.001231 | 0.001571 | 0.001622 |
| is_read_buffered.test | RUN | 0.234238 | 0.739690 | 1.189598 | 0.001160 | 0.001734 | 0.001268 |
| is_read_buffered_select.test | RUN | 0.236359 | 0.777315 | 1.168656 | 0.001172 | 0.001801 | 0.001645 |
| is_write_buffered.test | RUN | 0.233122 | 0.802882 | 1.137864 | 0.001497 | 0.001476 | 0.001664 |
| is_write_buffered_select.test | RUN | 0.238402 | 0.838108 | 1.179182 | 0.001160 | 0.001586 | 0.001651 |
| local_basic_endpoint.test | LINK | 0.122297 | 0.461536 | 0.585114 | — | — | — |
| local_basic_endpoint_select.test | LINK | 0.124777 | 0.418886 | 0.603457 | — | — | — |
| local_connect_pair.test | LINK | 0.313399 | 2.459244 | 2.096203 | — | — | — |
| local_connect_pair_select.test | LINK | 0.314668 | 2.471092 | 2.054503 | — | — | — |
| local_datagram_protocol.test | LINK | 0.423076 | 3.254706 | 2.943935 | — | — | — |
| local_datagram_protocol_select.test | LINK | 0.422933 | 3.290419 | 2.880059 | — | — | — |
| local_seq_packet_protocol.test | LINK | 0.427273 | 3.152683 | 2.934098 | — | — | — |
| local_seq_packet_protocol_select.test | LINK | 0.423079 | 3.162010 | 2.914078 | — | — | — |
| local_stream_protocol.test | LINK | 0.409729 | 2.973313 | 2.786476 | — | — | — |
| local_stream_protocol_select.test | LINK | 0.410063 | 3.027582 | 2.791355 | — | — | — |
| placeholders.test | LINK | 0.081013 | 0.222952 | 0.269438 | — | — | — |
| placeholders_select.test | LINK | 0.082387 | 0.222988 | 0.265746 | — | — | — |
| posix_basic_descriptor.test | LINK | 0.208644 | 0.624245 | 0.880115 | — | — | — |
| posix_basic_descriptor_select.test | LINK | 0.214531 | 0.662926 | 1.070461 | — | — | — |
| posix_basic_stream_descriptor.test | LINK | 0.207040 | 0.631986 | 0.870828 | — | — | — |
| posix_basic_stream_descriptor_select.test | LINK | 0.217433 | 0.668748 | 1.048415 | — | — | — |
| posix_descriptor_base.test | LINK | 0.089463 | 0.235668 | 0.296814 | — | — | — |
| posix_descriptor_base_select.test | LINK | 0.089141 | 0.241805 | 0.299817 | — | — | — |
| posix_stream_descriptor.test | LINK | 0.411812 | 2.981639 | 2.814409 | — | — | — |
| posix_stream_descriptor_select.test | LINK | 0.418245 | 3.044778 | 2.860009 | — | — | — |
| prepend.test | RUN | 0.348486 | 2.438158 | 2.163370 | 0.001380 | 0.001728 | 0.001700 |
| prepend_select.test | RUN | 0.345534 | 2.510233 | 2.202246 | 0.001366 | 0.001640 | 0.001918 |
| random_access_file.test | LINK | 0.198549 | 0.578690 | 0.729901 | — | — | — |
| random_access_file_select.test | LINK | 0.206333 | 0.616393 | 0.923643 | — | — | — |
| read.test | RUN | 1.280397 | 15.736438 | 12.696675 | 0.002147 | 0.002310 | 0.001968 |
| read_select.test | RUN | 1.362929 | 15.646158 | 12.824553 | 0.002198 | 0.002130 | 0.002271 |
| read_at.test | RUN | 1.455303 | 21.992231 | 16.968372 | 0.002590 | 0.002932 | 0.002391 |
| read_at_select.test | RUN | 1.449620 | 21.573674 | 16.960366 | 0.002282 | 0.002728 | 0.002157 |
| read_until.test | RUN | 0.747469 | 5.806431 | 4.687512 | 0.001915 | 0.001980 | 0.001856 |
| read_until_select.test | RUN | 0.762045 | 5.855683 | 4.840542 | 0.001856 | 0.001883 | 0.001866 |
| readable_pipe.test | LINK | 0.495000 | 2.559684 | 2.062910 | — | — | — |
| readable_pipe_select.test | LINK | 0.507805 | 2.668159 | 2.186778 | — | — | — |
| recycling_allocator.test | RUN | 0.154518 | 0.360087 | 0.397282 | 0.001463 | 0.001692 | 0.001644 |
| recycling_allocator_select.test | RUN | 0.166554 | 0.386257 | 0.393594 | 0.001675 | 0.001587 | 0.001551 |
| redirect_disposition.test | LINK | 0.653404 | 3.543386 | 3.102633 | — | — | — |
| redirect_disposition_select.test | LINK | 0.662364 | 3.527320 | 3.062491 | — | — | — |
| redirect_error.test | LINK | 0.590821 | 2.945354 | 2.733079 | — | — | — |
| redirect_error_select.test | LINK | 0.577070 | 2.908708 | 2.715208 | — | — | — |
| registered_buffer.test | LINK | 0.146639 | 0.302110 | 0.381361 | — | — | — |
| registered_buffer_select.test | LINK | 0.146217 | 0.301965 | 0.374489 | — | — | — |
| signal_set.test | RUN | 0.481041 | 2.491793 | 1.927590 | 0.001454 | 0.001731 | 0.001610 |
| signal_set_select.test | RUN | 0.482603 | 2.592554 | 2.102951 | 0.001752 | 0.001663 | 0.001608 |
| signal_set_base.test | LINK | 0.123962 | 0.249553 | 0.248536 | — | — | — |
| signal_set_base_select.test | LINK | 0.124273 | 0.250259 | 0.260159 | — | — | — |
| socket_base.test | RUN | 0.587158 | 3.711051 | 2.886994 | 0.001336 | 0.001927 | 0.001775 |
| socket_base_select.test | RUN | 0.600492 | 3.611313 | 2.815250 | 0.001606 | 0.002094 | 0.001838 |
| spawn.test | RUN | 0.969998 | 6.023231 | 5.155215 | 0.001629 | 0.002054 | 0.001946 |
| spawn_select.test | RUN | 0.960707 | 5.986040 | 5.125556 | 0.002000 | 0.002036 | 0.001910 |
| static_thread_pool.test | RUN | 0.273890 | 0.570533 | 0.652377 | 0.001515 | 0.001678 | 0.001624 |
| static_thread_pool_select.test | RUN | 0.281050 | 0.614462 | 0.833939 | 0.001306 | 0.001664 | 0.001622 |
| steady_timer.test | LINK | 0.295603 | 0.649254 | 0.889840 | — | — | — |
| steady_timer_select.test | LINK | 0.296910 | 0.688610 | 0.931404 | — | — | — |
| strand.test | RUN | 0.609711 | 3.398698 | 3.112936 | 0.002191 | 0.002345 | 0.002601 |
| strand_select.test | RUN | 0.626241 | 3.366823 | 2.981232 | 0.002083 | 0.002712 | 0.002084 |
| stream_file.test | LINK | 0.282461 | 0.620150 | 0.694547 | — | — | — |
| stream_file_select.test | LINK | 0.295727 | 0.643860 | 0.864790 | — | — | — |
| streambuf.test | RUN | 0.128641 | 0.465817 | 0.475765 | 0.001170 | 0.001226 | 0.001704 |
| streambuf_select.test | RUN | 0.117988 | 0.446215 | 0.477979 | 0.001132 | 0.001355 | 0.001230 |
| system_timer.test | LINK | 0.391269 | 2.174175 | 1.999966 | — | — | — |
| system_timer_select.test | LINK | 0.393928 | 2.141723 | 1.854830 | — | — | — |
| system_context.test | LINK | 0.181668 | 0.382660 | 0.462783 | — | — | — |
| system_context_select.test | LINK | 0.190050 | 0.405948 | 0.553885 | — | — | — |
| system_executor.test | LINK | 0.253099 | 1.213977 | 0.887860 | — | — | — |
| system_executor_select.test | LINK | 0.257714 | 1.221774 | 0.968410 | — | — | — |
| this_coro.test | LINK | 0.073744 | 0.144924 | 0.172512 | — | — | — |
| this_coro_select.test | LINK | 0.075461 | 0.144959 | 0.173018 | — | — | — |
| thread_pool.test | RUN | 0.288300 | 1.639862 | 1.151557 | 0.002325 | 0.002344 | 0.002338 |
| thread_pool_select.test | RUN | 0.299207 | 1.626179 | 1.242101 | 0.002176 | 0.002258 | 0.002392 |
| time_traits.test | LINK | 0.161858 | 0.302991 | 0.340507 | — | — | — |
| time_traits_select.test | LINK | 0.164407 | 0.303757 | 0.344050 | — | — | — |
| ts_buffer.test | LINK | 0.161468 | 0.335533 | 0.362192 | — | — | — |
| ts_buffer_select.test | LINK | 0.157944 | 0.338944 | 0.363651 | — | — | — |
| ts_executor.test | LINK | 0.219365 | 0.468537 | 0.574990 | — | — | — |
| ts_executor_select.test | LINK | 0.231513 | 0.500661 | 0.687101 | — | — | — |
| ts_internet.test | LINK | 0.229802 | 0.519960 | 0.665708 | — | — | — |
| ts_internet_select.test | LINK | 0.238227 | 0.759369 | 0.838328 | — | — | — |
| ts_io_context.test | LINK | 0.192056 | 0.583206 | 0.464545 | — | — | — |
| ts_io_context_select.test | LINK | 0.202123 | 0.615924 | 0.863621 | — | — | — |
| ts_net.test | LINK | 0.287173 | 0.907201 | 1.339682 | — | — | — |
| ts_net_select.test | LINK | 0.288118 | 0.907342 | 1.384325 | — | — | — |
| ts_netfwd.test | LINK | 0.287076 | 0.905840 | 1.336627 | — | — | — |
| ts_netfwd_select.test | LINK | 0.293202 | 0.953981 | 1.398281 | — | — | — |
| ts_socket.test | LINK | 0.234849 | 0.729764 | 1.040228 | — | — | — |
| ts_socket_select.test | LINK | 0.234841 | 0.727362 | 1.069922 | — | — | — |
| ts_timer.test | LINK | 0.212055 | 0.642978 | 0.913798 | — | — | — |
| ts_timer_select.test | LINK | 0.215979 | 0.664919 | 0.954044 | — | — | — |
| use_awaitable.test | LINK | 0.076077 | 0.215813 | 0.257242 | — | — | — |
| use_awaitable_select.test | LINK | 0.076161 | 0.216258 | 0.258800 | — | — | — |
| wait_traits.test | LINK | 0.076919 | 0.227818 | 0.271497 | — | — | — |
| wait_traits_select.test | LINK | 0.077922 | 0.211987 | 0.267317 | — | — | — |
| windows_basic_object_handle.test | LINK | 0.078931 | 0.200851 | 0.265594 | — | — | — |
| windows_basic_object_handle_select.test | LINK | 0.077005 | 0.202951 | 0.269120 | — | — | — |
| windows_basic_overlapped_handle.test | LINK | 0.077719 | 0.212437 | 0.269948 | — | — | — |
| windows_basic_overlapped_handle_select.test | LINK | 0.076854 | 0.211476 | 0.271621 | — | — | — |
| windows_basic_random_access_handle.test | LINK | 0.076819 | 0.209916 | 0.286931 | — | — | — |
| windows_basic_random_access_handle_select.test | LINK | 0.078351 | 0.208513 | 0.278426 | — | — | — |
| windows_basic_stream_handle.test | LINK | 0.077631 | 0.209755 | 0.269522 | — | — | — |
| windows_basic_stream_handle_select.test | LINK | 0.076702 | 0.211609 | 0.274817 | — | — | — |
| windows_object_handle.test | LINK | 0.201333 | 0.571311 | 0.698612 | — | — | — |
| windows_object_handle_select.test | LINK | 0.212984 | 0.606385 | 0.894846 | — | — | — |
| windows_overlapped_ptr.test | LINK | 0.204308 | 0.601910 | 0.785267 | — | — | — |
| windows_overlapped_ptr_select.test | LINK | 0.215967 | 0.647951 | 0.969691 | — | — | — |
| windows_random_access_handle.test | LINK | 0.195859 | 0.592548 | 0.690824 | — | — | — |
| windows_random_access_handle_select.test | LINK | 0.201855 | 0.618276 | 0.878156 | — | — | — |
| windows_stream_handle.test | LINK | 0.196997 | 0.596644 | 0.699145 | — | — | — |
| windows_stream_handle_select.test | LINK | 0.205273 | 0.640272 | 0.885229 | — | — | — |
| writable_pipe.test | LINK | 0.337502 | 2.509973 | 2.332494 | — | — | — |
| writable_pipe_select.test | LINK | 0.389261 | 2.601935 | 2.403583 | — | — | — |
| write.test | RUN | 1.451813 | 12.880074 | 12.629003 | 0.001956 | 0.001988 | 0.002180 |
| write_select.test | RUN | 1.480632 | 12.926859 | 12.579848 | 0.002228 | 0.002134 | 0.002286 |
| write_at.test | RUN | 1.473496 | 18.063750 | 16.204525 | 0.001985 | 0.002374 | 0.002548 |
| write_at_select.test | RUN | 1.508673 | 18.316542 | 16.745234 | 0.002323 | 0.002322 | 0.002676 |
| any_executor.test | RUN | 0.597998 | 6.169076 | 5.276585 | 0.002289 | 0.002240 | 0.002530 |
| blocking.test | RUN | 1.316501 | 7.510183 | 10.231086 | 0.005938 | 0.005994 | 0.006758 |
| blocking_adaptation.test | RUN | 0.661975 | 3.122966 | 4.865630 | 0.003247 | 0.002982 | 0.003718 |
| context_as.test | RUN | 0.406347 | 2.230405 | 1.659582 | 0.001824 | 0.001868 | 0.001919 |
| executor.test | RUN | 0.110597 | 0.214376 | 0.300332 | 0.001570 | 0.001723 | 0.001552 |
| inline_exception_handling.test | RUN | 1.272982 | 6.953328 | 9.723838 | 0.005291 | 0.004329 | 0.004529 |
| invocable_archetype.test | RUN | 0.105865 | 0.225959 | 0.284247 | 0.001565 | 0.001626 | 0.001711 |
| mapping.test | RUN | 1.226038 | 7.094612 | 10.249917 | 0.004462 | 0.004424 | 0.004788 |
| outstanding_work.test | RUN | 0.597292 | 2.895457 | 4.617006 | 0.003316 | 0.003591 | 0.003786 |
| prefer_only.test | RUN | 0.203079 | 1.148630 | 1.013952 | 0.001512 | 0.001665 | 0.001800 |
| relationship.test | RUN | 0.474680 | 2.537981 | 4.548919 | 0.002400 | 0.002640 | 0.003908 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.989×, 0.992× | 1.009× |
| clang | 0.982× | 1.005×, 0.960× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| any_completion_executor.test | 4 | 0.001496s | 0.001506s | 0.001515s | byte equality observed |
| any_completion_executor_select.test | 7 | 0.001474s | 0.001462s | 0.001479s | byte equality observed |
| any_completion_handler.test | 8 | 0.001201s | 0.001196s | 0.001157s | byte equality observed |
| any_completion_handler_select.test | 8 | 0.001209s | 0.001182s | 0.001159s | byte equality observed |
| any_io_executor.test | 7 | 0.001467s | 0.001446s | 0.001442s | byte equality observed |
| any_io_executor_select.test | 4 | 0.001485s | 0.001458s | 0.001480s | byte equality observed |
| append.test | 10 | 0.001160s | 0.001152s | 0.001132s | byte equality observed |
| append_select.test | 10 | 0.001117s | 0.001125s | 0.001094s | byte equality observed |
| as_tuple.test | 8 | 0.001229s | 0.001218s | 0.001175s | byte equality observed |
| as_tuple_select.test | 10 | 0.001147s | 0.001150s | 0.001097s | byte equality observed |
| bind_allocator.test | 1 | 0.001664s | 0.001604s | 0.001631s | byte equality observed |
| bind_allocator_select.test | 1 | 0.001361s | 0.001367s | 0.001326s | byte equality observed |
| bind_cancellation_slot.test | 10 | 0.001129s | 0.001135s | 0.001128s | byte equality observed |
| bind_cancellation_slot_select.test | 10 | 0.000991s | 0.000985s | 0.000955s | byte equality observed |
| bind_executor.test | 1 | 0.001687s | 0.001669s | 0.001667s | byte equality observed |
| bind_executor_select.test | 1 | 0.001961s | 0.001937s | 0.001948s | byte equality observed |
| bind_immediate_executor.test | 10 | 0.000993s | 0.000981s | 0.000982s | byte equality observed |
| bind_immediate_executor_select.test | 10 | 0.000944s | 0.000929s | 0.000945s | byte equality observed |
| buffer.test | 10 | 0.000941s | 0.000912s | 0.000914s | byte equality observed |
| buffer_select.test | 10 | 0.000938s | 0.000901s | 0.000894s | byte equality observed |
| buffered_read_stream.test | 10 | 0.001222s | 0.001184s | 0.001189s | byte equality observed |
| buffered_read_stream_select.test | 10 | 0.001184s | 0.001136s | 0.001131s | byte equality observed |
| buffered_stream.test | 10 | 0.001209s | 0.001161s | 0.001168s | byte equality observed |
| buffered_stream_select.test | 10 | 0.001192s | 0.001149s | 0.001148s | byte equality observed |
| buffered_write_stream.test | 10 | 0.001190s | 0.001170s | 0.001213s | byte equality observed |
| buffered_write_stream_select.test | 10 | 0.001176s | 0.001147s | 0.001156s | byte equality observed |
| buffers_iterator.test | 10 | 0.000924s | 0.000888s | 0.000898s | byte equality observed |
| buffers_iterator_select.test | 10 | 0.000896s | 0.000902s | 0.000872s | byte equality observed |
| cancel_after.test | 1 | 0.003638s | 0.003363s | 0.003573s | byte equality observed |
| cancel_after_select.test | 1 | 0.003141s | 0.002822s | 0.003133s | byte equality observed |
| cancel_at.test | 1 | 0.003841s | 0.003727s | 0.003878s | byte equality observed |
| cancel_at_select.test | 1 | 0.003588s | 0.003780s | 0.003842s | byte equality observed |
| co_composed.test | 10 | 0.000932s | 0.000910s | 0.000948s | byte equality observed |
| co_composed_select.test | 10 | 0.000881s | 0.000863s | 0.000855s | byte equality observed |
| compose.test | 1 | 0.001674s | 0.001605s | 0.001675s | byte equality observed |
| compose_select.test | 1 | 0.001392s | 0.001309s | 0.001418s | byte equality observed |
| composed.test | 1 | 0.002059s | 0.002039s | 0.002066s | byte equality observed |
| composed_select.test | 1 | 0.001651s | 0.001641s | 0.001736s | byte equality observed |
| config.test | 10 | 0.000997s | 0.000997s | 0.001018s | byte equality observed |
| config_select.test | 10 | 0.000961s | 0.000985s | 0.000982s | byte equality observed |
| connect_pipe.test | 10 | 0.001010s | 0.000981s | 0.001002s | byte equality observed |
| connect_pipe_select.test | 10 | 0.000966s | 0.000965s | 0.000973s | byte equality observed |
| consign.test | 10 | 0.000971s | 0.000953s | 0.000960s | byte equality observed |
| consign_select.test | 10 | 0.000933s | 0.000924s | 0.000947s | byte equality observed |
| deadline_timer.test | 1 | 0.002363s | 0.002274s | 0.002298s | byte equality observed |
| deadline_timer_select.test | 1 | 0.002185s | 0.002106s | 0.002181s | byte equality observed |
| deferred.test | 10 | 0.000898s | 0.000880s | 0.000900s | byte equality observed |
| deferred_select.test | 10 | 0.000848s | 0.000836s | 0.000857s | byte equality observed |
| disposition.test | 10 | 0.000906s | 0.000887s | 0.000912s | byte equality observed |
| disposition_select.test | 10 | 0.000896s | 0.000894s | 0.000905s | byte equality observed |
| error.test | 10 | 0.000873s | 0.000881s | 0.000877s | byte equality observed |
| error_select.test | 10 | 0.000875s | 0.000881s | 0.000849s | byte equality observed |
| inline_executor.test | 10 | 0.000888s | 0.000887s | 0.000869s | byte equality observed |
| inline_executor_select.test | 10 | 0.000887s | 0.000885s | 0.000878s | byte equality observed |
| inline_or_executor.test | 10 | 0.000894s | 0.000898s | 0.000891s | byte equality observed |
| inline_or_executor_select.test | 10 | 0.000893s | 0.000884s | 0.000891s | byte equality observed |
| io_context.test | 1 | 0.001894s | 0.001744s | 0.001870s | byte equality observed |
| io_context_select.test | 1 | 0.002167s | 0.002171s | 0.002152s | byte equality observed |
| io_context_strand.test | 1 | 0.002139s | 0.002184s | 0.002216s | byte equality observed |
| io_context_strand_select.test | 1 | 0.001913s | 0.001888s | 0.001968s | byte equality observed |
| ip_host_name.test | 10 | 0.000909s | 0.000886s | 0.000899s | byte equality observed |
| ip_host_name_select.test | 10 | 0.000860s | 0.000849s | 0.000829s | byte equality observed |
| ip_icmp.test | 10 | 0.000893s | 0.000876s | 0.000853s | byte equality observed |
| ip_icmp_select.test | 10 | 0.000881s | 0.000877s | 0.000848s | byte equality observed |
| ip_multicast.test | 10 | 0.000956s | 0.000932s | 0.000937s | byte equality observed |
| ip_multicast_select.test | 10 | 0.000947s | 0.000910s | 0.000894s | byte equality observed |
| ip_tcp.test | 10 | 0.001349s | 0.001270s | 0.001297s | byte equality observed |
| ip_tcp_select.test | 10 | 0.001298s | 0.001219s | 0.001272s | byte equality observed |
| ip_udp.test | 10 | 0.001006s | 0.000940s | 0.000970s | byte equality observed |
| ip_udp_select.test | 10 | 0.000975s | 0.000936s | 0.000964s | byte equality observed |
| ip_unicast.test | 10 | 0.000940s | 0.000908s | 0.000920s | byte equality observed |
| ip_unicast_select.test | 10 | 0.000928s | 0.000899s | 0.000926s | byte equality observed |
| ip_v6_only.test | 10 | 0.000950s | 0.000927s | 0.000941s | byte equality observed |
| ip_v6_only_select.test | 10 | 0.000925s | 0.000887s | 0.000933s | byte equality observed |
| is_read_buffered.test | 10 | 0.000857s | 0.000825s | 0.000869s | byte equality observed |
| is_read_buffered_select.test | 10 | 0.000860s | 0.000842s | 0.000855s | byte equality observed |
| is_write_buffered.test | 10 | 0.000863s | 0.000897s | 0.000847s | byte equality observed |
| is_write_buffered_select.test | 10 | 0.000856s | 0.000873s | 0.000860s | byte equality observed |
| prepend.test | 10 | 0.000931s | 0.000999s | 0.000931s | byte equality observed |
| prepend_select.test | 10 | 0.000940s | 0.000948s | 0.000931s | byte equality observed |
| read.test | 10 | 0.001295s | 0.001276s | 0.001283s | byte equality observed |
| read_at.test | 10 | 0.001520s | 0.001549s | 0.001399s | byte equality observed |
| read_at_select.test | 10 | 0.001527s | 0.001538s | 0.001432s | byte equality observed |
| read_select.test | 10 | 0.001326s | 0.001306s | 0.001292s | byte equality observed |
| read_until.test | 10 | 0.001111s | 0.001089s | 0.001068s | byte equality observed |
| read_until_select.test | 10 | 0.001128s | 0.001097s | 0.001087s | byte equality observed |
| recycling_allocator.test | 10 | 0.000922s | 0.000933s | 0.000916s | byte equality observed |
| recycling_allocator_select.test | 10 | 0.000909s | 0.000928s | 0.000922s | byte equality observed |
| signal_set.test | 10 | 0.000931s | 0.000960s | 0.000914s | byte equality observed |
| signal_set_select.test | 10 | 0.000928s | 0.000939s | 0.000922s | byte equality observed |
| socket_base.test | 10 | 0.001052s | 0.001042s | 0.001017s | byte equality observed |
| socket_base_select.test | 10 | 0.001037s | 0.001012s | 0.001009s | byte equality observed |
| spawn.test | 10 | 0.001123s | 0.001140s | 0.001103s | byte equality observed |
| spawn_select.test | 10 | 0.001130s | 0.001114s | 0.001095s | byte equality observed |
| static_thread_pool.test | 10 | 0.000925s | 0.000912s | 0.000928s | byte equality observed |
| static_thread_pool_select.test | 10 | 0.000894s | 0.000915s | 0.000857s | byte equality observed |
| strand.test | 1 | 0.001932s | 0.001807s | 0.001978s | byte equality observed |
| strand_select.test | 1 | 0.001609s | 0.001591s | 0.001547s | byte equality observed |
| streambuf.test | 10 | 0.000940s | 0.000965s | 0.000925s | byte equality observed |
| streambuf_select.test | 10 | 0.000925s | 0.000937s | 0.000918s | byte equality observed |
| thread_pool.test | 10 | 0.001916s | 0.001870s | 0.001937s | byte equality observed |
| thread_pool_select.test | 10 | 0.001921s | 0.001870s | 0.001930s | byte equality observed |
| write.test | 10 | 0.001392s | 0.001321s | 0.001352s | byte equality observed |
| write_at.test | 10 | 0.001462s | 0.001476s | 0.001442s | byte equality observed |
| write_at_select.test | 10 | 0.001463s | 0.001430s | 0.001423s | byte equality observed |
| write_select.test | 10 | 0.001363s | 0.001329s | 0.001345s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm-extended/actions/runs/43658654032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
