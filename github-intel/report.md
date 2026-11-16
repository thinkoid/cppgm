# Public benchmarks: Intel (GitHub)

Measured compiler: [`50b6ccfce`](https://github.com/vishvananda/cppgm/commit/50b6ccfce58613983aa027e54e11d6a071971a9a) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43916759918) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.32× | 74 | 2.96× | 74 |
| Compile CPU, `-O0` | 3.25× | 74 | 3.24× | 74 |
| Compile CPU, `-O3` | 4.39× | 80 | 3.90× | 80 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.18× | 81 |
| Compile peak RSS, `-O3` | 1.71× | 81 | 2.29× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.14× | 81 | 1.10× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.913 to 1.063; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.249 | 3.95× | 0.210 | 3.33× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.555 | 11.33× | 0.171 | 3.49× | ok |
| Adobe-C++/simple_types_constant_folding | 0.054 | 0.635 | 11.76× | 0.205 | 3.80× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.471 | 10.47× | 0.224 | 4.98× | ok |
| Adobe-C++/stepanov_abstraction | 0.038 | 0.182 | 4.79× | 0.108 | 2.84× | ok |
| Adobe-C++/stepanov_vector | 0.072 | 0.269 | 3.74× | 0.234 | 3.25× | ok |
| Bullet | 4.200 | 16.960 | 4.04× | 13.989 | 3.33× | ok |
| CLAMR | 2.260 | 8.125 | 3.60× | 7.101 | 3.14× | ok |
| CoyoteBench/almabench | 0.030 | 0.072 | 2.40× | 0.074 | 2.47× | ok |
| CoyoteBench/fftbench | 0.099 | 0.248 | 2.51× | 0.299 | 3.02× | ok |
| CoyoteBench/huffbench | 0.028 | 0.063 | 2.25× | 0.080 | 2.86× | ok |
| CoyoteBench/lpbench | 0.025 | 0.067 | 2.68× | 0.069 | 2.76× | ok |
| DOE/HACCKernels | 0.097 | 0.248 | 2.56× | 0.291 | 3.00× | ok |
| DOE/HPCCG | 0.568 | 1.488 | 2.62× | 2.157 | 3.80× | ok |
| DOE/PENNANT | 1.249 | 4.188 | 3.35× | 3.857 | 3.09× | ok |
| DOE/miniFE | 0.566 | 2.109 | 3.73× | 1.911 | 3.38× | ok |
| Misc-C++-EH/spirit | 0.360 | 2.211 | 6.14× | 1.898 | 5.27× | ok |
| Misc-C++-Large/ray | 0.096 | 0.271 | 2.82× | 0.340 | 3.54× | ok |
| Misc-C++-Large/sphereflake | 0.079 | 0.222 | 2.81× | 0.278 | 3.52× | ok |
| Misc-C++/bigfib | 0.110 | 0.345 | 3.14× | 0.407 | 3.70× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.088 | 2.93× | 0.090 | 3.00× | ok |
| Misc-C++/stepanov_container | 0.138 | 0.564 | 4.09× | 0.436 | 3.16× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.111 | 3.96× | 0.085 | 3.04× | ok |
| PAQ8p | 0.059 | 0.410 | 6.95× | 0.200 | 3.39× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.056 | — | 0.039 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.061 | 0.142 | 2.33× | 0.191 | 3.13× | ok |
| Shootout-C++/ackermann | 0.067 | 0.156 | 2.33× | 0.239 | 3.57× | ok |
| Shootout-C++/ary3 | 0.074 | 0.176 | 2.38× | 0.213 | 2.88× | ok |
| Shootout-C++/fibo | 0.071 | 0.160 | 2.25× | 0.235 | 3.31× | ok |
| Shootout-C++/hash | 0.106 | 0.306 | 2.89× | 0.338 | 3.19× | ok |
| Shootout-C++/hash2 | 0.094 | 0.265 | 2.82× | 0.279 | 2.97× | ok |
| Shootout-C++/heapsort | 0.079 | 0.188 | 2.38× | 0.226 | 2.86× | ok |
| Shootout-C++/lists | 0.084 | 0.189 | 2.25× | 0.260 | 3.10× | ok |
| Shootout-C++/lists1 | 0.077 | 0.212 | 2.75× | 0.234 | 3.04× | ok |
| Shootout-C++/matrix | 0.063 | 0.138 | 2.19× | 0.209 | 3.32× | ok |
| Shootout-C++/methcall | 0.059 | 0.143 | 2.42× | 0.187 | 3.17× | ok |
| Shootout-C++/moments | 0.086 | 0.251 | 2.92× | 0.245 | 2.85× | ok |
| Shootout-C++/random | 0.077 | 0.166 | 2.16× | 0.226 | 2.94× | ok |
| Shootout-C++/sieve | 0.079 | 0.222 | 2.81× | 0.252 | 3.19× | ok |
| SmallPT | 0.026 | 0.082 | 3.15× | 0.078 | 3.00× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.026 | — | ok |
| bg/binarytrees/2 | 0.061 | 0.139 | 2.28× | 0.190 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.065 | 2.17× | 0.079 | 2.63× | ok |
| bg/fasta/1 | 0.054 | 0.115 | 2.13× | 0.126 | 2.33× | ok |
| bg/fasta/2 | 0.049 | 0.117 | 2.39× | 0.131 | 2.67× | ok |
| bg/fasta/3 | 0.073 | 0.174 | 2.38× | 0.211 | 2.89× | ok |
| bg/fasta/4 | 0.065 | 0.141 | 2.17× | 0.171 | 2.63× | ok |
| bg/fasta/6 | 0.118 | 0.353 | 2.99× | 0.420 | 3.56× | ok |
| bg/mandelbrot/0 | 0.142 | 0.406 | 2.86× | 0.444 | 3.13× | ok |
| bg/mandelbrot/2 | 0.070 | 0.197 | 2.81× | 0.255 | 3.64× | ok |
| bg/mandelbrot/3 | 0.090 | 0.193 | 2.14× | 0.260 | 2.89× | ok |
| bg/mandelbrot/5 | 0.041 | 0.106 | 2.59× | 0.119 | 2.90× | ok |
| bg/mandelbrot/7 | 0.046 | 0.119 | 2.59× | 0.127 | 2.76× | ok |
| bg/mandelbrot/9 | 0.039 | 0.111 | 2.85× | 0.132 | 3.38× | ok |
| bg/nbody/1 | 0.026 | 0.104 | 4.00× | 0.085 | 3.27× | ok |
| bg/nbody/2 | 0.022 | 0.061 | 2.77× | 0.065 | 2.95× | ok |
| bg/nbody/3 | 0.024 | 0.062 | 2.58× | 0.073 | 3.04× | ok |
| bg/nbody/6 | 0.027 | 0.098 | 3.63× | 0.085 | 3.15× | ok |
| bg/pidigits/4 | 0.103 | 0.286 | 2.78× | 0.332 | 3.22× | ok |
| bg/pidigits/5 | 0.071 | 0.167 | 2.35× | 0.210 | 2.96× | ok |
| bg/revcomp/1 | 0.085 | 0.206 | 2.42× | 0.246 | 2.89× | ok |
| bg/revcomp/5 | 0.077 | 0.212 | 2.75× | 0.222 | 2.88× | ok |
| bg/spectralnorm/1 | 0.096 | 0.248 | 2.58× | 0.352 | 3.67× | ok |
| box2d | 1.335 | 4.119 | 3.09× | 4.229 | 3.17× | ok |
| fmt | 0.438 | 2.223 | 5.08× | 1.994 | 4.55× | ok |
| hexxagon | 0.230 | 0.635 | 2.76× | 0.830 | 3.61× | ok |
| lambda | 0.049 | 0.297 | 6.06× | 0.216 | 4.41× | ok |
| minisat | 0.057 | 0.290 | 5.09× | 0.210 | 3.68× | ok |
| nlohmann-json | 0.375 | 1.853 | 4.94× | 1.789 | 4.77× | ok |
| pugixml | 0.263 | 1.342 | 5.10× | 1.018 | 3.87× | ok |
| pugixml-tests | 3.215 | 14.559 | 4.53× | 12.477 | 3.88× | ok |
| rapidjson | 0.109 | 0.469 | 4.30× | 0.351 | 3.22× | ok |
| re2 | 2.687 | 10.125 | 3.77× | 6.790 | 2.53× | ok |
| re2-test-re2 | 4.442 | 15.127 | 3.41× | 15.794 | 3.56× | ok |
| re2-test-search | 4.530 | 14.187 | 3.13× | 13.794 | 3.05× | ok |
| tramp3d-v4 | 0.684 | 6.280 | 9.18× | 2.603 | 3.81× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.127 | 0.804 | 6.33× | 0.465 | 3.66× | ok |
| Adobe-C++/loop_unroll | 0.439 | 5.201 | 11.85× | 4.072 | 9.28× | ok |
| Adobe-C++/simple_types_constant_folding | 0.242 | 2.774 | 11.46× | 2.209 | 9.13× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.198 | 2.151 | 10.86× | 1.780 | 8.99× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 0.996 | 10.83× | 0.518 | 5.63× | ok |
| Adobe-C++/stepanov_vector | 0.114 | 1.401 | 12.29× | 0.619 | 5.43× | ok |
| Bullet | 6.037 | 35.360 | 5.86× | 27.421 | 4.54× | ok |
| CLAMR | 4.061 | 22.224 | 5.47× | 16.789 | 4.13× | ok |
| CoyoteBench/almabench | 0.032 | 0.170 | 5.31× | 0.110 | 3.44× | ok |
| CoyoteBench/fftbench | 0.126 | 0.408 | 3.24× | 0.413 | 3.28× | ok |
| CoyoteBench/huffbench | 0.037 | 0.196 | 5.30× | 0.137 | 3.70× | ok |
| CoyoteBench/lpbench | 0.034 | 0.166 | 4.88× | 0.175 | 5.15× | ok |
| DOE/HACCKernels | 0.108 | 0.352 | 3.26× | 0.355 | 3.29× | ok |
| DOE/HPCCG | 0.625 | 2.179 | 3.49× | 2.244 | 3.59× | ok |
| DOE/PENNANT | 1.700 | 6.581 | 3.87× | 5.638 | 3.32× | ok |
| DOE/miniFE | 0.791 | 3.995 | 5.05× | 3.544 | 4.48× | ok |
| Misc-C++-EH/spirit | 0.648 | 3.183 | 4.91× | 3.302 | 5.10× | ok |
| Misc-C++-Large/ray | 0.113 | 0.443 | 3.92× | 0.394 | 3.49× | ok |
| Misc-C++-Large/sphereflake | 0.100 | 0.710 | 7.10× | 0.380 | 3.80× | ok |
| Misc-C++/bigfib | 0.145 | 0.508 | 3.50× | 0.525 | 3.62× | ok |
| Misc-C++/oopack_v1p8 | 0.038 | 0.183 | 4.82× | 0.170 | 4.47× | ok |
| Misc-C++/stepanov_container | 0.195 | 0.874 | 4.48× | 0.780 | 4.00× | ok |
| Misc-C++/stepanov_v1p2 | 0.043 | 0.195 | 4.53× | 0.176 | 4.09× | ok |
| PAQ8p | 0.290 | 3.522 | 12.14× | 1.475 | 5.09× | ok |
| Prolangs-C++/life | 0.010 | 0.102 | 10.20× | 0.067 | 6.70× | ok |
| Prolangs-C++/ocean | 0.019 | 0.184 | 9.68× | 0.103 | 5.42× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.169 | 2.56× | 0.204 | 3.09× | ok |
| Shootout-C++/ackermann | 0.074 | 0.200 | 2.70× | 0.246 | 3.32× | ok |
| Shootout-C++/ary3 | 0.074 | 0.217 | 2.93× | 0.245 | 3.31× | ok |
| Shootout-C++/fibo | 0.075 | 0.203 | 2.71× | 0.237 | 3.16× | ok |
| Shootout-C++/hash | 0.124 | 0.405 | 3.27× | 0.446 | 3.60× | ok |
| Shootout-C++/hash2 | 0.117 | 0.388 | 3.32× | 0.402 | 3.44× | ok |
| Shootout-C++/heapsort | 0.079 | 0.216 | 2.73× | 0.257 | 3.25× | ok |
| Shootout-C++/lists | 0.089 | 0.264 | 2.97× | 0.250 | 2.81× | ok |
| Shootout-C++/lists1 | 0.085 | 0.251 | 2.95× | 0.275 | 3.24× | ok |
| Shootout-C++/matrix | 0.075 | 0.199 | 2.65× | 0.272 | 3.63× | ok |
| Shootout-C++/methcall | 0.066 | 0.172 | 2.61× | 0.210 | 3.18× | ok |
| Shootout-C++/moments | 0.101 | 0.312 | 3.09× | 0.301 | 2.98× | ok |
| Shootout-C++/random | 0.081 | 0.190 | 2.35× | 0.238 | 2.94× | ok |
| Shootout-C++/sieve | 0.088 | 0.246 | 2.80× | 0.271 | 3.08× | ok |
| SmallPT | 0.037 | 0.273 | 7.38× | 0.171 | 4.62× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.046 | 4.60× | ok |
| Stanford/FloatMM | 0.012 | 0.057 | 4.75× | 0.064 | 5.33× | ok |
| Stanford/Puzzle | 0.018 | 0.115 | 6.39× | 0.105 | 5.83× | ok |
| Stanford/Treesort | 0.013 | 0.076 | 5.85× | 0.045 | 3.46× | ok |
| bg/binarytrees/2 | 0.067 | 0.389 | 5.81× | 0.209 | 3.12× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.110 | 3.14× | 0.109 | 3.11× | ok |
| bg/fasta/1 | 0.054 | 0.152 | 2.81× | 0.172 | 3.19× | ok |
| bg/fasta/2 | 0.055 | 0.154 | 2.80× | 0.163 | 2.96× | ok |
| bg/fasta/3 | 0.080 | 0.217 | 2.71× | 0.273 | 3.41× | ok |
| bg/fasta/4 | 0.071 | 0.173 | 2.44× | 0.204 | 2.87× | ok |
| bg/fasta/6 | 0.159 | 0.460 | 2.89× | 0.511 | 3.21× | ok |
| bg/mandelbrot/0 | 0.171 | 0.635 | 3.71× | 0.601 | 3.51× | ok |
| bg/mandelbrot/2 | 0.093 | 0.248 | 2.67× | 0.291 | 3.13× | ok |
| bg/mandelbrot/3 | 0.098 | 0.237 | 2.42× | 0.282 | 2.88× | ok |
| bg/mandelbrot/5 | 0.045 | 0.135 | 3.00× | 0.144 | 3.20× | ok |
| bg/mandelbrot/7 | 0.054 | 0.179 | 3.31× | 0.166 | 3.07× | ok |
| bg/mandelbrot/9 | 0.053 | 0.179 | 3.38× | 0.159 | 3.00× | ok |
| bg/nbody/1 | 0.041 | 0.149 | 3.63× | 0.159 | 3.88× | ok |
| bg/nbody/2 | 0.029 | 0.119 | 4.10× | 0.130 | 4.48× | ok |
| bg/nbody/3 | 0.029 | 0.114 | 3.93× | 0.098 | 3.38× | ok |
| bg/nbody/6 | 0.040 | 0.173 | 4.32× | 0.164 | 4.10× | ok |
| bg/pidigits/4 | 0.107 | 0.324 | 3.03× | 0.465 | 4.35× | ok |
| bg/pidigits/5 | 0.073 | 0.210 | 2.88× | 0.229 | 3.14× | ok |
| bg/revcomp/1 | 0.090 | 0.240 | 2.67× | 0.259 | 2.88× | ok |
| bg/revcomp/5 | 0.086 | 0.250 | 2.91× | 0.302 | 3.51× | ok |
| bg/spectralnorm/1 | 0.105 | 0.321 | 3.06× | 0.392 | 3.73× | ok |
| box2d | 1.664 | 7.336 | 4.41× | 4.925 | 2.96× | ok |
| fmt | 0.930 | 5.024 | 5.40× | 3.994 | 4.29× | ok |
| hexxagon | 0.262 | 1.040 | 3.97× | 1.021 | 3.90× | ok |
| lambda | 0.121 | 1.035 | 8.55× | 0.547 | 4.52× | ok |
| minisat | 0.141 | 0.984 | 6.98× | 0.641 | 4.55× | ok |
| nlohmann-json | 0.745 | 3.413 | 4.58× | 2.977 | 4.00× | ok |
| pugixml | 0.669 | 5.473 | 8.18× | 3.956 | 5.91× | ok |
| pugixml-tests | 4.869 | 33.461 | 6.87× | 24.874 | 5.11× | ok |
| rapidjson | 0.230 | 1.194 | 5.19× | 0.651 | 2.83× | ok |
| re2 | 2.916 | 17.466 | 5.99× | 10.106 | 3.47× | ok |
| re2-test-re2 | 5.744 | 26.398 | 4.60× | 22.403 | 3.90× | ok |
| re2-test-search | 5.842 | 23.425 | 4.01× | 21.300 | 3.65× | ok |
| tramp3d-v4 | 2.583 | 23.010 | 8.91× | 14.344 | 5.55× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.133 | 2.29× | 0.180 | 3.10× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.100 | 2.94× | 0.100 | 2.94× | ok |
| Adobe-C++/simple_types_constant_folding | 0.038 | 0.100 | 2.63× | 0.105 | 2.76× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.092 | 2.71× | 0.118 | 3.47× | ok |
| Adobe-C++/stepanov_abstraction | 0.033 | 0.072 | 2.18× | 0.085 | 2.58× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.119 | 1.89× | 0.191 | 3.03× | ok |
| Bullet | 3.774 | 9.639 | 2.55× | 11.802 | 3.13× | ok |
| CLAMR | 1.920 | 4.355 | 2.27× | 5.724 | 2.98× | ok |
| CoyoteBench/almabench | 0.030 | 0.061 | 2.03× | 0.069 | 2.30× | ok |
| CoyoteBench/fftbench | 0.093 | 0.219 | 2.35× | 0.277 | 2.98× | ok |
| CoyoteBench/huffbench | 0.030 | 0.054 | 1.80× | 0.080 | 2.67× | ok |
| CoyoteBench/lpbench | 0.025 | 0.055 | 2.20× | 0.066 | 2.64× | ok |
| DOE/HACCKernels | 0.096 | 0.219 | 2.28× | 0.276 | 2.88× | ok |
| DOE/HPCCG | 0.555 | 1.277 | 2.30× | 1.713 | 3.09× | ok |
| DOE/PENNANT | 1.226 | 3.126 | 2.55× | 3.427 | 2.80× | ok |
| DOE/miniFE | 0.511 | 1.402 | 2.74× | 1.644 | 3.22× | ok |
| Misc-C++-EH/spirit | 0.287 | 0.788 | 2.75× | 1.249 | 4.35× | ok |
| Misc-C++-Large/ray | 0.092 | 0.222 | 2.41× | 0.307 | 3.34× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.197 | 2.46× | 0.268 | 3.35× | ok |
| Misc-C++/bigfib | 0.104 | 0.251 | 2.41× | 0.356 | 3.42× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.062 | 2.14× | 0.082 | 2.83× | ok |
| Misc-C++/stepanov_container | 0.125 | 0.328 | 2.62× | 0.367 | 2.94× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.057 | 2.11× | 0.072 | 2.67× | ok |
| PAQ8p | 0.040 | 0.105 | 2.62× | 0.114 | 2.85× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.019 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.018 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.140 | 2.26× | 0.182 | 2.94× | ok |
| Shootout-C++/ackermann | 0.069 | 0.161 | 2.33× | 0.228 | 3.30× | ok |
| Shootout-C++/ary3 | 0.072 | 0.162 | 2.25× | 0.199 | 2.76× | ok |
| Shootout-C++/fibo | 0.072 | 0.162 | 2.25× | 0.224 | 3.11× | ok |
| Shootout-C++/hash | 0.099 | 0.230 | 2.32× | 0.306 | 3.09× | ok |
| Shootout-C++/hash2 | 0.089 | 0.195 | 2.19× | 0.250 | 2.81× | ok |
| Shootout-C++/heapsort | 0.081 | 0.191 | 2.36× | 0.221 | 2.73× | ok |
| Shootout-C++/lists | 0.078 | 0.156 | 2.00× | 0.263 | 3.37× | ok |
| Shootout-C++/lists1 | 0.074 | 0.194 | 2.62× | 0.211 | 2.85× | ok |
| Shootout-C++/matrix | 0.064 | 0.138 | 2.16× | 0.206 | 3.22× | ok |
| Shootout-C++/methcall | 0.065 | 0.140 | 2.15× | 0.182 | 2.80× | ok |
| Shootout-C++/moments | 0.083 | 0.197 | 2.37× | 0.221 | 2.66× | ok |
| Shootout-C++/random | 0.077 | 0.165 | 2.14× | 0.217 | 2.82× | ok |
| Shootout-C++/sieve | 0.077 | 0.182 | 2.36× | 0.231 | 3.00× | ok |
| SmallPT | 0.026 | 0.054 | 2.08× | 0.072 | 2.77× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.020 | — | 0.027 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.138 | 2.23× | 0.183 | 2.95× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.057 | 1.90× | 0.075 | 2.50× | ok |
| bg/fasta/1 | 0.052 | 0.092 | 1.77× | 0.115 | 2.21× | ok |
| bg/fasta/2 | 0.048 | 0.093 | 1.94× | 0.120 | 2.50× | ok |
| bg/fasta/3 | 0.073 | 0.166 | 2.27× | 0.199 | 2.73× | ok |
| bg/fasta/4 | 0.066 | 0.136 | 2.06× | 0.164 | 2.48× | ok |
| bg/fasta/6 | 0.109 | 0.254 | 2.33× | 0.364 | 3.34× | ok |
| bg/mandelbrot/0 | 0.128 | 0.299 | 2.34× | 0.396 | 3.09× | ok |
| bg/mandelbrot/2 | 0.069 | 0.200 | 2.90× | 0.236 | 3.42× | ok |
| bg/mandelbrot/3 | 0.088 | 0.188 | 2.14× | 0.240 | 2.73× | ok |
| bg/mandelbrot/5 | 0.040 | 0.087 | 2.17× | 0.107 | 2.67× | ok |
| bg/mandelbrot/7 | 0.044 | 0.088 | 2.00× | 0.112 | 2.55× | ok |
| bg/mandelbrot/9 | 0.039 | 0.079 | 2.03× | 0.102 | 2.62× | ok |
| bg/nbody/1 | 0.026 | 0.061 | 2.35× | 0.073 | 2.81× | ok |
| bg/nbody/2 | 0.025 | 0.051 | 2.04× | 0.068 | 2.72× | ok |
| bg/nbody/3 | 0.025 | 0.050 | 2.00× | 0.067 | 2.68× | ok |
| bg/nbody/6 | 0.026 | 0.057 | 2.19× | 0.074 | 2.85× | ok |
| bg/pidigits/4 | 0.104 | 0.263 | 2.53× | 0.362 | 3.48× | ok |
| bg/pidigits/5 | 0.071 | 0.148 | 2.08× | 0.200 | 2.82× | ok |
| bg/revcomp/1 | 0.083 | 0.182 | 2.19× | 0.223 | 2.69× | ok |
| bg/revcomp/5 | 0.071 | 0.150 | 2.11× | 0.203 | 2.86× | ok |
| bg/spectralnorm/1 | 0.109 | 0.236 | 2.17× | 0.322 | 2.95× | ok |
| box2d | 1.302 | 2.690 | 2.07× | 3.231 | 2.48× | ok |
| fmt | 0.370 | 0.950 | 2.57× | 1.586 | 4.29× | ok |
| hexxagon | 0.234 | 0.579 | 2.47× | 0.768 | 3.28× | ok |
| lambda | 0.039 | 0.116 | 2.97× | 0.164 | 4.21× | ok |
| minisat | 0.049 | 0.123 | 2.51× | 0.146 | 2.98× | ok |
| nlohmann-json | 0.316 | 0.836 | 2.65× | 1.285 | 4.07× | ok |
| pugixml | 0.200 | 0.506 | 2.53× | 0.735 | 3.67× | ok |
| pugixml-tests | 2.796 | 7.226 | 2.58× | 9.183 | 3.28× | ok |
| rapidjson | 0.088 | 0.244 | 2.77× | 0.275 | 3.13× | ok |
| re2 | 2.653 | 6.318 | 2.38× | 5.729 | 2.16× | ok |
| re2-test-re2 | 3.935 | 9.692 | 2.46× | 12.468 | 3.17× | ok |
| re2-test-search | 3.967 | 8.905 | 2.24× | 13.319 | 3.36× | ok |
| tramp3d-v4 | 0.586 | 2.313 | 3.95× | 1.543 | 2.63× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
