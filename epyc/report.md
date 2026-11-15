# Public benchmarks: AMD EPYC

Measured compiler: [`fd8d08c23`](https://github.com/vishvananda/cppgm/commit/fd8d08c239b003470d0ecd0edf78dc8fe6b5a2ff) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43740486383) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 9V74 80-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.21× | 79 | 2.90× | 79 |
| Compile CPU, `-O0` | 3.00× | 79 | 3.11× | 79 |
| Compile CPU, `-O3` | 4.17× | 80 | 3.85× | 80 |
| Compile peak RSS, `-O0` | 1.51× | 81 | 2.43× | 81 |
| Compile peak RSS, `-O3` | 1.78× | 81 | 2.54× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.21× | 81 | 1.23× | 81 |
| Run CPU, `-O3` | 1.00× | 80 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.923 to 1.020; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| bg/nbody/2 | 0.63× |
| bg/spectralnorm/1 | 0.75× |
| tramp3d-v4 | 0.78× |
| bg/nbody/1 | 0.82× |
| bg/mandelbrot/7 | 0.84× |
| bg/mandelbrot/9 | 0.84× |
| bg/nbody/3 | 0.86× |
| bg/mandelbrot/5 | 0.86× |
| bg/mandelbrot/2 | 0.86× |
| CoyoteBench/fftbench | 0.89× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.084 | 0.296 | 3.52× | 0.237 | 2.82× | ok |
| Adobe-C++/loop_unroll | 0.068 | 0.616 | 9.06× | 0.229 | 3.37× | ok |
| Adobe-C++/simple_types_constant_folding | 0.064 | 0.716 | 11.19× | 0.289 | 4.52× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.058 | 0.514 | 8.86× | 0.240 | 4.14× | ok |
| Adobe-C++/stepanov_abstraction | 0.047 | 0.203 | 4.32× | 0.140 | 2.98× | ok |
| Adobe-C++/stepanov_vector | 0.085 | 0.309 | 3.64× | 0.249 | 2.93× | ok |
| Bullet | 6.602 | 20.859 | 3.16× | 20.357 | 3.08× | ok |
| CLAMR | 3.191 | 10.502 | 3.29× | 11.255 | 3.53× | ok |
| CoyoteBench/almabench | 0.033 | 0.083 | 2.52× | 0.094 | 2.85× | ok |
| CoyoteBench/fftbench | 0.129 | 0.289 | 2.24× | 0.361 | 2.80× | ok |
| CoyoteBench/huffbench | 0.036 | 0.076 | 2.11× | 0.122 | 3.39× | ok |
| CoyoteBench/lpbench | 0.041 | 0.082 | 2.00× | 0.122 | 2.98× | ok |
| DOE/HACCKernels | 0.148 | 0.358 | 2.42× | 0.398 | 2.69× | ok |
| DOE/HPCCG | 0.805 | 1.868 | 2.32× | 3.024 | 3.76× | ok |
| DOE/PENNANT | 1.766 | 4.760 | 2.70× | 5.084 | 2.88× | ok |
| DOE/miniFE | 0.846 | 2.426 | 2.87× | 2.342 | 2.77× | ok |
| Misc-C++-EH/spirit | 0.522 | 3.011 | 5.77× | 2.515 | 4.82× | ok |
| Misc-C++-Large/ray | 0.150 | 0.322 | 2.15× | 0.358 | 2.39× | ok |
| Misc-C++-Large/sphereflake | 0.124 | 0.243 | 1.96× | 0.329 | 2.65× | ok |
| Misc-C++/bigfib | 0.163 | 0.493 | 3.02× | 0.420 | 2.58× | ok |
| Misc-C++/oopack_v1p8 | 0.036 | 0.102 | 2.83× | 0.115 | 3.19× | ok |
| Misc-C++/stepanov_container | 0.185 | 0.708 | 3.83× | 0.573 | 3.10× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.132 | 3.30× | 0.106 | 2.65× | ok |
| PAQ8p | 0.080 | 0.554 | 6.92× | 0.297 | 3.71× | ok |
| Prolangs-C++/life | 0.004 | 0.037 | — | 0.033 | — | ok |
| Prolangs-C++/ocean | 0.012 | 0.072 | 6.00× | 0.054 | 4.50× | ok |
| Prolangs-C++/primes | 0.007 | 0.027 | — | 0.030 | — | ok |
| Shootout-C++-EH/except | 0.098 | 0.187 | 1.91× | 0.298 | 3.04× | ok |
| Shootout-C++/ackermann | 0.086 | 0.182 | 2.12× | 0.261 | 3.03× | ok |
| Shootout-C++/ary3 | 0.104 | 0.249 | 2.39× | 0.377 | 3.62× | ok |
| Shootout-C++/fibo | 0.090 | 0.181 | 2.01× | 0.251 | 2.79× | ok |
| Shootout-C++/hash | 0.130 | 0.330 | 2.54× | 0.340 | 2.62× | ok |
| Shootout-C++/hash2 | 0.118 | 0.357 | 3.03× | 0.358 | 3.03× | ok |
| Shootout-C++/heapsort | 0.121 | 0.215 | 1.78× | 0.297 | 2.45× | ok |
| Shootout-C++/lists | 0.092 | 0.219 | 2.38× | 0.304 | 3.30× | ok |
| Shootout-C++/lists1 | 0.100 | 0.270 | 2.70× | 0.307 | 3.07× | ok |
| Shootout-C++/matrix | 0.086 | 0.188 | 2.19× | 0.246 | 2.86× | ok |
| Shootout-C++/methcall | 0.084 | 0.195 | 2.32× | 0.259 | 3.08× | ok |
| Shootout-C++/moments | 0.116 | 0.288 | 2.48× | 0.319 | 2.75× | ok |
| Shootout-C++/random | 0.099 | 0.211 | 2.13× | 0.292 | 2.95× | ok |
| Shootout-C++/sieve | 0.108 | 0.266 | 2.46× | 0.331 | 3.06× | ok |
| SmallPT | 0.035 | 0.104 | 2.97× | 0.096 | 2.74× | ok |
| Stanford/Bubblesort | 0.010 | 0.031 | 3.10× | 0.034 | 3.40× | ok |
| Stanford/FloatMM | 0.011 | 0.031 | 2.82× | 0.034 | 3.09× | ok |
| Stanford/Puzzle | 0.011 | 0.038 | 3.45× | 0.042 | 3.82× | ok |
| Stanford/Treesort | 0.011 | 0.035 | 3.18× | 0.038 | 3.45× | ok |
| bg/binarytrees/2 | 0.084 | 0.182 | 2.17× | 0.246 | 2.93× | ok |
| bg/fannkuchredux/3 | 0.042 | 0.092 | 2.19× | 0.109 | 2.60× | ok |
| bg/fasta/1 | 0.066 | 0.150 | 2.27× | 0.162 | 2.45× | ok |
| bg/fasta/2 | 0.061 | 0.146 | 2.39× | 0.207 | 3.39× | ok |
| bg/fasta/3 | 0.100 | 0.215 | 2.15× | 0.285 | 2.85× | ok |
| bg/fasta/4 | 0.093 | 0.212 | 2.28× | 0.222 | 2.39× | ok |
| bg/fasta/6 | 0.154 | 0.454 | 2.95× | 0.514 | 3.34× | ok |
| bg/mandelbrot/0 | 0.182 | 0.506 | 2.78× | 0.538 | 2.96× | ok |
| bg/mandelbrot/2 | 0.108 | 0.253 | 2.34× | 0.373 | 3.45× | ok |
| bg/mandelbrot/3 | 0.112 | 0.237 | 2.12× | 0.316 | 2.82× | ok |
| bg/mandelbrot/5 | 0.055 | 0.152 | 2.76× | 0.149 | 2.71× | ok |
| bg/mandelbrot/7 | 0.061 | 0.161 | 2.64× | 0.168 | 2.75× | ok |
| bg/mandelbrot/9 | 0.053 | 0.153 | 2.89× | 0.145 | 2.74× | ok |
| bg/nbody/1 | 0.036 | 0.131 | 3.64× | 0.108 | 3.00× | ok |
| bg/nbody/2 | 0.033 | 0.079 | 2.39× | 0.088 | 2.67× | ok |
| bg/nbody/3 | 0.035 | 0.082 | 2.34× | 0.085 | 2.43× | ok |
| bg/nbody/6 | 0.035 | 0.120 | 3.43× | 0.110 | 3.14× | ok |
| bg/pidigits/4 | 0.146 | 0.340 | 2.33× | 0.448 | 3.07× | ok |
| bg/pidigits/5 | 0.089 | 0.203 | 2.28× | 0.272 | 3.06× | ok |
| bg/revcomp/1 | 0.118 | 0.253 | 2.14× | 0.320 | 2.71× | ok |
| bg/revcomp/5 | 0.090 | 0.225 | 2.50× | 0.323 | 3.59× | ok |
| bg/spectralnorm/1 | 0.139 | 0.299 | 2.15× | 0.368 | 2.65× | ok |
| box2d | 1.904 | 5.238 | 2.75× | 6.904 | 3.63× | ok |
| fmt | 0.600 | 2.485 | 4.14× | 2.552 | 4.25× | ok |
| hexxagon | 0.358 | 0.805 | 2.25× | 1.074 | 3.00× | ok |
| lambda | 0.071 | 0.367 | 5.17× | 0.282 | 3.97× | ok |
| minisat | 0.075 | 0.347 | 4.63× | 0.310 | 4.13× | ok |
| nlohmann-json | 0.523 | 2.314 | 4.42× | 2.006 | 3.84× | ok |
| pugixml | 0.302 | 1.465 | 4.85× | 1.232 | 4.08× | ok |
| pugixml-tests | 4.457 | 17.306 | 3.88× | 16.220 | 3.64× | ok |
| rapidjson | 0.143 | 0.546 | 3.82× | 0.443 | 3.10× | ok |
| re2 | 3.921 | 11.815 | 3.01× | 8.348 | 2.13× | ok |
| re2-test-re2 | 5.850 | 17.213 | 2.94× | 19.366 | 3.31× | ok |
| re2-test-search | 5.285 | 15.451 | 2.92× | 15.095 | 2.86× | ok |
| tramp3d-v4 | 0.814 | 9.021 | 11.08× | 3.136 | 3.85× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.115 | 1.075 | 9.35× | 0.508 | 4.42× | ok |
| Adobe-C++/loop_unroll | 0.466 | 5.977 | 12.83× | 4.715 | 10.12× | ok |
| Adobe-C++/simple_types_constant_folding | 0.272 | 2.902 | 10.67× | 2.525 | 9.28× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.229 | 2.482 | 10.84× | 1.924 | 8.40× | ok |
| Adobe-C++/stepanov_abstraction | 0.107 | 1.123 | 10.50× | 0.624 | 5.83× | ok |
| Adobe-C++/stepanov_vector | 0.135 | 1.528 | 11.32× | 0.591 | 4.38× | ok |
| Bullet | 7.208 | 44.492 | 6.17× | 32.244 | 4.47× | ok |
| CLAMR | 5.183 | 26.343 | 5.08× | 21.602 | 4.17× | ok |
| CoyoteBench/almabench | 0.038 | 0.172 | 4.53× | 0.139 | 3.66× | ok |
| CoyoteBench/fftbench | 0.147 | 0.469 | 3.19× | 0.473 | 3.22× | ok |
| CoyoteBench/huffbench | 0.045 | 0.247 | 5.49× | 0.145 | 3.22× | ok |
| CoyoteBench/lpbench | 0.051 | 0.225 | 4.41× | 0.250 | 4.90× | ok |
| DOE/HACCKernels | 0.146 | 0.488 | 3.34× | 0.449 | 3.08× | ok |
| DOE/HPCCG | 0.853 | 2.596 | 3.04× | 3.457 | 4.05× | ok |
| DOE/PENNANT | 2.116 | 6.842 | 3.23× | 6.944 | 3.28× | ok |
| DOE/miniFE | 1.095 | 4.503 | 4.11× | 3.741 | 3.42× | ok |
| Misc-C++-EH/spirit | 0.857 | 4.263 | 4.97× | 3.485 | 4.07× | ok |
| Misc-C++-Large/ray | 0.129 | 0.580 | 4.50× | 0.511 | 3.96× | ok |
| Misc-C++-Large/sphereflake | 0.145 | 0.792 | 5.46× | 0.493 | 3.40× | ok |
| Misc-C++/bigfib | 0.160 | 0.587 | 3.67× | 0.550 | 3.44× | ok |
| Misc-C++/oopack_v1p8 | 0.044 | 0.188 | 4.27× | 0.189 | 4.30× | ok |
| Misc-C++/stepanov_container | 0.243 | 0.928 | 3.82× | 0.998 | 4.11× | ok |
| Misc-C++/stepanov_v1p2 | 0.047 | 0.245 | 5.21× | 0.233 | 4.96× | ok |
| PAQ8p | 0.316 | 4.481 | 14.18× | 1.961 | 6.21× | ok |
| Prolangs-C++/life | 0.010 | 0.113 | 11.30× | 0.071 | 7.10× | ok |
| Prolangs-C++/ocean | 0.023 | 0.212 | 9.22× | 0.123 | 5.35× | ok |
| Prolangs-C++/primes | 0.009 | 0.039 | — | 0.041 | — | ok |
| Shootout-C++-EH/except | 0.103 | 0.236 | 2.29× | 0.318 | 3.09× | ok |
| Shootout-C++/ackermann | 0.090 | 0.228 | 2.53× | 0.256 | 2.84× | ok |
| Shootout-C++/ary3 | 0.122 | 0.288 | 2.36× | 0.401 | 3.29× | ok |
| Shootout-C++/fibo | 0.090 | 0.227 | 2.52× | 0.257 | 2.86× | ok |
| Shootout-C++/hash | 0.133 | 0.447 | 3.36× | 0.434 | 3.26× | ok |
| Shootout-C++/hash2 | 0.137 | 0.472 | 3.45× | 0.563 | 4.11× | ok |
| Shootout-C++/heapsort | 0.111 | 0.254 | 2.29× | 0.307 | 2.77× | ok |
| Shootout-C++/lists | 0.101 | 0.264 | 2.61× | 0.324 | 3.21× | ok |
| Shootout-C++/lists1 | 0.108 | 0.322 | 2.98× | 0.348 | 3.22× | ok |
| Shootout-C++/matrix | 0.090 | 0.245 | 2.72× | 0.344 | 3.82× | ok |
| Shootout-C++/methcall | 0.088 | 0.227 | 2.58× | 0.260 | 2.95× | ok |
| Shootout-C++/moments | 0.127 | 0.351 | 2.76× | 0.385 | 3.03× | ok |
| Shootout-C++/random | 0.107 | 0.234 | 2.19× | 0.291 | 2.72× | ok |
| Shootout-C++/sieve | 0.115 | 0.284 | 2.47× | 0.409 | 3.56× | ok |
| SmallPT | 0.045 | 0.328 | 7.29× | 0.190 | 4.22× | ok |
| Stanford/Bubblesort | 0.013 | 0.057 | 4.38× | 0.051 | 3.92× | ok |
| Stanford/FloatMM | 0.014 | 0.063 | 4.50× | 0.071 | 5.07× | ok |
| Stanford/Puzzle | 0.021 | 0.126 | 6.00× | 0.130 | 6.19× | ok |
| Stanford/Treesort | 0.017 | 0.094 | 5.53× | 0.059 | 3.47× | ok |
| bg/binarytrees/2 | 0.090 | 0.458 | 5.09× | 0.268 | 2.98× | ok |
| bg/fannkuchredux/3 | 0.048 | 0.142 | 2.96× | 0.139 | 2.90× | ok |
| bg/fasta/1 | 0.072 | 0.184 | 2.56× | 0.206 | 2.86× | ok |
| bg/fasta/2 | 0.072 | 0.180 | 2.50× | 0.217 | 3.01× | ok |
| bg/fasta/3 | 0.101 | 0.255 | 2.52× | 0.335 | 3.32× | ok |
| bg/fasta/4 | 0.096 | 0.217 | 2.26× | 0.254 | 2.65× | ok |
| bg/fasta/6 | 0.169 | 0.489 | 2.89× | 0.583 | 3.45× | ok |
| bg/mandelbrot/0 | 0.203 | 0.710 | 3.50× | 0.871 | 4.29× | ok |
| bg/mandelbrot/2 | 0.114 | 0.308 | 2.70× | 0.426 | 3.74× | ok |
| bg/mandelbrot/3 | 0.114 | 0.266 | 2.33× | 0.332 | 2.91× | ok |
| bg/mandelbrot/5 | 0.065 | 0.185 | 2.85× | 0.190 | 2.92× | ok |
| bg/mandelbrot/7 | 0.067 | 0.226 | 3.37× | 0.235 | 3.51× | ok |
| bg/mandelbrot/9 | 0.062 | 0.198 | 3.19× | 0.189 | 3.05× | ok |
| bg/nbody/1 | 0.050 | 0.181 | 3.62× | 0.192 | 3.84× | ok |
| bg/nbody/2 | 0.038 | 0.140 | 3.68× | 0.142 | 3.74× | ok |
| bg/nbody/3 | 0.041 | 0.138 | 3.37× | 0.126 | 3.07× | ok |
| bg/nbody/6 | 0.047 | 0.190 | 4.04× | 0.200 | 4.26× | ok |
| bg/pidigits/4 | 0.153 | 0.381 | 2.49× | 0.496 | 3.24× | ok |
| bg/pidigits/5 | 0.092 | 0.240 | 2.61× | 0.331 | 3.60× | ok |
| bg/revcomp/1 | 0.110 | 0.281 | 2.55× | 0.328 | 2.98× | ok |
| bg/revcomp/5 | 0.094 | 0.259 | 2.76× | 0.370 | 3.94× | ok |
| bg/spectralnorm/1 | 0.137 | 0.451 | 3.29× | 0.421 | 3.07× | ok |
| box2d | 2.265 | 8.716 | 3.85× | 8.592 | 3.79× | ok |
| fmt | 1.052 | 5.903 | 5.61× | 4.362 | 4.15× | ok |
| hexxagon | 0.394 | 1.372 | 3.48× | 1.470 | 3.73× | ok |
| lambda | 0.139 | 1.278 | 9.19× | 0.673 | 4.84× | ok |
| minisat | 0.156 | 1.105 | 7.08× | 0.735 | 4.71× | ok |
| nlohmann-json | 0.931 | 3.821 | 4.10× | 3.642 | 3.91× | ok |
| pugixml | 0.688 | 5.475 | 7.96× | 4.306 | 6.26× | ok |
| pugixml-tests | 6.176 | 38.715 | 6.27× | 29.500 | 4.78× | ok |
| rapidjson | 0.272 | 1.330 | 4.89× | 0.783 | 2.88× | ok |
| re2 | 3.989 | 20.059 | 5.03× | 11.903 | 2.98× | ok |
| re2-test-re2 | 7.098 | 29.707 | 4.19× | 26.239 | 3.70× | ok |
| re2-test-search | 6.982 | 28.496 | 4.08× | 22.206 | 3.18× | ok |
| tramp3d-v4 | 2.618 | 18.487 | 7.06× | 15.020 | 5.74× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.080 | 0.163 | 2.04× | 0.191 | 2.39× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.128 | 2.61× | 0.132 | 2.69× | ok |
| Adobe-C++/simple_types_constant_folding | 0.046 | 0.122 | 2.65× | 0.144 | 3.13× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.109 | 2.48× | 0.129 | 2.93× | ok |
| Adobe-C++/stepanov_abstraction | 0.040 | 0.088 | 2.20× | 0.107 | 2.67× | ok |
| Adobe-C++/stepanov_vector | 0.081 | 0.151 | 1.86× | 0.201 | 2.48× | ok |
| Bullet | 6.288 | 12.855 | 2.04× | 16.792 | 2.67× | ok |
| CLAMR | 2.722 | 5.858 | 2.15× | 8.872 | 3.26× | ok |
| CoyoteBench/almabench | 0.033 | 0.069 | 2.09× | 0.087 | 2.64× | ok |
| CoyoteBench/fftbench | 0.127 | 0.260 | 2.05× | 0.341 | 2.69× | ok |
| CoyoteBench/huffbench | 0.035 | 0.066 | 1.89× | 0.123 | 3.51× | ok |
| CoyoteBench/lpbench | 0.041 | 0.066 | 1.61× | 0.110 | 2.68× | ok |
| DOE/HACCKernels | 0.153 | 0.346 | 2.26× | 0.369 | 2.41× | ok |
| DOE/HPCCG | 0.768 | 1.640 | 2.14× | 2.804 | 3.65× | ok |
| DOE/PENNANT | 1.713 | 3.652 | 2.13× | 4.763 | 2.78× | ok |
| DOE/miniFE | 0.799 | 1.657 | 2.07× | 2.061 | 2.58× | ok |
| Misc-C++-EH/spirit | 0.334 | 0.978 | 2.93× | 1.507 | 4.51× | ok |
| Misc-C++-Large/ray | 0.143 | 0.264 | 1.85× | 0.323 | 2.26× | ok |
| Misc-C++-Large/sphereflake | 0.125 | 0.216 | 1.73× | 0.343 | 2.74× | ok |
| Misc-C++/bigfib | 0.152 | 0.339 | 2.23× | 0.369 | 2.43× | ok |
| Misc-C++/oopack_v1p8 | 0.035 | 0.074 | 2.11× | 0.102 | 2.91× | ok |
| Misc-C++/stepanov_container | 0.168 | 0.415 | 2.47× | 0.485 | 2.89× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.074 | 1.90× | 0.089 | 2.28× | ok |
| PAQ8p | 0.057 | 0.169 | 2.96× | 0.178 | 3.12× | ok |
| Prolangs-C++/life | 0.003 | 0.012 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.027 | 2.45× | 0.037 | 3.36× | ok |
| Prolangs-C++/primes | 0.007 | 0.019 | — | 0.028 | — | ok |
| Shootout-C++-EH/except | 0.099 | 0.185 | 1.87× | 0.281 | 2.84× | ok |
| Shootout-C++/ackermann | 0.085 | 0.184 | 2.16× | 0.248 | 2.92× | ok |
| Shootout-C++/ary3 | 0.102 | 0.227 | 2.23× | 0.357 | 3.50× | ok |
| Shootout-C++/fibo | 0.087 | 0.182 | 2.09× | 0.240 | 2.76× | ok |
| Shootout-C++/hash | 0.116 | 0.252 | 2.17× | 0.307 | 2.65× | ok |
| Shootout-C++/hash2 | 0.115 | 0.260 | 2.26× | 0.319 | 2.77× | ok |
| Shootout-C++/heapsort | 0.122 | 0.243 | 1.99× | 0.283 | 2.32× | ok |
| Shootout-C++/lists | 0.089 | 0.183 | 2.06× | 0.277 | 3.11× | ok |
| Shootout-C++/lists1 | 0.096 | 0.222 | 2.31× | 0.277 | 2.89× | ok |
| Shootout-C++/matrix | 0.083 | 0.172 | 2.07× | 0.232 | 2.80× | ok |
| Shootout-C++/methcall | 0.083 | 0.193 | 2.33× | 0.245 | 2.95× | ok |
| Shootout-C++/moments | 0.112 | 0.230 | 2.05× | 0.287 | 2.56× | ok |
| Shootout-C++/random | 0.102 | 0.212 | 2.08× | 0.283 | 2.77× | ok |
| Shootout-C++/sieve | 0.104 | 0.224 | 2.15× | 0.322 | 3.10× | ok |
| SmallPT | 0.033 | 0.070 | 2.12× | 0.085 | 2.58× | ok |
| Stanford/Bubblesort | 0.011 | 0.027 | 2.45× | 0.034 | 3.09× | ok |
| Stanford/FloatMM | 0.011 | 0.026 | 2.36× | 0.033 | 3.00× | ok |
| Stanford/Puzzle | 0.011 | 0.028 | 2.55× | 0.036 | 3.27× | ok |
| Stanford/Treesort | 0.011 | 0.029 | 2.64× | 0.036 | 3.27× | ok |
| bg/binarytrees/2 | 0.084 | 0.180 | 2.14× | 0.238 | 2.83× | ok |
| bg/fannkuchredux/3 | 0.042 | 0.080 | 1.90× | 0.104 | 2.48× | ok |
| bg/fasta/1 | 0.063 | 0.122 | 1.94× | 0.150 | 2.38× | ok |
| bg/fasta/2 | 0.058 | 0.116 | 2.00× | 0.189 | 3.26× | ok |
| bg/fasta/3 | 0.096 | 0.205 | 2.14× | 0.270 | 2.81× | ok |
| bg/fasta/4 | 0.091 | 0.208 | 2.29× | 0.211 | 2.32× | ok |
| bg/fasta/6 | 0.145 | 0.315 | 2.17× | 0.441 | 3.04× | ok |
| bg/mandelbrot/0 | 0.163 | 0.343 | 2.10× | 0.477 | 2.93× | ok |
| bg/mandelbrot/2 | 0.102 | 0.224 | 2.20× | 0.308 | 3.02× | ok |
| bg/mandelbrot/3 | 0.111 | 0.230 | 2.07× | 0.302 | 2.72× | ok |
| bg/mandelbrot/5 | 0.052 | 0.121 | 2.33× | 0.137 | 2.63× | ok |
| bg/mandelbrot/7 | 0.058 | 0.120 | 2.07× | 0.149 | 2.57× | ok |
| bg/mandelbrot/9 | 0.050 | 0.106 | 2.12× | 0.130 | 2.60× | ok |
| bg/nbody/1 | 0.034 | 0.079 | 2.32× | 0.091 | 2.68× | ok |
| bg/nbody/2 | 0.033 | 0.065 | 1.97× | 0.095 | 2.88× | ok |
| bg/nbody/3 | 0.034 | 0.069 | 2.03× | 0.080 | 2.35× | ok |
| bg/nbody/6 | 0.034 | 0.070 | 2.06× | 0.093 | 2.74× | ok |
| bg/pidigits/4 | 0.145 | 0.320 | 2.21× | 0.414 | 2.86× | ok |
| bg/pidigits/5 | 0.087 | 0.196 | 2.25× | 0.267 | 3.07× | ok |
| bg/revcomp/1 | 0.107 | 0.211 | 1.97× | 0.349 | 3.26× | ok |
| bg/revcomp/5 | 0.085 | 0.181 | 2.13× | 0.281 | 3.31× | ok |
| bg/spectralnorm/1 | 0.143 | 0.277 | 1.94× | 0.344 | 2.41× | ok |
| box2d | 1.699 | 3.952 | 2.33× | 6.067 | 3.57× | ok |
| fmt | 0.517 | 1.168 | 2.26× | 1.890 | 3.66× | ok |
| hexxagon | 0.339 | 0.670 | 1.98× | 1.052 | 3.10× | ok |
| lambda | 0.056 | 0.171 | 3.05× | 0.206 | 3.68× | ok |
| minisat | 0.063 | 0.166 | 2.63× | 0.218 | 3.46× | ok |
| nlohmann-json | 0.405 | 1.116 | 2.76× | 1.610 | 3.98× | ok |
| pugixml | 0.248 | 0.580 | 2.34× | 0.904 | 3.65× | ok |
| pugixml-tests | 3.783 | 8.634 | 2.28× | 13.048 | 3.45× | ok |
| rapidjson | 0.119 | 0.292 | 2.45× | 0.352 | 2.96× | ok |
| re2 | 3.656 | 7.802 | 2.13× | 7.091 | 1.94× | ok |
| re2-test-re2 | 5.331 | 11.524 | 2.16× | 16.586 | 3.11× | ok |
| re2-test-search | 4.988 | 11.431 | 2.29× | 16.929 | 3.39× | ok |
| tramp3d-v4 | 0.561 | 2.793 | 4.98× | 1.871 | 3.34× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
