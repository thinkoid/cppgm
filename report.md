# Public benchmarks: AMD EPYC

Measured compiler: [`54b8d0eeb`](https://github.com/vishvananda/cppgm-extended/commit/54b8d0eeb4b4d132a869dcf623e314c78269b705) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43682126908) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: AMD EPYC 9V74 80-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.24× | 79 | 2.94× | 79 |
| Compile CPU, `-O0` | 2.99× | 79 | 3.13× | 79 |
| Compile CPU, `-O3` | 4.14× | 80 | 3.88× | 80 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.32× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.21× | 81 | 1.24× | 81 |
| Run CPU, `-O3` | 1.00× | 80 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.958 to 1.087; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| bg/nbody/2 | 0.63× |
| bg/spectralnorm/1 | 0.75× |
| tramp3d-v4 | 0.78× |
| bg/nbody/1 | 0.82× |
| bg/mandelbrot/7 | 0.84× |
| bg/mandelbrot/9 | 0.84× |
| bg/mandelbrot/5 | 0.86× |
| bg/mandelbrot/2 | 0.86× |
| bg/nbody/3 | 0.87× |
| CoyoteBench/fftbench | 0.89× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm++ time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.081 | 0.306 | 3.78× | 0.232 | 2.86× | ok |
| Adobe-C++/loop_unroll | 0.068 | 0.634 | 9.32× | 0.231 | 3.40× | ok |
| Adobe-C++/simple_types_constant_folding | 0.069 | 0.726 | 10.52× | 0.302 | 4.38× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.061 | 0.521 | 8.54× | 0.241 | 3.95× | ok |
| Adobe-C++/stepanov_abstraction | 0.058 | 0.220 | 3.79× | 0.154 | 2.66× | ok |
| Adobe-C++/stepanov_vector | 0.096 | 0.337 | 3.51× | 0.257 | 2.68× | ok |
| Bullet | 6.154 | 21.090 | 3.43× | 20.045 | 3.26× | ok |
| CLAMR | 2.876 | 10.256 | 3.57× | 9.063 | 3.15× | ok |
| CoyoteBench/almabench | 0.036 | 0.097 | 2.69× | 0.105 | 2.92× | ok |
| CoyoteBench/fftbench | 0.130 | 0.288 | 2.22× | 0.383 | 2.95× | ok |
| CoyoteBench/huffbench | 0.038 | 0.081 | 2.13× | 0.095 | 2.50× | ok |
| CoyoteBench/lpbench | 0.034 | 0.088 | 2.59× | 0.091 | 2.68× | ok |
| DOE/HACCKernels | 0.143 | 0.365 | 2.55× | 0.420 | 2.94× | ok |
| DOE/HPCCG | 0.836 | 1.969 | 2.36× | 2.473 | 2.96× | ok |
| DOE/PENNANT | 2.033 | 4.509 | 2.22× | 5.439 | 2.68× | ok |
| DOE/miniFE | 0.800 | 2.308 | 2.88× | 2.617 | 3.27× | ok |
| Misc-C++-EH/spirit | 0.501 | 2.985 | 5.96× | 2.440 | 4.87× | ok |
| Misc-C++-Large/ray | 0.131 | 0.308 | 2.35× | 0.407 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.133 | 0.260 | 1.95× | 0.305 | 2.29× | ok |
| Misc-C++/bigfib | 0.145 | 0.408 | 2.81× | 0.601 | 4.14× | ok |
| Misc-C++/oopack_v1p8 | 0.040 | 0.116 | 2.90× | 0.122 | 3.05× | ok |
| Misc-C++/stepanov_container | 0.193 | 0.628 | 3.25× | 0.836 | 4.33× | ok |
| Misc-C++/stepanov_v1p2 | 0.037 | 0.143 | 3.86× | 0.118 | 3.19× | ok |
| PAQ8p | 0.080 | 0.508 | 6.35× | 0.301 | 3.76× | ok |
| Prolangs-C++/life | 0.005 | 0.038 | — | 0.035 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.075 | 5.77× | 0.057 | 4.38× | ok |
| Prolangs-C++/primes | 0.007 | 0.028 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.087 | 0.193 | 2.22× | 0.257 | 2.95× | ok |
| Shootout-C++/ackermann | 0.090 | 0.182 | 2.02× | 0.331 | 3.68× | ok |
| Shootout-C++/ary3 | 0.100 | 0.271 | 2.71× | 0.307 | 3.07× | ok |
| Shootout-C++/fibo | 0.089 | 0.221 | 2.48× | 0.331 | 3.72× | ok |
| Shootout-C++/hash | 0.134 | 0.341 | 2.54× | 0.351 | 2.62× | ok |
| Shootout-C++/hash2 | 0.135 | 0.347 | 2.57× | 0.425 | 3.15× | ok |
| Shootout-C++/heapsort | 0.114 | 0.233 | 2.04× | 0.303 | 2.66× | ok |
| Shootout-C++/lists | 0.095 | 0.224 | 2.36× | 0.317 | 3.34× | ok |
| Shootout-C++/lists1 | 0.115 | 0.264 | 2.30× | 0.341 | 2.97× | ok |
| Shootout-C++/matrix | 0.083 | 0.178 | 2.14× | 0.264 | 3.18× | ok |
| Shootout-C++/methcall | 0.089 | 0.192 | 2.16× | 0.263 | 2.96× | ok |
| Shootout-C++/moments | 0.122 | 0.300 | 2.46× | 0.328 | 2.69× | ok |
| Shootout-C++/random | 0.101 | 0.219 | 2.17× | 0.304 | 3.01× | ok |
| Shootout-C++/sieve | 0.106 | 0.278 | 2.62× | 0.327 | 3.08× | ok |
| SmallPT | 0.036 | 0.103 | 2.86× | 0.113 | 3.14× | ok |
| Stanford/Bubblesort | 0.011 | 0.034 | 3.09× | 0.039 | 3.55× | ok |
| Stanford/FloatMM | 0.010 | 0.032 | 3.20× | 0.039 | 3.90× | ok |
| Stanford/Puzzle | 0.013 | 0.043 | 3.31× | 0.043 | 3.31× | ok |
| Stanford/Treesort | 0.012 | 0.036 | 3.00× | 0.039 | 3.25× | ok |
| bg/binarytrees/2 | 0.087 | 0.189 | 2.17× | 0.264 | 3.03× | ok |
| bg/fannkuchredux/3 | 0.041 | 0.086 | 2.10× | 0.103 | 2.51× | ok |
| bg/fasta/1 | 0.065 | 0.148 | 2.28× | 0.171 | 2.63× | ok |
| bg/fasta/2 | 0.066 | 0.144 | 2.18× | 0.162 | 2.45× | ok |
| bg/fasta/3 | 0.105 | 0.216 | 2.06× | 0.278 | 2.65× | ok |
| bg/fasta/4 | 0.093 | 0.176 | 1.89× | 0.259 | 2.78× | ok |
| bg/fasta/6 | 0.164 | 0.454 | 2.77× | 0.509 | 3.10× | ok |
| bg/mandelbrot/0 | 0.196 | 0.522 | 2.66× | 0.538 | 2.74× | ok |
| bg/mandelbrot/2 | 0.108 | 0.268 | 2.48× | 0.326 | 3.02× | ok |
| bg/mandelbrot/3 | 0.115 | 0.244 | 2.12× | 0.330 | 2.87× | ok |
| bg/mandelbrot/5 | 0.049 | 0.126 | 2.57× | 0.170 | 3.47× | ok |
| bg/mandelbrot/7 | 0.057 | 0.140 | 2.46× | 0.161 | 2.82× | ok |
| bg/mandelbrot/9 | 0.051 | 0.132 | 2.59× | 0.161 | 3.16× | ok |
| bg/nbody/1 | 0.035 | 0.119 | 3.40× | 0.112 | 3.20× | ok |
| bg/nbody/2 | 0.034 | 0.078 | 2.29× | 0.091 | 2.68× | ok |
| bg/nbody/3 | 0.037 | 0.084 | 2.27× | 0.095 | 2.57× | ok |
| bg/nbody/6 | 0.035 | 0.118 | 3.37× | 0.130 | 3.71× | ok |
| bg/pidigits/4 | 0.144 | 0.356 | 2.47× | 0.499 | 3.47× | ok |
| bg/pidigits/5 | 0.099 | 0.205 | 2.07× | 0.271 | 2.74× | ok |
| bg/revcomp/1 | 0.118 | 0.251 | 2.13× | 0.368 | 3.12× | ok |
| bg/revcomp/5 | 0.087 | 0.267 | 3.07× | 0.274 | 3.15× | ok |
| bg/spectralnorm/1 | 0.145 | 0.348 | 2.40× | 0.422 | 2.91× | ok |
| box2d | 1.779 | 5.371 | 3.02× | 6.925 | 3.89× | ok |
| fmt | 0.609 | 2.491 | 4.09× | 2.574 | 4.23× | ok |
| hexxagon | 0.333 | 0.778 | 2.34× | 0.907 | 2.72× | ok |
| lambda | 0.070 | 0.372 | 5.31× | 0.293 | 4.19× | ok |
| minisat | 0.083 | 0.338 | 4.07× | 0.301 | 3.63× | ok |
| nlohmann-json | 0.533 | 2.337 | 4.38× | 1.906 | 3.58× | ok |
| pugixml | 0.357 | 1.666 | 4.67× | 1.099 | 3.08× | ok |
| pugixml-tests | 4.664 | 17.721 | 3.80× | 14.730 | 3.16× | ok |
| rapidjson | 0.154 | 0.551 | 3.58× | 0.506 | 3.29× | ok |
| re2 | 3.879 | 12.523 | 3.23× | 8.221 | 2.12× | ok |
| re2-test-re2 | 5.719 | 17.908 | 3.13× | 19.583 | 3.42× | ok |
| re2-test-search | 5.675 | 16.174 | 2.85× | 15.142 | 2.67× | ok |
| tramp3d-v4 | 0.882 | 9.624 | 10.91× | 3.039 | 3.45× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.145 | 1.121 | 7.73× | 0.595 | 4.10× | ok |
| Adobe-C++/loop_unroll | 0.476 | 6.274 | 13.18× | 5.613 | 11.79× | ok |
| Adobe-C++/simple_types_constant_folding | 0.278 | 3.069 | 11.04× | 2.621 | 9.43× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.243 | 2.636 | 10.85× | 2.352 | 9.68× | ok |
| Adobe-C++/stepanov_abstraction | 0.110 | 1.248 | 11.35× | 0.542 | 4.93× | ok |
| Adobe-C++/stepanov_vector | 0.147 | 1.597 | 10.86× | 0.704 | 4.79× | ok |
| Bullet | 7.734 | 42.322 | 5.47× | 30.752 | 3.98× | ok |
| CLAMR | 5.115 | 26.487 | 5.18× | 19.763 | 3.86× | ok |
| CoyoteBench/almabench | 0.042 | 0.182 | 4.33× | 0.157 | 3.74× | ok |
| CoyoteBench/fftbench | 0.146 | 0.452 | 3.10× | 0.495 | 3.39× | ok |
| CoyoteBench/huffbench | 0.043 | 0.256 | 5.95× | 0.172 | 4.00× | ok |
| CoyoteBench/lpbench | 0.043 | 0.187 | 4.35× | 0.261 | 6.07× | ok |
| DOE/HACCKernels | 0.145 | 0.498 | 3.43× | 0.475 | 3.28× | ok |
| DOE/HPCCG | 0.827 | 2.760 | 3.34× | 2.831 | 3.42× | ok |
| DOE/PENNANT | 2.118 | 6.944 | 3.28× | 6.964 | 3.29× | ok |
| DOE/miniFE | 1.030 | 4.472 | 4.34× | 4.549 | 4.42× | ok |
| Misc-C++-EH/spirit | 0.764 | 4.176 | 5.47× | 4.476 | 5.86× | ok |
| Misc-C++-Large/ray | 0.144 | 0.543 | 3.77× | 0.592 | 4.11× | ok |
| Misc-C++-Large/sphereflake | 0.137 | 0.809 | 5.91× | 0.433 | 3.16× | ok |
| Misc-C++/bigfib | 0.175 | 0.583 | 3.33× | 0.652 | 3.73× | ok |
| Misc-C++/oopack_v1p8 | 0.050 | 0.225 | 4.50× | 0.201 | 4.02× | ok |
| Misc-C++/stepanov_container | 0.298 | 0.994 | 3.34× | 1.115 | 3.74× | ok |
| Misc-C++/stepanov_v1p2 | 0.049 | 0.238 | 4.86× | 0.241 | 4.92× | ok |
| PAQ8p | 0.343 | 4.542 | 13.24× | 1.913 | 5.58× | ok |
| Prolangs-C++/life | 0.011 | 0.111 | 10.09× | 0.074 | 6.73× | ok |
| Prolangs-C++/ocean | 0.024 | 0.220 | 9.17× | 0.130 | 5.42× | ok |
| Prolangs-C++/primes | 0.009 | 0.042 | — | 0.042 | — | ok |
| Shootout-C++-EH/except | 0.089 | 0.215 | 2.42× | 0.268 | 3.01× | ok |
| Shootout-C++/ackermann | 0.097 | 0.233 | 2.40× | 0.339 | 3.49× | ok |
| Shootout-C++/ary3 | 0.106 | 0.290 | 2.74× | 0.364 | 3.43× | ok |
| Shootout-C++/fibo | 0.101 | 0.235 | 2.33× | 0.322 | 3.19× | ok |
| Shootout-C++/hash | 0.142 | 0.448 | 3.15× | 0.444 | 3.13× | ok |
| Shootout-C++/hash2 | 0.164 | 0.433 | 2.64× | 0.504 | 3.07× | ok |
| Shootout-C++/heapsort | 0.118 | 0.247 | 2.09× | 0.333 | 2.82× | ok |
| Shootout-C++/lists | 0.108 | 0.269 | 2.49× | 0.336 | 3.11× | ok |
| Shootout-C++/lists1 | 0.125 | 0.308 | 2.46× | 0.377 | 3.02× | ok |
| Shootout-C++/matrix | 0.094 | 0.232 | 2.47× | 0.359 | 3.82× | ok |
| Shootout-C++/methcall | 0.092 | 0.231 | 2.51× | 0.283 | 3.08× | ok |
| Shootout-C++/moments | 0.129 | 0.364 | 2.82× | 0.389 | 3.02× | ok |
| Shootout-C++/random | 0.106 | 0.235 | 2.22× | 0.312 | 2.94× | ok |
| Shootout-C++/sieve | 0.115 | 0.322 | 2.80× | 0.354 | 3.08× | ok |
| SmallPT | 0.050 | 0.334 | 6.68× | 0.198 | 3.96× | ok |
| Stanford/Bubblesort | 0.014 | 0.062 | 4.43× | 0.056 | 4.00× | ok |
| Stanford/FloatMM | 0.014 | 0.065 | 4.64× | 0.079 | 5.64× | ok |
| Stanford/Puzzle | 0.023 | 0.142 | 6.17× | 0.133 | 5.78× | ok |
| Stanford/Treesort | 0.017 | 0.097 | 5.71× | 0.061 | 3.59× | ok |
| bg/binarytrees/2 | 0.092 | 0.466 | 5.07× | 0.283 | 3.08× | ok |
| bg/fannkuchredux/3 | 0.046 | 0.133 | 2.89× | 0.134 | 2.91× | ok |
| bg/fasta/1 | 0.070 | 0.187 | 2.67× | 0.203 | 2.90× | ok |
| bg/fasta/2 | 0.071 | 0.188 | 2.65× | 0.204 | 2.87× | ok |
| bg/fasta/3 | 0.103 | 0.260 | 2.52× | 0.380 | 3.69× | ok |
| bg/fasta/4 | 0.099 | 0.259 | 2.62× | 0.312 | 3.15× | ok |
| bg/fasta/6 | 0.174 | 0.550 | 3.16× | 0.622 | 3.57× | ok |
| bg/mandelbrot/0 | 0.208 | 0.744 | 3.58× | 0.755 | 3.63× | ok |
| bg/mandelbrot/2 | 0.112 | 0.309 | 2.76× | 0.370 | 3.30× | ok |
| bg/mandelbrot/3 | 0.118 | 0.281 | 2.38× | 0.359 | 3.04× | ok |
| bg/mandelbrot/5 | 0.057 | 0.170 | 2.98× | 0.178 | 3.12× | ok |
| bg/mandelbrot/7 | 0.066 | 0.199 | 3.02× | 0.201 | 3.05× | ok |
| bg/mandelbrot/9 | 0.061 | 0.240 | 3.93× | 0.203 | 3.33× | ok |
| bg/nbody/1 | 0.047 | 0.177 | 3.77× | 0.195 | 4.15× | ok |
| bg/nbody/2 | 0.039 | 0.141 | 3.62× | 0.139 | 3.56× | ok |
| bg/nbody/3 | 0.039 | 0.140 | 3.59× | 0.130 | 3.33× | ok |
| bg/nbody/6 | 0.053 | 0.193 | 3.64× | 0.210 | 3.96× | ok |
| bg/pidigits/4 | 0.156 | 0.396 | 2.54× | 0.501 | 3.21× | ok |
| bg/pidigits/5 | 0.091 | 0.237 | 2.60× | 0.286 | 3.14× | ok |
| bg/revcomp/1 | 0.105 | 0.287 | 2.73× | 0.344 | 3.28× | ok |
| bg/revcomp/5 | 0.095 | 0.249 | 2.62× | 0.312 | 3.28× | ok |
| bg/spectralnorm/1 | 0.155 | 0.406 | 2.62× | 0.553 | 3.57× | ok |
| box2d | 2.274 | 8.533 | 3.75× | 8.321 | 3.66× | ok |
| fmt | 1.170 | 5.873 | 5.02× | 4.736 | 4.05× | ok |
| hexxagon | 0.340 | 1.290 | 3.79× | 1.267 | 3.73× | ok |
| lambda | 0.148 | 1.342 | 9.07× | 0.680 | 4.59× | ok |
| minisat | 0.165 | 1.091 | 6.61× | 0.746 | 4.52× | ok |
| nlohmann-json | 0.898 | 3.834 | 4.27× | 3.649 | 4.06× | ok |
| pugixml | 0.782 | 6.223 | 7.96× | 4.302 | 5.50× | ok |
| pugixml-tests | 6.373 | 39.961 | 6.27× | 28.382 | 4.45× | ok |
| rapidjson | 0.261 | 1.442 | 5.52× | 0.843 | 3.23× | ok |
| re2 | 3.760 | 20.078 | 5.34× | 11.437 | 3.04× | ok |
| re2-test-re2 | 7.058 | 30.162 | 4.27× | 26.691 | 3.78× | ok |
| re2-test-search | 6.720 | 26.769 | 3.98× | 20.209 | 3.01× | ok |
| tramp3d-v4 | 2.630 | 18.691 | 7.11× | 14.726 | 5.60× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.078 | 0.166 | 2.13× | 0.202 | 2.59× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.122 | 2.49× | 0.137 | 2.80× | ok |
| Adobe-C++/simple_types_constant_folding | 0.049 | 0.128 | 2.61× | 0.147 | 3.00× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.117 | 2.60× | 0.129 | 2.87× | ok |
| Adobe-C++/stepanov_abstraction | 0.046 | 0.101 | 2.20× | 0.119 | 2.59× | ok |
| Adobe-C++/stepanov_vector | 0.081 | 0.159 | 1.96× | 0.235 | 2.90× | ok |
| Bullet | 5.795 | 14.209 | 2.45× | 16.280 | 2.81× | ok |
| CLAMR | 2.662 | 6.512 | 2.45× | 7.827 | 2.94× | ok |
| CoyoteBench/almabench | 0.034 | 0.081 | 2.38× | 0.098 | 2.88× | ok |
| CoyoteBench/fftbench | 0.127 | 0.254 | 2.00× | 0.352 | 2.77× | ok |
| CoyoteBench/huffbench | 0.037 | 0.069 | 1.86× | 0.092 | 2.49× | ok |
| CoyoteBench/lpbench | 0.034 | 0.072 | 2.12× | 0.086 | 2.53× | ok |
| DOE/HACCKernels | 0.139 | 0.339 | 2.44× | 0.384 | 2.76× | ok |
| DOE/HPCCG | 0.783 | 1.739 | 2.22× | 2.347 | 3.00× | ok |
| DOE/PENNANT | 1.740 | 3.494 | 2.01× | 4.840 | 2.78× | ok |
| DOE/miniFE | 0.695 | 1.531 | 2.20× | 2.273 | 3.27× | ok |
| Misc-C++-EH/spirit | 0.367 | 1.054 | 2.87× | 1.650 | 4.50× | ok |
| Misc-C++-Large/ray | 0.126 | 0.257 | 2.04× | 0.378 | 3.00× | ok |
| Misc-C++-Large/sphereflake | 0.125 | 0.252 | 2.02× | 0.278 | 2.22× | ok |
| Misc-C++/bigfib | 0.132 | 0.283 | 2.14× | 0.531 | 4.02× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.089 | 2.28× | 0.108 | 2.77× | ok |
| Misc-C++/stepanov_container | 0.179 | 0.380 | 2.12× | 0.699 | 3.91× | ok |
| Misc-C++/stepanov_v1p2 | 0.035 | 0.082 | 2.34× | 0.100 | 2.86× | ok |
| PAQ8p | 0.056 | 0.142 | 2.54× | 0.180 | 3.21× | ok |
| Prolangs-C++/life | 0.004 | 0.013 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.029 | 2.64× | 0.039 | 3.55× | ok |
| Prolangs-C++/primes | 0.007 | 0.020 | — | 0.030 | — | ok |
| Shootout-C++-EH/except | 0.088 | 0.193 | 2.19× | 0.250 | 2.84× | ok |
| Shootout-C++/ackermann | 0.088 | 0.187 | 2.12× | 0.314 | 3.57× | ok |
| Shootout-C++/ary3 | 0.097 | 0.249 | 2.57× | 0.283 | 2.92× | ok |
| Shootout-C++/fibo | 0.090 | 0.217 | 2.41× | 0.316 | 3.51× | ok |
| Shootout-C++/hash | 0.127 | 0.264 | 2.08× | 0.314 | 2.47× | ok |
| Shootout-C++/hash2 | 0.127 | 0.263 | 2.07× | 0.394 | 3.10× | ok |
| Shootout-C++/heapsort | 0.117 | 0.236 | 2.02× | 0.290 | 2.48× | ok |
| Shootout-C++/lists | 0.091 | 0.185 | 2.03× | 0.288 | 3.16× | ok |
| Shootout-C++/lists1 | 0.112 | 0.217 | 1.94× | 0.310 | 2.77× | ok |
| Shootout-C++/matrix | 0.082 | 0.172 | 2.10× | 0.256 | 3.12× | ok |
| Shootout-C++/methcall | 0.088 | 0.189 | 2.15× | 0.249 | 2.83× | ok |
| Shootout-C++/moments | 0.113 | 0.236 | 2.09× | 0.297 | 2.63× | ok |
| Shootout-C++/random | 0.102 | 0.217 | 2.13× | 0.288 | 2.82× | ok |
| Shootout-C++/sieve | 0.101 | 0.232 | 2.30× | 0.315 | 3.12× | ok |
| SmallPT | 0.035 | 0.069 | 1.97× | 0.101 | 2.89× | ok |
| Stanford/Bubblesort | 0.012 | 0.029 | 2.42× | 0.037 | 3.08× | ok |
| Stanford/FloatMM | 0.011 | 0.028 | 2.55× | 0.038 | 3.45× | ok |
| Stanford/Puzzle | 0.012 | 0.032 | 2.67× | 0.040 | 3.33× | ok |
| Stanford/Treesort | 0.012 | 0.030 | 2.50× | 0.037 | 3.08× | ok |
| bg/binarytrees/2 | 0.085 | 0.185 | 2.18× | 0.249 | 2.93× | ok |
| bg/fannkuchredux/3 | 0.041 | 0.074 | 1.80× | 0.098 | 2.39× | ok |
| bg/fasta/1 | 0.063 | 0.119 | 1.89× | 0.158 | 2.51× | ok |
| bg/fasta/2 | 0.064 | 0.116 | 1.81× | 0.150 | 2.34× | ok |
| bg/fasta/3 | 0.096 | 0.199 | 2.07× | 0.265 | 2.76× | ok |
| bg/fasta/4 | 0.091 | 0.172 | 1.89× | 0.221 | 2.43× | ok |
| bg/fasta/6 | 0.153 | 0.341 | 2.23× | 0.432 | 2.82× | ok |
| bg/mandelbrot/0 | 0.189 | 0.356 | 1.88× | 0.481 | 2.54× | ok |
| bg/mandelbrot/2 | 0.106 | 0.250 | 2.36× | 0.297 | 2.80× | ok |
| bg/mandelbrot/3 | 0.112 | 0.262 | 2.34× | 0.362 | 3.23× | ok |
| bg/mandelbrot/5 | 0.050 | 0.105 | 2.10× | 0.138 | 2.76× | ok |
| bg/mandelbrot/7 | 0.053 | 0.104 | 1.96× | 0.145 | 2.74× | ok |
| bg/mandelbrot/9 | 0.048 | 0.098 | 2.04× | 0.142 | 2.96× | ok |
| bg/nbody/1 | 0.034 | 0.072 | 2.12× | 0.097 | 2.85× | ok |
| bg/nbody/2 | 0.034 | 0.065 | 1.91× | 0.086 | 2.53× | ok |
| bg/nbody/3 | 0.034 | 0.070 | 2.06× | 0.081 | 2.38× | ok |
| bg/nbody/6 | 0.033 | 0.072 | 2.18× | 0.101 | 3.06× | ok |
| bg/pidigits/4 | 0.145 | 0.318 | 2.19× | 0.526 | 3.63× | ok |
| bg/pidigits/5 | 0.104 | 0.200 | 1.92× | 0.254 | 2.44× | ok |
| bg/revcomp/1 | 0.099 | 0.204 | 2.06× | 0.320 | 3.23× | ok |
| bg/revcomp/5 | 0.083 | 0.259 | 3.12× | 0.244 | 2.94× | ok |
| bg/spectralnorm/1 | 0.143 | 0.325 | 2.27× | 0.395 | 2.76× | ok |
| box2d | 1.726 | 3.794 | 2.20× | 6.145 | 3.56× | ok |
| fmt | 0.544 | 1.160 | 2.13× | 2.033 | 3.74× | ok |
| hexxagon | 0.320 | 0.708 | 2.21× | 0.857 | 2.68× | ok |
| lambda | 0.055 | 0.170 | 3.09× | 0.214 | 3.89× | ok |
| minisat | 0.072 | 0.165 | 2.29× | 0.207 | 2.88× | ok |
| nlohmann-json | 0.454 | 1.123 | 2.47× | 1.502 | 3.31× | ok |
| pugixml | 0.270 | 0.709 | 2.63× | 0.817 | 3.03× | ok |
| pugixml-tests | 3.912 | 9.260 | 2.37× | 12.393 | 3.17× | ok |
| rapidjson | 0.126 | 0.300 | 2.38× | 0.403 | 3.20× | ok |
| re2 | 3.689 | 8.113 | 2.20× | 7.011 | 1.90× | ok |
| re2-test-re2 | 5.224 | 11.481 | 2.20× | 17.113 | 3.28× | ok |
| re2-test-search | 5.060 | 11.268 | 2.23× | 17.302 | 3.42× | ok |
| tramp3d-v4 | 0.530 | 2.308 | 4.35× | 1.799 | 3.39× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
