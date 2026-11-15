# Public benchmarks: Intel (GitHub)

Measured compiler: [`97a28380a`](https://github.com/vishvananda/cppgm-extended/commit/97a28380aa74562cd03e9993b31f647e6729dd97) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43686398667) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.27× | 74 | 2.96× | 74 |
| Compile CPU, `-O0` | 3.19× | 75 | 3.20× | 75 |
| Compile CPU, `-O3` | 4.28× | 79 | 3.85× | 79 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.19× | 81 |
| Compile peak RSS, `-O3` | 1.71× | 81 | 2.30× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.10× | 81 | 1.06× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.810 to 1.018; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.066 | 0.255 | 3.86× | 0.208 | 3.15× | ok |
| Adobe-C++/loop_unroll | 0.053 | 0.572 | 10.79× | 0.172 | 3.25× | ok |
| Adobe-C++/simple_types_constant_folding | 0.061 | 0.667 | 10.93× | 0.207 | 3.39× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.046 | 0.472 | 10.26× | 0.237 | 5.15× | ok |
| Adobe-C++/stepanov_abstraction | 0.039 | 0.170 | 4.36× | 0.113 | 2.90× | ok |
| Adobe-C++/stepanov_vector | 0.065 | 0.272 | 4.18× | 0.237 | 3.65× | ok |
| Bullet | 4.376 | 16.920 | 3.87× | 17.071 | 3.90× | ok |
| CLAMR | 2.263 | 8.853 | 3.91× | 9.098 | 4.02× | ok |
| CoyoteBench/almabench | 0.030 | 0.077 | 2.57× | 0.078 | 2.60× | ok |
| CoyoteBench/fftbench | 0.103 | 0.247 | 2.40× | 0.345 | 3.35× | ok |
| CoyoteBench/huffbench | 0.030 | 0.063 | 2.10× | 0.074 | 2.47× | ok |
| CoyoteBench/lpbench | 0.031 | 0.078 | 2.52× | 0.090 | 2.90× | ok |
| DOE/HACCKernels | 0.106 | 0.294 | 2.77× | 0.324 | 3.06× | ok |
| DOE/HPCCG | 0.623 | 1.553 | 2.49× | 2.213 | 3.55× | ok |
| DOE/PENNANT | 1.368 | 3.953 | 2.89× | 4.175 | 3.05× | ok |
| DOE/miniFE | 0.583 | 1.844 | 3.16× | 1.852 | 3.18× | ok |
| Misc-C++-EH/spirit | 0.436 | 2.822 | 6.47× | 1.894 | 4.34× | ok |
| Misc-C++-Large/ray | 0.094 | 0.253 | 2.69× | 0.275 | 2.93× | ok |
| Misc-C++-Large/sphereflake | 0.081 | 0.221 | 2.73× | 0.270 | 3.33× | ok |
| Misc-C++/bigfib | 0.105 | 0.336 | 3.20× | 0.329 | 3.13× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.084 | 2.80× | 0.083 | 2.77× | ok |
| Misc-C++/stepanov_container | 0.164 | 0.564 | 3.44× | 0.489 | 2.98× | ok |
| Misc-C++/stepanov_v1p2 | 0.031 | 0.105 | 3.39× | 0.087 | 2.81× | ok |
| PAQ8p | 0.064 | 0.447 | 6.98× | 0.246 | 3.84× | ok |
| Prolangs-C++/life | 0.004 | 0.032 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.065 | 6.50× | 0.042 | 4.20× | ok |
| Prolangs-C++/primes | 0.006 | 0.024 | — | 0.028 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.148 | 2.28× | 0.199 | 3.06× | ok |
| Shootout-C++/ackermann | 0.068 | 0.165 | 2.43× | 0.196 | 2.88× | ok |
| Shootout-C++/ary3 | 0.085 | 0.191 | 2.25× | 0.278 | 3.27× | ok |
| Shootout-C++/fibo | 0.079 | 0.141 | 1.78× | 0.191 | 2.42× | ok |
| Shootout-C++/hash | 0.097 | 0.266 | 2.74× | 0.282 | 2.91× | ok |
| Shootout-C++/hash2 | 0.104 | 0.307 | 2.95× | 0.363 | 3.49× | ok |
| Shootout-C++/heapsort | 0.075 | 0.168 | 2.24× | 0.285 | 3.80× | ok |
| Shootout-C++/lists | 0.069 | 0.228 | 3.30× | 0.219 | 3.17× | ok |
| Shootout-C++/lists1 | 0.082 | 0.209 | 2.55× | 0.298 | 3.63× | ok |
| Shootout-C++/matrix | 0.064 | 0.164 | 2.56× | 0.254 | 3.97× | ok |
| Shootout-C++/methcall | 0.068 | 0.141 | 2.07× | 0.193 | 2.84× | ok |
| Shootout-C++/moments | 0.090 | 0.236 | 2.62× | 0.247 | 2.74× | ok |
| Shootout-C++/random | 0.079 | 0.169 | 2.14× | 0.244 | 3.09× | ok |
| Shootout-C++/sieve | 0.083 | 0.211 | 2.54× | 0.266 | 3.20× | ok |
| SmallPT | 0.026 | 0.083 | 3.19× | 0.082 | 3.15× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.034 | — | ok |
| Stanford/Puzzle | 0.009 | 0.033 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.032 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.166 | 2.52× | 0.244 | 3.70× | ok |
| bg/fannkuchredux/3 | 0.034 | 0.069 | 2.03× | 0.087 | 2.56× | ok |
| bg/fasta/1 | 0.051 | 0.131 | 2.57× | 0.140 | 2.75× | ok |
| bg/fasta/2 | 0.048 | 0.115 | 2.40× | 0.124 | 2.58× | ok |
| bg/fasta/3 | 0.080 | 0.188 | 2.35× | 0.216 | 2.70× | ok |
| bg/fasta/4 | 0.072 | 0.154 | 2.14× | 0.174 | 2.42× | ok |
| bg/fasta/6 | 0.125 | 0.428 | 3.42× | 0.451 | 3.61× | ok |
| bg/mandelbrot/0 | 0.145 | 0.397 | 2.74× | 0.477 | 3.29× | ok |
| bg/mandelbrot/2 | 0.103 | 0.238 | 2.31× | 0.262 | 2.54× | ok |
| bg/mandelbrot/3 | 0.090 | 0.194 | 2.16× | 0.289 | 3.21× | ok |
| bg/mandelbrot/5 | 0.049 | 0.108 | 2.20× | 0.137 | 2.80× | ok |
| bg/mandelbrot/7 | 0.054 | 0.126 | 2.33× | 0.139 | 2.57× | ok |
| bg/mandelbrot/9 | 0.049 | 0.115 | 2.35× | 0.123 | 2.51× | ok |
| bg/nbody/1 | 0.031 | 0.106 | 3.42× | 0.095 | 3.06× | ok |
| bg/nbody/2 | 0.031 | 0.064 | 2.06× | 0.078 | 2.52× | ok |
| bg/nbody/3 | 0.026 | 0.069 | 2.65× | 0.080 | 3.08× | ok |
| bg/nbody/6 | 0.029 | 0.097 | 3.34× | 0.092 | 3.17× | ok |
| bg/pidigits/4 | 0.121 | 0.277 | 2.29× | 0.410 | 3.39× | ok |
| bg/pidigits/5 | 0.073 | 0.164 | 2.25× | 0.226 | 3.10× | ok |
| bg/revcomp/1 | 0.084 | 0.249 | 2.96× | 0.266 | 3.17× | ok |
| bg/revcomp/5 | 0.090 | 0.200 | 2.22× | 0.222 | 2.47× | ok |
| bg/spectralnorm/1 | 0.106 | 0.256 | 2.42× | 0.380 | 3.58× | ok |
| box2d | 1.287 | 4.347 | 3.38× | 3.959 | 3.08× | ok |
| fmt | 0.505 | 2.531 | 5.01× | 1.955 | 3.87× | ok |
| hexxagon | 0.263 | 0.565 | 2.15× | 0.799 | 3.04× | ok |
| lambda | 0.051 | 0.315 | 6.18× | 0.242 | 4.75× | ok |
| minisat | 0.060 | 0.285 | 4.75× | 0.227 | 3.78× | ok |
| nlohmann-json | 0.384 | 1.913 | 4.98× | 1.729 | 4.50× | ok |
| pugixml | 0.275 | 1.327 | 4.83× | 0.933 | 3.39× | ok |
| pugixml-tests | 3.054 | 14.487 | 4.74× | 10.798 | 3.54× | ok |
| rapidjson | 0.113 | 0.460 | 4.07× | 0.382 | 3.38× | ok |
| re2 | 2.143 | 10.060 | 4.69× | 6.581 | 3.07× | ok |
| re2-test-re2 | 4.587 | 14.965 | 3.26× | 15.609 | 3.40× | ok |
| re2-test-search | 4.733 | 13.523 | 2.86× | 14.677 | 3.10× | ok |
| tramp3d-v4 | 0.685 | 7.674 | 11.20× | 2.590 | 3.78× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.130 | 0.903 | 6.95× | 0.504 | 3.88× | ok |
| Adobe-C++/loop_unroll | 0.436 | 5.330 | 12.22× | 4.165 | 9.55× | ok |
| Adobe-C++/simple_types_constant_folding | 0.243 | 2.853 | 11.74× | 2.235 | 9.20× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.252 | 2.368 | 9.40× | 1.787 | 7.09× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 1.118 | 12.15× | 0.453 | 4.92× | ok |
| Adobe-C++/stepanov_vector | 0.115 | 1.445 | 12.57× | 0.638 | 5.55× | ok |
| Bullet | 6.275 | 38.819 | 6.19× | 27.042 | 4.31× | ok |
| CLAMR | 4.390 | 23.107 | 5.26× | 17.441 | 3.97× | ok |
| CoyoteBench/almabench | 0.036 | 0.169 | 4.69× | 0.112 | 3.11× | ok |
| CoyoteBench/fftbench | 0.136 | 0.407 | 2.99× | 0.501 | 3.68× | ok |
| CoyoteBench/huffbench | 0.040 | 0.198 | 4.95× | 0.126 | 3.15× | ok |
| CoyoteBench/lpbench | 0.039 | 0.190 | 4.87× | 0.204 | 5.23× | ok |
| DOE/HACCKernels | 0.115 | 0.411 | 3.57× | 0.382 | 3.32× | ok |
| DOE/HPCCG | 0.670 | 2.220 | 3.31× | 2.635 | 3.93× | ok |
| DOE/PENNANT | 1.704 | 6.640 | 3.90× | 5.531 | 3.25× | ok |
| DOE/miniFE | 0.827 | 3.870 | 4.68× | 3.021 | 3.65× | ok |
| Misc-C++-EH/spirit | 0.702 | 3.898 | 5.55× | 3.557 | 5.07× | ok |
| Misc-C++-Large/ray | 0.105 | 0.504 | 4.80× | 0.327 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.109 | 0.687 | 6.30× | 0.368 | 3.38× | ok |
| Misc-C++/bigfib | 0.133 | 0.488 | 3.67× | 0.449 | 3.38× | ok |
| Misc-C++/oopack_v1p8 | 0.034 | 0.166 | 4.88× | 0.157 | 4.62× | ok |
| Misc-C++/stepanov_container | 0.205 | 0.764 | 3.73× | 0.871 | 4.25× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.194 | 4.97× | 0.174 | 4.46× | ok |
| PAQ8p | 0.332 | 3.808 | 11.47× | 1.742 | 5.25× | ok |
| Prolangs-C++/life | 0.009 | 0.104 | — | 0.060 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.190 | 10.00× | 0.107 | 5.63× | ok |
| Prolangs-C++/primes | 0.007 | 0.037 | — | 0.038 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.177 | 2.60× | 0.211 | 3.10× | ok |
| Shootout-C++/ackermann | 0.070 | 0.202 | 2.89× | 0.206 | 2.94× | ok |
| Shootout-C++/ary3 | 0.089 | 0.247 | 2.78× | 0.301 | 3.38× | ok |
| Shootout-C++/fibo | 0.067 | 0.184 | 2.75× | 0.199 | 2.97× | ok |
| Shootout-C++/hash | 0.111 | 0.357 | 3.22× | 0.371 | 3.34× | ok |
| Shootout-C++/hash2 | 0.130 | 0.433 | 3.33× | 0.524 | 4.03× | ok |
| Shootout-C++/heapsort | 0.079 | 0.199 | 2.52× | 0.233 | 2.95× | ok |
| Shootout-C++/lists | 0.078 | 0.212 | 2.72× | 0.319 | 4.09× | ok |
| Shootout-C++/lists1 | 0.094 | 0.251 | 2.67× | 0.333 | 3.54× | ok |
| Shootout-C++/matrix | 0.073 | 0.196 | 2.68× | 0.314 | 4.30× | ok |
| Shootout-C++/methcall | 0.068 | 0.185 | 2.72× | 0.208 | 3.06× | ok |
| Shootout-C++/moments | 0.101 | 0.294 | 2.91× | 0.329 | 3.26× | ok |
| Shootout-C++/random | 0.088 | 0.195 | 2.22× | 0.254 | 2.89× | ok |
| Shootout-C++/sieve | 0.087 | 0.228 | 2.62× | 0.311 | 3.57× | ok |
| SmallPT | 0.041 | 0.278 | 6.78× | 0.151 | 3.68× | ok |
| Stanford/Bubblesort | 0.010 | 0.051 | 5.10× | 0.046 | 4.60× | ok |
| Stanford/FloatMM | 0.012 | 0.064 | 5.33× | 0.068 | 5.67× | ok |
| Stanford/Puzzle | 0.020 | 0.122 | 6.10× | 0.118 | 5.90× | ok |
| Stanford/Treesort | 0.016 | 0.080 | 5.00× | 0.060 | 3.75× | ok |
| bg/binarytrees/2 | 0.070 | 0.410 | 5.86× | 0.220 | 3.14× | ok |
| bg/fannkuchredux/3 | 0.039 | 0.129 | 3.31× | 0.121 | 3.10× | ok |
| bg/fasta/1 | 0.058 | 0.162 | 2.79× | 0.175 | 3.02× | ok |
| bg/fasta/2 | 0.060 | 0.159 | 2.65× | 0.162 | 2.70× | ok |
| bg/fasta/3 | 0.088 | 0.231 | 2.62× | 0.298 | 3.39× | ok |
| bg/fasta/4 | 0.078 | 0.215 | 2.76× | 0.258 | 3.31× | ok |
| bg/fasta/6 | 0.147 | 0.457 | 3.11× | 0.539 | 3.67× | ok |
| bg/mandelbrot/0 | 0.183 | 0.676 | 3.69× | 0.635 | 3.47× | ok |
| bg/mandelbrot/2 | 0.092 | 0.252 | 2.74× | 0.311 | 3.38× | ok |
| bg/mandelbrot/3 | 0.110 | 0.247 | 2.25× | 0.297 | 2.70× | ok |
| bg/mandelbrot/5 | 0.049 | 0.143 | 2.92× | 0.153 | 3.12× | ok |
| bg/mandelbrot/7 | 0.059 | 0.213 | 3.61× | 0.176 | 2.98× | ok |
| bg/mandelbrot/9 | 0.050 | 0.193 | 3.86× | 0.163 | 3.26× | ok |
| bg/nbody/1 | 0.043 | 0.167 | 3.88× | 0.164 | 3.81× | ok |
| bg/nbody/2 | 0.035 | 0.121 | 3.46× | 0.124 | 3.54× | ok |
| bg/nbody/3 | 0.030 | 0.131 | 4.37× | 0.105 | 3.50× | ok |
| bg/nbody/6 | 0.041 | 0.158 | 3.85× | 0.172 | 4.20× | ok |
| bg/pidigits/4 | 0.127 | 0.311 | 2.45× | 0.475 | 3.74× | ok |
| bg/pidigits/5 | 0.075 | 0.201 | 2.68× | 0.286 | 3.81× | ok |
| bg/revcomp/1 | 0.092 | 0.275 | 2.99× | 0.332 | 3.61× | ok |
| bg/revcomp/5 | 0.085 | 0.239 | 2.81× | 0.252 | 2.96× | ok |
| bg/spectralnorm/1 | 0.122 | 0.346 | 2.84× | 0.431 | 3.53× | ok |
| box2d | 1.642 | 7.065 | 4.30× | 6.546 | 3.99× | ok |
| fmt | 1.031 | 5.654 | 5.48× | 3.983 | 3.86× | ok |
| hexxagon | 0.309 | 1.101 | 3.56× | 1.042 | 3.37× | ok |
| lambda | 0.120 | 1.154 | 9.62× | 0.601 | 5.01× | ok |
| minisat | 0.140 | 0.919 | 6.56× | 0.647 | 4.62× | ok |
| nlohmann-json | 0.770 | 3.213 | 4.17× | 2.912 | 3.78× | ok |
| pugixml | 0.747 | 5.464 | 7.31× | 3.685 | 4.93× | ok |
| pugixml-tests | 5.182 | 34.517 | 6.66× | 24.833 | 4.79× | ok |
| rapidjson | 0.235 | 1.138 | 4.84× | 0.723 | 3.08× | ok |
| re2 | 2.924 | 17.824 | 6.10× | 9.786 | 3.35× | ok |
| re2-test-re2 | 5.966 | 25.531 | 4.28× | 21.102 | 3.54× | ok |
| re2-test-search | 5.989 | 23.053 | 3.85× | 20.573 | 3.44× | ok |
| tramp3d-v4 | 2.614 | 22.605 | 8.65× | 13.626 | 5.21× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.060 | 0.133 | 2.22× | 0.185 | 3.08× | ok |
| Adobe-C++/loop_unroll | 0.037 | 0.098 | 2.65× | 0.101 | 2.73× | ok |
| Adobe-C++/simple_types_constant_folding | 0.042 | 0.103 | 2.45× | 0.105 | 2.50× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.095 | 2.88× | 0.120 | 3.64× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.067 | 2.09× | 0.087 | 2.72× | ok |
| Adobe-C++/stepanov_vector | 0.056 | 0.120 | 2.14× | 0.192 | 3.43× | ok |
| Bullet | 3.930 | 9.811 | 2.50× | 14.159 | 3.60× | ok |
| CLAMR | 2.028 | 4.579 | 2.26× | 7.227 | 3.56× | ok |
| CoyoteBench/almabench | 0.030 | 0.064 | 2.13× | 0.074 | 2.47× | ok |
| CoyoteBench/fftbench | 0.100 | 0.218 | 2.18× | 0.341 | 3.41× | ok |
| CoyoteBench/huffbench | 0.030 | 0.053 | 1.77× | 0.070 | 2.33× | ok |
| CoyoteBench/lpbench | 0.030 | 0.064 | 2.13× | 0.082 | 2.73× | ok |
| DOE/HACCKernels | 0.102 | 0.260 | 2.55× | 0.285 | 2.79× | ok |
| DOE/HPCCG | 0.585 | 1.345 | 2.30× | 2.098 | 3.59× | ok |
| DOE/PENNANT | 1.355 | 2.746 | 2.03× | 3.592 | 2.65× | ok |
| DOE/miniFE | 0.529 | 1.196 | 2.26× | 1.587 | 3.00× | ok |
| Misc-C++-EH/spirit | 0.318 | 0.972 | 3.06× | 1.153 | 3.63× | ok |
| Misc-C++-Large/ray | 0.092 | 0.207 | 2.25× | 0.251 | 2.73× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.201 | 2.51× | 0.249 | 3.11× | ok |
| Misc-C++/bigfib | 0.096 | 0.223 | 2.32× | 0.286 | 2.98× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.058 | 2.15× | 0.076 | 2.81× | ok |
| Misc-C++/stepanov_container | 0.147 | 0.326 | 2.22× | 0.472 | 3.21× | ok |
| Misc-C++/stepanov_v1p2 | 0.031 | 0.057 | 1.84× | 0.074 | 2.39× | ok |
| PAQ8p | 0.042 | 0.115 | 2.74× | 0.140 | 3.33× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.019 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.022 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.017 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.146 | 2.28× | 0.189 | 2.95× | ok |
| Shootout-C++/ackermann | 0.068 | 0.171 | 2.51× | 0.188 | 2.76× | ok |
| Shootout-C++/ary3 | 0.081 | 0.173 | 2.14× | 0.256 | 3.16× | ok |
| Shootout-C++/fibo | 0.078 | 0.142 | 1.82× | 0.182 | 2.33× | ok |
| Shootout-C++/hash | 0.090 | 0.199 | 2.21× | 0.250 | 2.78× | ok |
| Shootout-C++/hash2 | 0.098 | 0.229 | 2.34× | 0.301 | 3.07× | ok |
| Shootout-C++/heapsort | 0.077 | 0.169 | 2.19× | 0.269 | 3.49× | ok |
| Shootout-C++/lists | 0.069 | 0.188 | 2.72× | 0.201 | 2.91× | ok |
| Shootout-C++/lists1 | 0.080 | 0.170 | 2.12× | 0.275 | 3.44× | ok |
| Shootout-C++/matrix | 0.063 | 0.161 | 2.56× | 0.194 | 3.08× | ok |
| Shootout-C++/methcall | 0.068 | 0.139 | 2.04× | 0.184 | 2.71× | ok |
| Shootout-C++/moments | 0.086 | 0.185 | 2.15× | 0.222 | 2.58× | ok |
| Shootout-C++/random | 0.080 | 0.170 | 2.12× | 0.235 | 2.94× | ok |
| Shootout-C++/sieve | 0.079 | 0.172 | 2.18× | 0.256 | 3.24× | ok |
| SmallPT | 0.028 | 0.053 | 1.89× | 0.072 | 2.57× | ok |
| Stanford/Bubblesort | 0.008 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.020 | — | 0.031 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.031 | — | ok |
| bg/binarytrees/2 | 0.069 | 0.159 | 2.30× | 0.197 | 2.86× | ok |
| bg/fannkuchredux/3 | 0.036 | 0.060 | 1.67× | 0.084 | 2.33× | ok |
| bg/fasta/1 | 0.049 | 0.103 | 2.10× | 0.132 | 2.69× | ok |
| bg/fasta/2 | 0.046 | 0.096 | 2.09× | 0.118 | 2.57× | ok |
| bg/fasta/3 | 0.076 | 0.176 | 2.32× | 0.257 | 3.38× | ok |
| bg/fasta/4 | 0.067 | 0.162 | 2.42× | 0.169 | 2.52× | ok |
| bg/fasta/6 | 0.125 | 0.266 | 2.13× | 0.346 | 2.77× | ok |
| bg/mandelbrot/0 | 0.130 | 0.274 | 2.11× | 0.428 | 3.29× | ok |
| bg/mandelbrot/2 | 0.098 | 0.204 | 2.08× | 0.242 | 2.47× | ok |
| bg/mandelbrot/3 | 0.089 | 0.186 | 2.09× | 0.254 | 2.85× | ok |
| bg/mandelbrot/5 | 0.043 | 0.087 | 2.02× | 0.120 | 2.79× | ok |
| bg/mandelbrot/7 | 0.047 | 0.091 | 1.94× | 0.126 | 2.68× | ok |
| bg/mandelbrot/9 | 0.047 | 0.078 | 1.66× | 0.107 | 2.28× | ok |
| bg/nbody/1 | 0.029 | 0.062 | 2.14× | 0.088 | 3.03× | ok |
| bg/nbody/2 | 0.029 | 0.053 | 1.83× | 0.072 | 2.48× | ok |
| bg/nbody/3 | 0.027 | 0.052 | 1.93× | 0.072 | 2.67× | ok |
| bg/nbody/6 | 0.027 | 0.059 | 2.19× | 0.081 | 3.00× | ok |
| bg/pidigits/4 | 0.116 | 0.279 | 2.41× | 0.392 | 3.38× | ok |
| bg/pidigits/5 | 0.076 | 0.164 | 2.16× | 0.209 | 2.75× | ok |
| bg/revcomp/1 | 0.080 | 0.205 | 2.56× | 0.264 | 3.30× | ok |
| bg/revcomp/5 | 0.077 | 0.161 | 2.09× | 0.191 | 2.48× | ok |
| bg/spectralnorm/1 | 0.112 | 0.233 | 2.08× | 0.358 | 3.20× | ok |
| box2d | 1.339 | 3.114 | 2.33× | 4.037 | 3.01× | ok |
| fmt | 0.463 | 1.111 | 2.40× | 1.538 | 3.32× | ok |
| hexxagon | 0.257 | 0.507 | 1.97× | 0.795 | 3.09× | ok |
| lambda | 0.045 | 0.124 | 2.76× | 0.170 | 3.78× | ok |
| minisat | 0.051 | 0.128 | 2.51× | 0.162 | 3.18× | ok |
| nlohmann-json | 0.303 | 0.902 | 2.98× | 1.298 | 4.28× | ok |
| pugixml | 0.203 | 0.501 | 2.47× | 0.681 | 3.35× | ok |
| pugixml-tests | 2.554 | 7.106 | 2.78× | 9.221 | 3.61× | ok |
| rapidjson | 0.090 | 0.235 | 2.61× | 0.293 | 3.26× | ok |
| re2 | 2.784 | 6.350 | 2.28× | 5.593 | 2.01× | ok |
| re2-test-re2 | 4.042 | 9.710 | 2.40× | 12.428 | 3.07× | ok |
| re2-test-search | 4.173 | 9.083 | 2.18× | 13.187 | 3.16× | ok |
| tramp3d-v4 | 0.428 | 2.233 | 5.22× | 1.552 | 3.63× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
