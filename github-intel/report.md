# Public benchmarks: Intel (GitHub)

Measured compiler: [`c6ed61003`](https://github.com/vishvananda/cppgm/commit/c6ed610030ba933d83205fb17744340b2206efa7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44481767416) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.32× | 74 | 2.93× | 74 |
| Compile CPU, `-O0` | 3.28× | 74 | 3.20× | 74 |
| Compile CPU, `-O3` | 4.36× | 80 | 3.89× | 80 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.21× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.32× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 1.00× | 81 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.802 to 1.038; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.250 | 3.97× | 0.178 | 2.83× | ok |
| Adobe-C++/loop_unroll | 0.048 | 0.568 | 11.83× | 0.167 | 3.48× | ok |
| Adobe-C++/simple_types_constant_folding | 0.050 | 0.673 | 13.46× | 0.202 | 4.04× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.476 | 10.58× | 0.183 | 4.07× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.189 | 5.91× | 0.112 | 3.50× | ok |
| Adobe-C++/stepanov_vector | 0.061 | 0.267 | 4.38× | 0.226 | 3.70× | ok |
| Bullet | 4.202 | 17.511 | 4.17× | 15.483 | 3.68× | ok |
| CLAMR | 2.220 | 9.450 | 4.26× | 6.988 | 3.15× | ok |
| CoyoteBench/almabench | 0.028 | 0.066 | 2.36× | 0.088 | 3.14× | ok |
| CoyoteBench/fftbench | 0.098 | 0.245 | 2.50× | 0.297 | 3.03× | ok |
| CoyoteBench/huffbench | 0.025 | 0.062 | 2.48× | 0.081 | 3.24× | ok |
| CoyoteBench/lpbench | 0.025 | 0.064 | 2.56× | 0.071 | 2.84× | ok |
| DOE/HACCKernels | 0.099 | 0.235 | 2.37× | 0.310 | 3.13× | ok |
| DOE/HPCCG | 0.617 | 1.551 | 2.51× | 1.844 | 2.99× | ok |
| DOE/PENNANT | 1.357 | 4.130 | 3.04× | 3.864 | 2.85× | ok |
| DOE/miniFE | 0.630 | 2.113 | 3.35× | 2.259 | 3.59× | ok |
| Misc-C++-EH/spirit | 0.384 | 2.304 | 6.00× | 1.819 | 4.74× | ok |
| Misc-C++-Large/ray | 0.105 | 0.278 | 2.65× | 0.277 | 2.64× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.227 | 2.77× | 0.257 | 3.13× | ok |
| Misc-C++/bigfib | 0.120 | 0.355 | 2.96× | 0.416 | 3.47× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.092 | 2.97× | 0.094 | 3.03× | ok |
| Misc-C++/stepanov_container | 0.164 | 0.577 | 3.52× | 0.574 | 3.50× | ok |
| Misc-C++/stepanov_v1p2 | 0.030 | 0.115 | 3.83× | 0.081 | 2.70× | ok |
| PAQ8p | 0.063 | 0.444 | 7.05× | 0.218 | 3.46× | ok |
| Prolangs-C++/life | 0.004 | 0.032 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.059 | — | 0.051 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.162 | 2.38× | 0.206 | 3.03× | ok |
| Shootout-C++/ackermann | 0.067 | 0.154 | 2.30× | 0.199 | 2.97× | ok |
| Shootout-C++/ary3 | 0.077 | 0.188 | 2.44× | 0.221 | 2.87× | ok |
| Shootout-C++/fibo | 0.064 | 0.145 | 2.27× | 0.199 | 3.11× | ok |
| Shootout-C++/hash | 0.095 | 0.275 | 2.89× | 0.291 | 3.06× | ok |
| Shootout-C++/hash2 | 0.106 | 0.295 | 2.78× | 0.296 | 2.79× | ok |
| Shootout-C++/heapsort | 0.074 | 0.181 | 2.45× | 0.217 | 2.93× | ok |
| Shootout-C++/lists | 0.074 | 0.196 | 2.65× | 0.244 | 3.30× | ok |
| Shootout-C++/lists1 | 0.081 | 0.215 | 2.65× | 0.242 | 2.99× | ok |
| Shootout-C++/matrix | 0.071 | 0.143 | 2.01× | 0.191 | 2.69× | ok |
| Shootout-C++/methcall | 0.058 | 0.139 | 2.40× | 0.188 | 3.24× | ok |
| Shootout-C++/moments | 0.083 | 0.229 | 2.76× | 0.290 | 3.49× | ok |
| Shootout-C++/random | 0.075 | 0.193 | 2.57× | 0.234 | 3.12× | ok |
| Shootout-C++/sieve | 0.078 | 0.202 | 2.59× | 0.243 | 3.12× | ok |
| SmallPT | 0.026 | 0.081 | 3.12× | 0.076 | 2.92× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.145 | 2.34× | 0.208 | 3.35× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.070 | 2.26× | 0.081 | 2.61× | ok |
| bg/fasta/1 | 0.046 | 0.120 | 2.61× | 0.134 | 2.91× | ok |
| bg/fasta/2 | 0.045 | 0.114 | 2.53× | 0.125 | 2.78× | ok |
| bg/fasta/3 | 0.076 | 0.180 | 2.37× | 0.229 | 3.01× | ok |
| bg/fasta/4 | 0.075 | 0.143 | 1.91× | 0.167 | 2.23× | ok |
| bg/fasta/6 | 0.119 | 0.395 | 3.32× | 0.419 | 3.52× | ok |
| bg/mandelbrot/0 | 0.130 | 0.409 | 3.15× | 0.396 | 3.05× | ok |
| bg/mandelbrot/2 | 0.071 | 0.203 | 2.86× | 0.273 | 3.85× | ok |
| bg/mandelbrot/3 | 0.095 | 0.195 | 2.05× | 0.250 | 2.63× | ok |
| bg/mandelbrot/5 | 0.041 | 0.100 | 2.44× | 0.112 | 2.73× | ok |
| bg/mandelbrot/7 | 0.044 | 0.116 | 2.64× | 0.130 | 2.95× | ok |
| bg/mandelbrot/9 | 0.042 | 0.105 | 2.50× | 0.115 | 2.74× | ok |
| bg/nbody/1 | 0.028 | 0.099 | 3.54× | 0.079 | 2.82× | ok |
| bg/nbody/2 | 0.023 | 0.064 | 2.78× | 0.072 | 3.13× | ok |
| bg/nbody/3 | 0.025 | 0.062 | 2.48× | 0.071 | 2.84× | ok |
| bg/nbody/6 | 0.026 | 0.099 | 3.81× | 0.083 | 3.19× | ok |
| bg/pidigits/4 | 0.109 | 0.285 | 2.61× | 0.367 | 3.37× | ok |
| bg/pidigits/5 | 0.071 | 0.164 | 2.31× | 0.242 | 3.41× | ok |
| bg/revcomp/1 | 0.073 | 0.207 | 2.84× | 0.235 | 3.22× | ok |
| bg/revcomp/5 | 0.070 | 0.215 | 3.07× | 0.244 | 3.49× | ok |
| bg/spectralnorm/1 | 0.095 | 0.258 | 2.72× | 0.285 | 3.00× | ok |
| box2d | 1.357 | 4.059 | 2.99× | 4.179 | 3.08× | ok |
| fmt | 0.493 | 2.389 | 4.85× | 1.708 | 3.46× | ok |
| hexxagon | 0.207 | 0.601 | 2.90× | 0.683 | 3.30× | ok |
| lambda | 0.044 | 0.266 | 6.05× | 0.173 | 3.93× | ok |
| minisat | 0.051 | 0.253 | 4.96× | 0.210 | 4.12× | ok |
| nlohmann-json | 0.395 | 1.695 | 4.29× | 1.616 | 4.09× | ok |
| pugixml | 0.262 | 1.245 | 4.75× | 0.950 | 3.63× | ok |
| pugixml-tests | 3.084 | 14.038 | 4.55× | 11.834 | 3.84× | ok |
| rapidjson | 0.105 | 0.445 | 4.24× | 0.378 | 3.60× | ok |
| re2 | 2.031 | 9.234 | 4.55× | 6.302 | 3.10× | ok |
| re2-test-re2 | 4.329 | 14.319 | 3.31× | 14.891 | 3.44× | ok |
| re2-test-search | 3.542 | 12.904 | 3.64× | 14.521 | 4.10× | ok |
| tramp3d-v4 | 0.836 | 6.889 | 8.24× | 2.422 | 2.90× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.125 | 0.798 | 6.38× | 0.464 | 3.71× | ok |
| Adobe-C++/loop_unroll | 0.434 | 5.412 | 12.47× | 4.047 | 9.32× | ok |
| Adobe-C++/simple_types_constant_folding | 0.241 | 3.140 | 13.03× | 2.637 | 10.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.232 | 2.136 | 9.21× | 1.820 | 7.84× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 1.079 | 11.86× | 0.452 | 4.97× | ok |
| Adobe-C++/stepanov_vector | 0.112 | 1.170 | 10.45× | 0.515 | 4.60× | ok |
| Bullet | 5.780 | 34.986 | 6.05× | 28.435 | 4.92× | ok |
| CLAMR | 4.098 | 22.634 | 5.52× | 17.404 | 4.25× | ok |
| CoyoteBench/almabench | 0.034 | 0.169 | 4.97× | 0.151 | 4.44× | ok |
| CoyoteBench/fftbench | 0.119 | 0.399 | 3.35× | 0.404 | 3.39× | ok |
| CoyoteBench/huffbench | 0.040 | 0.220 | 5.50× | 0.139 | 3.48× | ok |
| CoyoteBench/lpbench | 0.033 | 0.157 | 4.76× | 0.169 | 5.12× | ok |
| DOE/HACCKernels | 0.111 | 0.341 | 3.07× | 0.370 | 3.33× | ok |
| DOE/HPCCG | 0.661 | 2.432 | 3.68× | 2.172 | 3.29× | ok |
| DOE/PENNANT | 1.592 | 6.722 | 4.22× | 5.503 | 3.46× | ok |
| DOE/miniFE | 0.874 | 4.242 | 4.85× | 3.600 | 4.12× | ok |
| Misc-C++-EH/spirit | 0.666 | 3.390 | 5.09× | 3.496 | 5.25× | ok |
| Misc-C++-Large/ray | 0.100 | 0.484 | 4.84× | 0.332 | 3.32× | ok |
| Misc-C++-Large/sphereflake | 0.098 | 0.695 | 7.09× | 0.380 | 3.88× | ok |
| Misc-C++/bigfib | 0.150 | 0.517 | 3.45× | 0.539 | 3.59× | ok |
| Misc-C++/oopack_v1p8 | 0.038 | 0.181 | 4.76× | 0.168 | 4.42× | ok |
| Misc-C++/stepanov_container | 0.202 | 0.918 | 4.54× | 0.868 | 4.30× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.211 | 5.41× | 0.183 | 4.69× | ok |
| PAQ8p | 0.308 | 3.794 | 12.32× | 1.561 | 5.07× | ok |
| Prolangs-C++/life | 0.010 | 0.108 | 10.80× | 0.069 | 6.90× | ok |
| Prolangs-C++/ocean | 0.020 | 0.194 | 9.70× | 0.110 | 5.50× | ok |
| Prolangs-C++/primes | 0.007 | 0.033 | — | 0.035 | — | ok |
| Shootout-C++-EH/except | 0.074 | 0.183 | 2.47× | 0.219 | 2.96× | ok |
| Shootout-C++/ackermann | 0.070 | 0.196 | 2.80× | 0.209 | 2.99× | ok |
| Shootout-C++/ary3 | 0.078 | 0.227 | 2.91× | 0.279 | 3.58× | ok |
| Shootout-C++/fibo | 0.109 | 0.186 | 1.71× | 0.209 | 1.92× | ok |
| Shootout-C++/hash | 0.114 | 0.369 | 3.24× | 0.421 | 3.69× | ok |
| Shootout-C++/hash2 | 0.141 | 0.417 | 2.96× | 0.515 | 3.65× | ok |
| Shootout-C++/heapsort | 0.079 | 0.209 | 2.65× | 0.237 | 3.00× | ok |
| Shootout-C++/lists | 0.075 | 0.225 | 3.00× | 0.240 | 3.20× | ok |
| Shootout-C++/lists1 | 0.092 | 0.258 | 2.80× | 0.283 | 3.08× | ok |
| Shootout-C++/matrix | 0.069 | 0.200 | 2.90× | 0.320 | 4.64× | ok |
| Shootout-C++/methcall | 0.066 | 0.171 | 2.59× | 0.205 | 3.11× | ok |
| Shootout-C++/moments | 0.112 | 0.284 | 2.54× | 0.295 | 2.63× | ok |
| Shootout-C++/random | 0.085 | 0.191 | 2.25× | 0.248 | 2.92× | ok |
| Shootout-C++/sieve | 0.086 | 0.227 | 2.64× | 0.286 | 3.33× | ok |
| SmallPT | 0.037 | 0.280 | 7.57× | 0.152 | 4.11× | ok |
| Stanford/Bubblesort | 0.010 | 0.051 | 5.10× | 0.043 | 4.30× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.065 | 5.42× | ok |
| Stanford/Puzzle | 0.019 | 0.114 | 6.00× | 0.107 | 5.63× | ok |
| Stanford/Treesort | 0.013 | 0.079 | 6.08× | 0.049 | 3.77× | ok |
| bg/binarytrees/2 | 0.070 | 0.391 | 5.59× | 0.216 | 3.09× | ok |
| bg/fannkuchredux/3 | 0.037 | 0.120 | 3.24× | 0.115 | 3.11× | ok |
| bg/fasta/1 | 0.057 | 0.160 | 2.81× | 0.172 | 3.02× | ok |
| bg/fasta/2 | 0.053 | 0.151 | 2.85× | 0.197 | 3.72× | ok |
| bg/fasta/3 | 0.084 | 0.222 | 2.64× | 0.263 | 3.13× | ok |
| bg/fasta/4 | 0.071 | 0.177 | 2.49× | 0.205 | 2.89× | ok |
| bg/fasta/6 | 0.143 | 0.460 | 3.22× | 0.512 | 3.58× | ok |
| bg/mandelbrot/0 | 0.169 | 0.577 | 3.41× | 0.583 | 3.45× | ok |
| bg/mandelbrot/2 | 0.098 | 0.247 | 2.52× | 0.277 | 2.83× | ok |
| bg/mandelbrot/3 | 0.099 | 0.211 | 2.13× | 0.255 | 2.58× | ok |
| bg/mandelbrot/5 | 0.048 | 0.152 | 3.17× | 0.142 | 2.96× | ok |
| bg/mandelbrot/7 | 0.053 | 0.196 | 3.70× | 0.172 | 3.25× | ok |
| bg/mandelbrot/9 | 0.054 | 0.174 | 3.22× | 0.160 | 2.96× | ok |
| bg/nbody/1 | 0.040 | 0.156 | 3.90× | 0.145 | 3.62× | ok |
| bg/nbody/2 | 0.029 | 0.116 | 4.00× | 0.134 | 4.62× | ok |
| bg/nbody/3 | 0.029 | 0.110 | 3.79× | 0.113 | 3.90× | ok |
| bg/nbody/6 | 0.036 | 0.165 | 4.58× | 0.166 | 4.61× | ok |
| bg/pidigits/4 | 0.115 | 0.327 | 2.84× | 0.452 | 3.93× | ok |
| bg/pidigits/5 | 0.075 | 0.206 | 2.75× | 0.266 | 3.55× | ok |
| bg/revcomp/1 | 0.085 | 0.236 | 2.78× | 0.275 | 3.24× | ok |
| bg/revcomp/5 | 0.083 | 0.240 | 2.89× | 0.287 | 3.46× | ok |
| bg/spectralnorm/1 | 0.103 | 0.331 | 3.21× | 0.336 | 3.26× | ok |
| box2d | 1.704 | 7.194 | 4.22× | 6.397 | 3.75× | ok |
| fmt | 0.978 | 5.240 | 5.36× | 3.644 | 3.73× | ok |
| hexxagon | 0.252 | 0.949 | 3.77× | 1.072 | 4.25× | ok |
| lambda | 0.108 | 0.996 | 9.22× | 0.481 | 4.45× | ok |
| minisat | 0.138 | 0.889 | 6.44× | 0.662 | 4.80× | ok |
| nlohmann-json | 0.784 | 3.353 | 4.28× | 2.791 | 3.56× | ok |
| pugixml | 0.639 | 5.798 | 9.07× | 3.671 | 5.74× | ok |
| pugixml-tests | 4.689 | 33.302 | 7.10× | 23.488 | 5.01× | ok |
| rapidjson | 0.218 | 1.130 | 5.18× | 0.716 | 3.28× | ok |
| re2 | 2.811 | 17.309 | 6.16× | 9.437 | 3.36× | ok |
| re2-test-re2 | 5.228 | 26.464 | 5.06× | 20.942 | 4.01× | ok |
| re2-test-search | 5.287 | 24.004 | 4.54× | 19.643 | 3.72× | ok |
| tramp3d-v4 | 3.050 | 16.825 | 5.52× | 13.160 | 4.31× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.134 | 2.31× | 0.148 | 2.55× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.097 | 2.94× | 0.099 | 3.00× | ok |
| Adobe-C++/simple_types_constant_folding | 0.034 | 0.103 | 3.03× | 0.104 | 3.06× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.092 | 2.79× | 0.097 | 2.94× | ok |
| Adobe-C++/stepanov_abstraction | 0.028 | 0.074 | 2.64× | 0.087 | 3.11× | ok |
| Adobe-C++/stepanov_vector | 0.054 | 0.118 | 2.19× | 0.186 | 3.44× | ok |
| Bullet | 4.015 | 10.717 | 2.67× | 12.539 | 3.12× | ok |
| CLAMR | 1.749 | 5.156 | 2.95× | 5.584 | 3.19× | ok |
| CoyoteBench/almabench | 0.029 | 0.054 | 1.86× | 0.085 | 2.93× | ok |
| CoyoteBench/fftbench | 0.095 | 0.215 | 2.26× | 0.276 | 2.91× | ok |
| CoyoteBench/huffbench | 0.025 | 0.053 | 2.12× | 0.078 | 3.12× | ok |
| CoyoteBench/lpbench | 0.025 | 0.051 | 2.04× | 0.067 | 2.68× | ok |
| DOE/HACCKernels | 0.096 | 0.208 | 2.17× | 0.288 | 3.00× | ok |
| DOE/HPCCG | 0.591 | 1.340 | 2.27× | 1.787 | 3.02× | ok |
| DOE/PENNANT | 1.325 | 2.881 | 2.17× | 3.362 | 2.54× | ok |
| DOE/miniFE | 0.578 | 1.369 | 2.37× | 1.867 | 3.23× | ok |
| Misc-C++-EH/spirit | 0.277 | 0.808 | 2.92× | 1.251 | 4.52× | ok |
| Misc-C++-Large/ray | 0.101 | 0.228 | 2.26× | 0.252 | 2.50× | ok |
| Misc-C++-Large/sphereflake | 0.081 | 0.199 | 2.46× | 0.227 | 2.80× | ok |
| Misc-C++/bigfib | 0.109 | 0.246 | 2.26× | 0.368 | 3.38× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.062 | 2.07× | 0.082 | 2.73× | ok |
| Misc-C++/stepanov_container | 0.145 | 0.327 | 2.26× | 0.478 | 3.30× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.060 | 2.14× | 0.070 | 2.50× | ok |
| PAQ8p | 0.041 | 0.115 | 2.80× | 0.119 | 2.90× | ok |
| Prolangs-C++/life | 0.003 | 0.011 | — | 0.020 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.029 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.157 | 2.34× | 0.194 | 2.90× | ok |
| Shootout-C++/ackermann | 0.066 | 0.158 | 2.39× | 0.190 | 2.88× | ok |
| Shootout-C++/ary3 | 0.074 | 0.171 | 2.31× | 0.209 | 2.82× | ok |
| Shootout-C++/fibo | 0.065 | 0.148 | 2.28× | 0.192 | 2.95× | ok |
| Shootout-C++/hash | 0.089 | 0.206 | 2.31× | 0.258 | 2.90× | ok |
| Shootout-C++/hash2 | 0.099 | 0.219 | 2.21× | 0.270 | 2.73× | ok |
| Shootout-C++/heapsort | 0.076 | 0.182 | 2.39× | 0.211 | 2.78× | ok |
| Shootout-C++/lists | 0.073 | 0.161 | 2.21× | 0.196 | 2.68× | ok |
| Shootout-C++/lists1 | 0.079 | 0.176 | 2.23× | 0.219 | 2.77× | ok |
| Shootout-C++/matrix | 0.074 | 0.141 | 1.91× | 0.186 | 2.51× | ok |
| Shootout-C++/methcall | 0.059 | 0.138 | 2.34× | 0.180 | 3.05× | ok |
| Shootout-C++/moments | 0.081 | 0.182 | 2.25× | 0.264 | 3.26× | ok |
| Shootout-C++/random | 0.077 | 0.200 | 2.60× | 0.228 | 2.96× | ok |
| Shootout-C++/sieve | 0.076 | 0.164 | 2.16× | 0.221 | 2.91× | ok |
| SmallPT | 0.025 | 0.052 | 2.08× | 0.070 | 2.80× | ok |
| Stanford/Bubblesort | 0.008 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.021 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.064 | 0.144 | 2.25× | 0.188 | 2.94× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.061 | 1.91× | 0.079 | 2.47× | ok |
| bg/fasta/1 | 0.045 | 0.097 | 2.16× | 0.123 | 2.73× | ok |
| bg/fasta/2 | 0.044 | 0.091 | 2.07× | 0.115 | 2.61× | ok |
| bg/fasta/3 | 0.077 | 0.169 | 2.19× | 0.207 | 2.69× | ok |
| bg/fasta/4 | 0.081 | 0.140 | 1.73× | 0.162 | 2.00× | ok |
| bg/fasta/6 | 0.111 | 0.270 | 2.43× | 0.380 | 3.42× | ok |
| bg/mandelbrot/0 | 0.119 | 0.289 | 2.43× | 0.353 | 2.97× | ok |
| bg/mandelbrot/2 | 0.070 | 0.176 | 2.51× | 0.247 | 3.53× | ok |
| bg/mandelbrot/3 | 0.096 | 0.193 | 2.01× | 0.241 | 2.51× | ok |
| bg/mandelbrot/5 | 0.040 | 0.081 | 2.02× | 0.105 | 2.62× | ok |
| bg/mandelbrot/7 | 0.042 | 0.083 | 1.98× | 0.119 | 2.83× | ok |
| bg/mandelbrot/9 | 0.040 | 0.076 | 1.90× | 0.105 | 2.62× | ok |
| bg/nbody/1 | 0.027 | 0.050 | 1.85× | 0.068 | 2.52× | ok |
| bg/nbody/2 | 0.024 | 0.048 | 2.00× | 0.069 | 2.88× | ok |
| bg/nbody/3 | 0.025 | 0.053 | 2.12× | 0.070 | 2.80× | ok |
| bg/nbody/6 | 0.025 | 0.058 | 2.32× | 0.072 | 2.88× | ok |
| bg/pidigits/4 | 0.099 | 0.257 | 2.60× | 0.307 | 3.10× | ok |
| bg/pidigits/5 | 0.070 | 0.164 | 2.34× | 0.228 | 3.26× | ok |
| bg/revcomp/1 | 0.075 | 0.167 | 2.23× | 0.214 | 2.85× | ok |
| bg/revcomp/5 | 0.067 | 0.157 | 2.34× | 0.234 | 3.49× | ok |
| bg/spectralnorm/1 | 0.098 | 0.209 | 2.13× | 0.270 | 2.76× | ok |
| box2d | 1.307 | 2.739 | 2.10× | 2.741 | 2.10× | ok |
| fmt | 0.415 | 1.048 | 2.53× | 1.326 | 3.20× | ok |
| hexxagon | 0.208 | 0.564 | 2.71× | 0.650 | 3.13× | ok |
| lambda | 0.034 | 0.104 | 3.06× | 0.127 | 3.74× | ok |
| minisat | 0.043 | 0.110 | 2.56× | 0.155 | 3.60× | ok |
| nlohmann-json | 0.311 | 0.742 | 2.39× | 1.269 | 4.08× | ok |
| pugixml | 0.204 | 0.463 | 2.27× | 0.676 | 3.31× | ok |
| pugixml-tests | 2.637 | 6.946 | 2.63× | 8.807 | 3.34× | ok |
| rapidjson | 0.082 | 0.226 | 2.76× | 0.290 | 3.54× | ok |
| re2 | 2.560 | 6.130 | 2.39× | 5.325 | 2.08× | ok |
| re2-test-re2 | 3.882 | 9.266 | 2.39× | 12.756 | 3.29× | ok |
| re2-test-search | 3.742 | 9.271 | 2.48× | 12.762 | 3.41× | ok |
| tramp3d-v4 | 0.596 | 2.083 | 3.49× | 1.400 | 2.35× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
