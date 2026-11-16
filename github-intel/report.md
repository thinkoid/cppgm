# Public benchmarks: Intel (GitHub)

Measured compiler: [`41e06a23e`](https://github.com/vishvananda/cppgm/commit/41e06a23e91609dbf050866ef3a7de4848cf17ed) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43785224195) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.28× | 74 | 2.92× | 74 |
| Compile CPU, `-O0` | 3.19× | 74 | 3.13× | 74 |
| Compile CPU, `-O3` | 4.26× | 79 | 3.82× | 79 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.13× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.00× | 81 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.976 to 1.053; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.251 | 3.98× | 0.221 | 3.51× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.554 | 11.08× | 0.175 | 3.50× | ok |
| Adobe-C++/simple_types_constant_folding | 0.056 | 0.655 | 11.70× | 0.209 | 3.73× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.469 | 10.42× | 0.239 | 5.31× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.187 | 5.05× | 0.107 | 2.89× | ok |
| Adobe-C++/stepanov_vector | 0.072 | 0.271 | 3.76× | 0.231 | 3.21× | ok |
| Bullet | 4.196 | 17.106 | 4.08× | 14.533 | 3.46× | ok |
| CLAMR | 2.556 | 8.166 | 3.19× | 7.131 | 2.79× | ok |
| CoyoteBench/almabench | 0.025 | 0.074 | 2.96× | 0.080 | 3.20× | ok |
| CoyoteBench/fftbench | 0.095 | 0.245 | 2.58× | 0.301 | 3.17× | ok |
| CoyoteBench/huffbench | 0.026 | 0.066 | 2.54× | 0.086 | 3.31× | ok |
| CoyoteBench/lpbench | 0.026 | 0.067 | 2.58× | 0.076 | 2.92× | ok |
| DOE/HACCKernels | 0.096 | 0.232 | 2.42× | 0.286 | 2.98× | ok |
| DOE/HPCCG | 0.653 | 1.523 | 2.33× | 1.902 | 2.91× | ok |
| DOE/PENNANT | 1.378 | 3.646 | 2.65× | 3.758 | 2.73× | ok |
| DOE/miniFE | 0.628 | 2.123 | 3.38× | 1.964 | 3.13× | ok |
| Misc-C++-EH/spirit | 0.433 | 2.405 | 5.55× | 1.603 | 3.70× | ok |
| Misc-C++-Large/ray | 0.098 | 0.278 | 2.84× | 0.272 | 2.78× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.228 | 2.85× | 0.253 | 3.16× | ok |
| Misc-C++/bigfib | 0.110 | 0.333 | 3.03× | 0.336 | 3.05× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.083 | 2.96× | 0.092 | 3.29× | ok |
| Misc-C++/stepanov_container | 0.165 | 0.573 | 3.47× | 0.546 | 3.31× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.116 | 4.14× | 0.085 | 3.04× | ok |
| PAQ8p | 0.064 | 0.457 | 7.14× | 0.231 | 3.61× | ok |
| Prolangs-C++/life | 0.003 | 0.029 | — | 0.023 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.056 | — | 0.039 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.024 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.143 | 2.31× | 0.190 | 3.06× | ok |
| Shootout-C++/ackermann | 0.068 | 0.159 | 2.34× | 0.225 | 3.31× | ok |
| Shootout-C++/ary3 | 0.071 | 0.174 | 2.45× | 0.215 | 3.03× | ok |
| Shootout-C++/fibo | 0.070 | 0.157 | 2.24× | 0.235 | 3.36× | ok |
| Shootout-C++/hash | 0.096 | 0.270 | 2.81× | 0.290 | 3.02× | ok |
| Shootout-C++/hash2 | 0.109 | 0.293 | 2.69× | 0.293 | 2.69× | ok |
| Shootout-C++/heapsort | 0.079 | 0.179 | 2.27× | 0.225 | 2.85× | ok |
| Shootout-C++/lists | 0.073 | 0.188 | 2.58× | 0.217 | 2.97× | ok |
| Shootout-C++/lists1 | 0.079 | 0.209 | 2.65× | 0.235 | 2.97× | ok |
| Shootout-C++/matrix | 0.062 | 0.141 | 2.27× | 0.188 | 3.03× | ok |
| Shootout-C++/methcall | 0.064 | 0.141 | 2.20× | 0.246 | 3.84× | ok |
| Shootout-C++/moments | 0.090 | 0.239 | 2.66× | 0.327 | 3.63× | ok |
| Shootout-C++/random | 0.080 | 0.168 | 2.10× | 0.228 | 2.85× | ok |
| Shootout-C++/sieve | 0.084 | 0.225 | 2.68× | 0.281 | 3.35× | ok |
| SmallPT | 0.026 | 0.086 | 3.31× | 0.079 | 3.04× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.009 | 0.027 | — | 0.034 | — | ok |
| bg/binarytrees/2 | 0.068 | 0.150 | 2.21× | 0.195 | 2.87× | ok |
| bg/fannkuchredux/3 | 0.034 | 0.073 | 2.15× | 0.084 | 2.47× | ok |
| bg/fasta/1 | 0.048 | 0.125 | 2.60× | 0.126 | 2.62× | ok |
| bg/fasta/2 | 0.050 | 0.136 | 2.72× | 0.121 | 2.42× | ok |
| bg/fasta/3 | 0.080 | 0.172 | 2.15× | 0.223 | 2.79× | ok |
| bg/fasta/4 | 0.064 | 0.144 | 2.25× | 0.174 | 2.72× | ok |
| bg/fasta/6 | 0.123 | 0.386 | 3.14× | 0.404 | 3.28× | ok |
| bg/mandelbrot/0 | 0.139 | 0.472 | 3.40× | 0.416 | 2.99× | ok |
| bg/mandelbrot/2 | 0.083 | 0.207 | 2.49× | 0.241 | 2.90× | ok |
| bg/mandelbrot/3 | 0.087 | 0.191 | 2.20× | 0.251 | 2.89× | ok |
| bg/mandelbrot/5 | 0.042 | 0.098 | 2.33× | 0.109 | 2.60× | ok |
| bg/mandelbrot/7 | 0.046 | 0.122 | 2.65× | 0.122 | 2.65× | ok |
| bg/mandelbrot/9 | 0.042 | 0.108 | 2.57× | 0.120 | 2.86× | ok |
| bg/nbody/1 | 0.029 | 0.088 | 3.03× | 0.085 | 2.93× | ok |
| bg/nbody/2 | 0.024 | 0.061 | 2.54× | 0.073 | 3.04× | ok |
| bg/nbody/3 | 0.027 | 0.066 | 2.44× | 0.071 | 2.63× | ok |
| bg/nbody/6 | 0.026 | 0.095 | 3.65× | 0.091 | 3.50× | ok |
| bg/pidigits/4 | 0.106 | 0.288 | 2.72× | 0.357 | 3.37× | ok |
| bg/pidigits/5 | 0.069 | 0.163 | 2.36× | 0.233 | 3.38× | ok |
| bg/revcomp/1 | 0.079 | 0.209 | 2.65× | 0.241 | 3.05× | ok |
| bg/revcomp/5 | 0.078 | 0.214 | 2.74× | 0.208 | 2.67× | ok |
| bg/spectralnorm/1 | 0.120 | 0.243 | 2.02× | 0.364 | 3.03× | ok |
| box2d | 1.427 | 4.020 | 2.82× | 3.808 | 2.67× | ok |
| fmt | 0.474 | 2.395 | 5.05× | 2.008 | 4.24× | ok |
| hexxagon | 0.234 | 0.640 | 2.74× | 0.817 | 3.49× | ok |
| lambda | 0.050 | 0.305 | 6.10× | 0.221 | 4.42× | ok |
| minisat | 0.067 | 0.292 | 4.36× | 0.222 | 3.31× | ok |
| nlohmann-json | 0.392 | 2.068 | 5.28× | 1.752 | 4.47× | ok |
| pugixml | 0.263 | 1.369 | 5.21× | 1.038 | 3.95× | ok |
| pugixml-tests | 3.308 | 14.761 | 4.46× | 12.968 | 3.92× | ok |
| rapidjson | 0.119 | 0.452 | 3.80× | 0.353 | 2.97× | ok |
| re2 | 2.797 | 10.639 | 3.80× | 6.628 | 2.37× | ok |
| re2-test-re2 | 4.541 | 15.032 | 3.31× | 14.573 | 3.21× | ok |
| re2-test-search | 4.561 | 13.789 | 3.02× | 14.443 | 3.17× | ok |
| tramp3d-v4 | 0.995 | 8.079 | 8.12× | 2.463 | 2.48× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.131 | 0.812 | 6.20× | 0.472 | 3.60× | ok |
| Adobe-C++/loop_unroll | 0.438 | 5.346 | 12.21× | 4.085 | 9.33× | ok |
| Adobe-C++/simple_types_constant_folding | 0.243 | 2.847 | 11.72× | 2.229 | 9.17× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.204 | 2.148 | 10.53× | 1.804 | 8.84× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 0.922 | 10.13× | 0.510 | 5.60× | ok |
| Adobe-C++/stepanov_vector | 0.120 | 1.406 | 11.72× | 0.644 | 5.37× | ok |
| Bullet | 5.716 | 35.338 | 6.18× | 25.749 | 4.50× | ok |
| CLAMR | 4.202 | 23.063 | 5.49× | 16.826 | 4.00× | ok |
| CoyoteBench/almabench | 0.031 | 0.172 | 5.55× | 0.114 | 3.68× | ok |
| CoyoteBench/fftbench | 0.116 | 0.399 | 3.44× | 0.409 | 3.53× | ok |
| CoyoteBench/huffbench | 0.038 | 0.197 | 5.18× | 0.143 | 3.76× | ok |
| CoyoteBench/lpbench | 0.035 | 0.170 | 4.86× | 0.167 | 4.77× | ok |
| DOE/HACCKernels | 0.111 | 0.336 | 3.03× | 0.354 | 3.19× | ok |
| DOE/HPCCG | 0.742 | 2.356 | 3.18× | 2.153 | 2.90× | ok |
| DOE/PENNANT | 1.718 | 5.759 | 3.35× | 5.296 | 3.08× | ok |
| DOE/miniFE | 0.838 | 4.106 | 4.90× | 3.558 | 4.25× | ok |
| Misc-C++-EH/spirit | 0.685 | 3.410 | 4.98× | 2.786 | 4.07× | ok |
| Misc-C++-Large/ray | 0.112 | 0.474 | 4.23× | 0.329 | 2.94× | ok |
| Misc-C++-Large/sphereflake | 0.114 | 0.722 | 6.33× | 0.374 | 3.28× | ok |
| Misc-C++/bigfib | 0.138 | 0.508 | 3.68× | 0.453 | 3.28× | ok |
| Misc-C++/oopack_v1p8 | 0.035 | 0.168 | 4.80× | 0.176 | 5.03× | ok |
| Misc-C++/stepanov_container | 0.235 | 0.902 | 3.84× | 0.940 | 4.00× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.194 | 4.85× | 0.179 | 4.47× | ok |
| PAQ8p | 0.315 | 3.932 | 12.48× | 1.690 | 5.37× | ok |
| Prolangs-C++/life | 0.009 | 0.093 | — | 0.058 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.186 | 9.79× | 0.105 | 5.53× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.037 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.171 | 2.67× | 0.201 | 3.14× | ok |
| Shootout-C++/ackermann | 0.074 | 0.192 | 2.59× | 0.223 | 3.01× | ok |
| Shootout-C++/ary3 | 0.074 | 0.213 | 2.88× | 0.274 | 3.70× | ok |
| Shootout-C++/fibo | 0.075 | 0.207 | 2.76× | 0.207 | 2.76× | ok |
| Shootout-C++/hash | 0.114 | 0.365 | 3.20× | 0.436 | 3.82× | ok |
| Shootout-C++/hash2 | 0.144 | 0.428 | 2.97× | 0.415 | 2.88× | ok |
| Shootout-C++/heapsort | 0.084 | 0.211 | 2.51× | 0.260 | 3.10× | ok |
| Shootout-C++/lists | 0.094 | 0.219 | 2.33× | 0.247 | 2.63× | ok |
| Shootout-C++/lists1 | 0.089 | 0.250 | 2.81× | 0.275 | 3.09× | ok |
| Shootout-C++/matrix | 0.068 | 0.190 | 2.79× | 0.281 | 4.13× | ok |
| Shootout-C++/methcall | 0.080 | 0.181 | 2.26× | 0.216 | 2.70× | ok |
| Shootout-C++/moments | 0.101 | 0.296 | 2.93× | 0.318 | 3.15× | ok |
| Shootout-C++/random | 0.081 | 0.191 | 2.36× | 0.235 | 2.90× | ok |
| Shootout-C++/sieve | 0.089 | 0.240 | 2.70× | 0.307 | 3.45× | ok |
| SmallPT | 0.037 | 0.275 | 7.43× | 0.156 | 4.22× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.046 | 4.60× | ok |
| Stanford/FloatMM | 0.011 | 0.059 | 5.36× | 0.064 | 5.82× | ok |
| Stanford/Puzzle | 0.020 | 0.118 | 5.90× | 0.114 | 5.70× | ok |
| Stanford/Treesort | 0.014 | 0.082 | 5.86× | 0.058 | 4.14× | ok |
| bg/binarytrees/2 | 0.074 | 0.399 | 5.39× | 0.213 | 2.88× | ok |
| bg/fannkuchredux/3 | 0.039 | 0.122 | 3.13× | 0.117 | 3.00× | ok |
| bg/fasta/1 | 0.056 | 0.162 | 2.89× | 0.205 | 3.66× | ok |
| bg/fasta/2 | 0.057 | 0.179 | 3.14× | 0.200 | 3.51× | ok |
| bg/fasta/3 | 0.086 | 0.242 | 2.81× | 0.287 | 3.34× | ok |
| bg/fasta/4 | 0.070 | 0.174 | 2.49× | 0.247 | 3.53× | ok |
| bg/fasta/6 | 0.146 | 0.482 | 3.30× | 0.519 | 3.55× | ok |
| bg/mandelbrot/0 | 0.164 | 0.598 | 3.65× | 0.588 | 3.59× | ok |
| bg/mandelbrot/2 | 0.091 | 0.250 | 2.75× | 0.294 | 3.23× | ok |
| bg/mandelbrot/3 | 0.091 | 0.228 | 2.51× | 0.256 | 2.81× | ok |
| bg/mandelbrot/5 | 0.049 | 0.132 | 2.69× | 0.138 | 2.82× | ok |
| bg/mandelbrot/7 | 0.055 | 0.191 | 3.47× | 0.180 | 3.27× | ok |
| bg/mandelbrot/9 | 0.051 | 0.181 | 3.55× | 0.159 | 3.12× | ok |
| bg/nbody/1 | 0.040 | 0.140 | 3.50× | 0.161 | 4.03× | ok |
| bg/nbody/2 | 0.030 | 0.119 | 3.97× | 0.110 | 3.67× | ok |
| bg/nbody/3 | 0.033 | 0.121 | 3.67× | 0.106 | 3.21× | ok |
| bg/nbody/6 | 0.044 | 0.156 | 3.55× | 0.159 | 3.61× | ok |
| bg/pidigits/4 | 0.113 | 0.326 | 2.88× | 0.428 | 3.79× | ok |
| bg/pidigits/5 | 0.074 | 0.191 | 2.58× | 0.270 | 3.65× | ok |
| bg/revcomp/1 | 0.085 | 0.238 | 2.80× | 0.292 | 3.44× | ok |
| bg/revcomp/5 | 0.086 | 0.246 | 2.86× | 0.241 | 2.80× | ok |
| bg/spectralnorm/1 | 0.128 | 0.348 | 2.72× | 0.427 | 3.34× | ok |
| box2d | 1.748 | 6.949 | 3.98× | 6.012 | 3.44× | ok |
| fmt | 0.987 | 5.416 | 5.49× | 4.125 | 4.18× | ok |
| hexxagon | 0.297 | 1.056 | 3.56× | 1.011 | 3.40× | ok |
| lambda | 0.122 | 1.134 | 9.30× | 0.528 | 4.33× | ok |
| minisat | 0.141 | 0.917 | 6.50× | 0.651 | 4.62× | ok |
| nlohmann-json | 0.797 | 3.255 | 4.08× | 2.972 | 3.73× | ok |
| pugixml | 0.684 | 5.598 | 8.18× | 3.977 | 5.81× | ok |
| pugixml-tests | 4.907 | 33.996 | 6.93× | 23.606 | 4.81× | ok |
| rapidjson | 0.231 | 1.215 | 5.26× | 0.711 | 3.08× | ok |
| re2 | 2.913 | 18.322 | 6.29× | 9.938 | 3.41× | ok |
| re2-test-re2 | 5.829 | 25.923 | 4.45× | 21.744 | 3.73× | ok |
| re2-test-search | 5.711 | 23.601 | 4.13× | 20.233 | 3.54× | ok |
| tramp3d-v4 | 2.555 | 22.490 | 8.80× | 13.516 | 5.29× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.133 | 2.25× | 0.188 | 3.19× | ok |
| Adobe-C++/loop_unroll | 0.036 | 0.097 | 2.69× | 0.102 | 2.83× | ok |
| Adobe-C++/simple_types_constant_folding | 0.038 | 0.100 | 2.63× | 0.106 | 2.79× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.091 | 2.68× | 0.120 | 3.53× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.073 | 2.35× | 0.084 | 2.71× | ok |
| Adobe-C++/stepanov_vector | 0.055 | 0.120 | 2.18× | 0.188 | 3.42× | ok |
| Bullet | 3.796 | 9.705 | 2.56× | 11.728 | 3.09× | ok |
| CLAMR | 2.170 | 4.428 | 2.04× | 5.870 | 2.71× | ok |
| CoyoteBench/almabench | 0.026 | 0.063 | 2.42× | 0.074 | 2.85× | ok |
| CoyoteBench/fftbench | 0.095 | 0.217 | 2.28× | 0.278 | 2.93× | ok |
| CoyoteBench/huffbench | 0.027 | 0.057 | 2.11× | 0.083 | 3.07× | ok |
| CoyoteBench/lpbench | 0.026 | 0.055 | 2.12× | 0.069 | 2.65× | ok |
| DOE/HACCKernels | 0.097 | 0.204 | 2.10× | 0.272 | 2.80× | ok |
| DOE/HPCCG | 0.651 | 1.264 | 1.94× | 2.035 | 3.13× | ok |
| DOE/PENNANT | 1.289 | 3.034 | 2.35× | 3.356 | 2.60× | ok |
| DOE/miniFE | 0.573 | 1.207 | 2.11× | 1.674 | 2.92× | ok |
| Misc-C++-EH/spirit | 0.279 | 0.840 | 3.01× | 1.037 | 3.72× | ok |
| Misc-C++-Large/ray | 0.098 | 0.227 | 2.32× | 0.305 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.079 | 0.203 | 2.57× | 0.237 | 3.00× | ok |
| Misc-C++/bigfib | 0.101 | 0.222 | 2.20× | 0.288 | 2.85× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.058 | 2.15× | 0.082 | 3.04× | ok |
| Misc-C++/stepanov_container | 0.152 | 0.327 | 2.15× | 0.451 | 2.97× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.060 | 2.22× | 0.073 | 2.70× | ok |
| PAQ8p | 0.044 | 0.120 | 2.73× | 0.137 | 3.11× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.007 | 0.019 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.140 | 2.22× | 0.181 | 2.87× | ok |
| Shootout-C++/ackermann | 0.070 | 0.164 | 2.34× | 0.216 | 3.09× | ok |
| Shootout-C++/ary3 | 0.070 | 0.160 | 2.29× | 0.202 | 2.89× | ok |
| Shootout-C++/fibo | 0.071 | 0.162 | 2.28× | 0.225 | 3.17× | ok |
| Shootout-C++/hash | 0.092 | 0.204 | 2.22× | 0.259 | 2.82× | ok |
| Shootout-C++/hash2 | 0.102 | 0.218 | 2.14× | 0.262 | 2.57× | ok |
| Shootout-C++/heapsort | 0.082 | 0.180 | 2.20× | 0.219 | 2.67× | ok |
| Shootout-C++/lists | 0.071 | 0.157 | 2.21× | 0.200 | 2.82× | ok |
| Shootout-C++/lists1 | 0.077 | 0.170 | 2.21× | 0.214 | 2.78× | ok |
| Shootout-C++/matrix | 0.064 | 0.137 | 2.14× | 0.180 | 2.81× | ok |
| Shootout-C++/methcall | 0.065 | 0.149 | 2.29× | 0.236 | 3.63× | ok |
| Shootout-C++/moments | 0.086 | 0.186 | 2.16× | 0.257 | 2.99× | ok |
| Shootout-C++/random | 0.080 | 0.171 | 2.14× | 0.218 | 2.72× | ok |
| Shootout-C++/sieve | 0.081 | 0.181 | 2.23× | 0.254 | 3.14× | ok |
| SmallPT | 0.025 | 0.056 | 2.24× | 0.071 | 2.84× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.009 | 0.021 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.021 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.034 | — | ok |
| bg/binarytrees/2 | 0.068 | 0.155 | 2.28× | 0.187 | 2.75× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.063 | 1.91× | 0.081 | 2.45× | ok |
| bg/fasta/1 | 0.047 | 0.100 | 2.13× | 0.117 | 2.49× | ok |
| bg/fasta/2 | 0.049 | 0.110 | 2.24× | 0.111 | 2.27× | ok |
| bg/fasta/3 | 0.079 | 0.161 | 2.04× | 0.210 | 2.66× | ok |
| bg/fasta/4 | 0.064 | 0.138 | 2.16× | 0.171 | 2.67× | ok |
| bg/fasta/6 | 0.114 | 0.275 | 2.41× | 0.344 | 3.02× | ok |
| bg/mandelbrot/0 | 0.128 | 0.286 | 2.23× | 0.366 | 2.86× | ok |
| bg/mandelbrot/2 | 0.083 | 0.189 | 2.28× | 0.228 | 2.75× | ok |
| bg/mandelbrot/3 | 0.087 | 0.188 | 2.16× | 0.247 | 2.84× | ok |
| bg/mandelbrot/5 | 0.041 | 0.080 | 1.95× | 0.104 | 2.54× | ok |
| bg/mandelbrot/7 | 0.044 | 0.089 | 2.02× | 0.109 | 2.48× | ok |
| bg/mandelbrot/9 | 0.040 | 0.079 | 1.97× | 0.098 | 2.45× | ok |
| bg/nbody/1 | 0.028 | 0.051 | 1.82× | 0.073 | 2.61× | ok |
| bg/nbody/2 | 0.024 | 0.048 | 2.00× | 0.069 | 2.88× | ok |
| bg/nbody/3 | 0.027 | 0.054 | 2.00× | 0.070 | 2.59× | ok |
| bg/nbody/6 | 0.026 | 0.055 | 2.12× | 0.076 | 2.92× | ok |
| bg/pidigits/4 | 0.115 | 0.257 | 2.23× | 0.331 | 2.88× | ok |
| bg/pidigits/5 | 0.068 | 0.159 | 2.34× | 0.233 | 3.43× | ok |
| bg/revcomp/1 | 0.079 | 0.167 | 2.11× | 0.260 | 3.29× | ok |
| bg/revcomp/5 | 0.077 | 0.167 | 2.17× | 0.188 | 2.44× | ok |
| bg/spectralnorm/1 | 0.111 | 0.215 | 1.94× | 0.344 | 3.10× | ok |
| box2d | 1.342 | 2.653 | 1.98× | 3.963 | 2.95× | ok |
| fmt | 0.423 | 0.933 | 2.21× | 1.511 | 3.57× | ok |
| hexxagon | 0.230 | 0.562 | 2.44× | 0.776 | 3.37× | ok |
| lambda | 0.041 | 0.125 | 3.05× | 0.159 | 3.88× | ok |
| minisat | 0.054 | 0.126 | 2.33× | 0.158 | 2.93× | ok |
| nlohmann-json | 0.314 | 0.952 | 3.03× | 1.334 | 4.25× | ok |
| pugixml | 0.205 | 0.524 | 2.56× | 0.760 | 3.71× | ok |
| pugixml-tests | 2.874 | 7.161 | 2.49× | 9.386 | 3.27× | ok |
| rapidjson | 0.101 | 0.232 | 2.30× | 0.270 | 2.67× | ok |
| re2 | 2.776 | 6.877 | 2.48× | 5.514 | 1.99× | ok |
| re2-test-re2 | 4.164 | 9.548 | 2.29× | 12.553 | 3.01× | ok |
| re2-test-search | 4.131 | 9.004 | 2.18× | 12.716 | 3.08× | ok |
| tramp3d-v4 | 0.438 | 2.322 | 5.30× | 1.452 | 3.32× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
