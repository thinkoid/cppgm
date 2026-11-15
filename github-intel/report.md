# Public benchmarks: Intel (GitHub)

Measured compiler: [`c9b05c4c0`](https://github.com/vishvananda/cppgm/commit/c9b05c4c0f7bb1294c717551c61145940b21125e) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43750858846) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.26× | 74 | 2.95× | 74 |
| Compile CPU, `-O0` | 3.17× | 74 | 3.15× | 74 |
| Compile CPU, `-O3` | 4.27× | 79 | 3.80× | 79 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.12× | 81 |
| Compile peak RSS, `-O3` | 1.68× | 81 | 2.18× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.906 to 1.039; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.062 | 0.241 | 3.89× | 0.202 | 3.26× | ok |
| Adobe-C++/loop_unroll | 0.051 | 0.545 | 10.69× | 0.165 | 3.24× | ok |
| Adobe-C++/simple_types_constant_folding | 0.053 | 0.625 | 11.79× | 0.200 | 3.77× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.462 | 10.50× | 0.215 | 4.89× | ok |
| Adobe-C++/stepanov_abstraction | 0.038 | 0.165 | 4.34× | 0.108 | 2.84× | ok |
| Adobe-C++/stepanov_vector | 0.061 | 0.261 | 4.28× | 0.190 | 3.11× | ok |
| Bullet | 4.110 | 17.275 | 4.20× | 13.641 | 3.32× | ok |
| CLAMR | 2.221 | 9.270 | 4.17× | 6.898 | 3.11× | ok |
| CoyoteBench/almabench | 0.028 | 0.071 | 2.54× | 0.076 | 2.71× | ok |
| CoyoteBench/fftbench | 0.095 | 0.235 | 2.47× | 0.294 | 3.09× | ok |
| CoyoteBench/huffbench | 0.025 | 0.062 | 2.48× | 0.084 | 3.36× | ok |
| CoyoteBench/lpbench | 0.026 | 0.069 | 2.65× | 0.068 | 2.62× | ok |
| DOE/HACCKernels | 0.093 | 0.239 | 2.57× | 0.284 | 3.05× | ok |
| DOE/HPCCG | 0.646 | 1.446 | 2.24× | 2.038 | 3.15× | ok |
| DOE/PENNANT | 1.237 | 3.767 | 3.05× | 3.747 | 3.03× | ok |
| DOE/miniFE | 0.538 | 1.831 | 3.40× | 1.720 | 3.20× | ok |
| Misc-C++-EH/spirit | 0.359 | 2.616 | 7.29× | 1.521 | 4.24× | ok |
| Misc-C++-Large/ray | 0.085 | 0.231 | 2.72× | 0.327 | 3.85× | ok |
| Misc-C++-Large/sphereflake | 0.087 | 0.189 | 2.17× | 0.248 | 2.85× | ok |
| Misc-C++/bigfib | 0.105 | 0.323 | 3.08× | 0.342 | 3.26× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.081 | 2.89× | 0.090 | 3.21× | ok |
| Misc-C++/stepanov_container | 0.153 | 0.551 | 3.60× | 0.516 | 3.37× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.111 | 3.96× | 0.102 | 3.64× | ok |
| PAQ8p | 0.064 | 0.444 | 6.94× | 0.235 | 3.67× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.026 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.057 | — | 0.038 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.020 | — | 0.023 | — | ok |
| Shootout-C++-EH/except | 0.074 | 0.160 | 2.16× | 0.227 | 3.07× | ok |
| Shootout-C++/ackermann | 0.065 | 0.141 | 2.17× | 0.237 | 3.65× | ok |
| Shootout-C++/ary3 | 0.085 | 0.203 | 2.39× | 0.224 | 2.64× | ok |
| Shootout-C++/fibo | 0.071 | 0.157 | 2.21× | 0.228 | 3.21× | ok |
| Shootout-C++/hash | 0.110 | 0.303 | 2.75× | 0.317 | 2.88× | ok |
| Shootout-C++/hash2 | 0.094 | 0.270 | 2.87× | 0.338 | 3.60× | ok |
| Shootout-C++/heapsort | 0.078 | 0.183 | 2.35× | 0.221 | 2.83× | ok |
| Shootout-C++/lists | 0.077 | 0.187 | 2.43× | 0.213 | 2.77× | ok |
| Shootout-C++/lists1 | 0.082 | 0.217 | 2.65× | 0.243 | 2.96× | ok |
| Shootout-C++/matrix | 0.062 | 0.141 | 2.27× | 0.188 | 3.03× | ok |
| Shootout-C++/methcall | 0.061 | 0.140 | 2.30× | 0.183 | 3.00× | ok |
| Shootout-C++/moments | 0.088 | 0.229 | 2.60× | 0.266 | 3.02× | ok |
| Shootout-C++/random | 0.077 | 0.162 | 2.10× | 0.236 | 3.06× | ok |
| Shootout-C++/sieve | 0.078 | 0.219 | 2.81× | 0.270 | 3.46× | ok |
| SmallPT | 0.026 | 0.080 | 3.08× | 0.073 | 2.81× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.065 | 0.145 | 2.23× | 0.234 | 3.60× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.071 | 2.22× | 0.081 | 2.53× | ok |
| bg/fasta/1 | 0.052 | 0.120 | 2.31× | 0.132 | 2.54× | ok |
| bg/fasta/2 | 0.053 | 0.113 | 2.13× | 0.125 | 2.36× | ok |
| bg/fasta/3 | 0.086 | 0.176 | 2.05× | 0.216 | 2.51× | ok |
| bg/fasta/4 | 0.070 | 0.169 | 2.41× | 0.171 | 2.44× | ok |
| bg/fasta/6 | 0.139 | 0.369 | 2.65× | 0.466 | 3.35× | ok |
| bg/mandelbrot/0 | 0.148 | 0.408 | 2.76× | 0.431 | 2.91× | ok |
| bg/mandelbrot/2 | 0.084 | 0.197 | 2.35× | 0.242 | 2.88× | ok |
| bg/mandelbrot/3 | 0.081 | 0.187 | 2.31× | 0.264 | 3.26× | ok |
| bg/mandelbrot/5 | 0.041 | 0.102 | 2.49× | 0.125 | 3.05× | ok |
| bg/mandelbrot/7 | 0.043 | 0.124 | 2.88× | 0.129 | 3.00× | ok |
| bg/mandelbrot/9 | 0.040 | 0.106 | 2.65× | 0.114 | 2.85× | ok |
| bg/nbody/1 | 0.028 | 0.096 | 3.43× | 0.084 | 3.00× | ok |
| bg/nbody/2 | 0.024 | 0.067 | 2.79× | 0.075 | 3.12× | ok |
| bg/nbody/3 | 0.023 | 0.065 | 2.83× | 0.070 | 3.04× | ok |
| bg/nbody/6 | 0.027 | 0.094 | 3.48× | 0.083 | 3.07× | ok |
| bg/pidigits/4 | 0.106 | 0.284 | 2.68× | 0.328 | 3.09× | ok |
| bg/pidigits/5 | 0.071 | 0.155 | 2.18× | 0.221 | 3.11× | ok |
| bg/revcomp/1 | 0.079 | 0.204 | 2.58× | 0.229 | 2.90× | ok |
| bg/revcomp/5 | 0.074 | 0.210 | 2.84× | 0.268 | 3.62× | ok |
| bg/spectralnorm/1 | 0.097 | 0.249 | 2.57× | 0.338 | 3.48× | ok |
| box2d | 1.300 | 3.985 | 3.07× | 3.193 | 2.46× | ok |
| fmt | 0.462 | 2.293 | 4.96× | 1.907 | 4.13× | ok |
| hexxagon | 0.233 | 0.627 | 2.69× | 0.824 | 3.54× | ok |
| lambda | 0.049 | 0.289 | 5.90× | 0.209 | 4.27× | ok |
| minisat | 0.060 | 0.269 | 4.48× | 0.225 | 3.75× | ok |
| nlohmann-json | 0.418 | 1.946 | 4.66× | 1.737 | 4.16× | ok |
| pugixml | 0.278 | 1.240 | 4.46× | 1.024 | 3.68× | ok |
| pugixml-tests | 3.358 | 14.779 | 4.40× | 13.144 | 3.91× | ok |
| rapidjson | 0.114 | 0.450 | 3.95× | 0.360 | 3.16× | ok |
| re2 | 3.107 | 10.819 | 3.48× | 6.609 | 2.13× | ok |
| re2-test-re2 | 4.601 | 14.437 | 3.14× | 15.612 | 3.39× | ok |
| re2-test-search | 4.651 | 14.284 | 3.07× | 13.637 | 2.93× | ok |
| tramp3d-v4 | 1.059 | 8.341 | 7.88× | 2.539 | 2.40× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.108 | 0.795 | 7.36× | 0.480 | 4.44× | ok |
| Adobe-C++/loop_unroll | 0.480 | 5.138 | 10.70× | 3.991 | 8.31× | ok |
| Adobe-C++/simple_types_constant_folding | 0.245 | 2.865 | 11.69× | 2.481 | 10.13× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.241 | 2.131 | 8.84× | 1.767 | 7.33× | ok |
| Adobe-C++/stepanov_abstraction | 0.090 | 0.941 | 10.46× | 0.473 | 5.26× | ok |
| Adobe-C++/stepanov_vector | 0.120 | 1.171 | 9.76× | 0.611 | 5.09× | ok |
| Bullet | 5.904 | 33.734 | 5.71× | 24.529 | 4.15× | ok |
| CLAMR | 3.965 | 22.959 | 5.79× | 16.425 | 4.14× | ok |
| CoyoteBench/almabench | 0.034 | 0.167 | 4.91× | 0.125 | 3.68× | ok |
| CoyoteBench/fftbench | 0.125 | 0.395 | 3.16× | 0.402 | 3.22× | ok |
| CoyoteBench/huffbench | 0.033 | 0.190 | 5.76× | 0.117 | 3.55× | ok |
| CoyoteBench/lpbench | 0.034 | 0.167 | 4.91× | 0.170 | 5.00× | ok |
| DOE/HACCKernels | 0.110 | 0.327 | 2.97× | 0.341 | 3.10× | ok |
| DOE/HPCCG | 0.643 | 2.385 | 3.71× | 2.523 | 3.92× | ok |
| DOE/PENNANT | 1.730 | 5.676 | 3.28× | 5.264 | 3.04× | ok |
| DOE/miniFE | 0.764 | 3.727 | 4.88× | 2.917 | 3.82× | ok |
| Misc-C++-EH/spirit | 0.672 | 3.616 | 5.38× | 2.781 | 4.14× | ok |
| Misc-C++-Large/ray | 0.106 | 0.417 | 3.93× | 0.347 | 3.27× | ok |
| Misc-C++-Large/sphereflake | 0.107 | 0.733 | 6.85× | 0.371 | 3.47× | ok |
| Misc-C++/bigfib | 0.134 | 0.498 | 3.72× | 0.472 | 3.52× | ok |
| Misc-C++/oopack_v1p8 | 0.034 | 0.169 | 4.97× | 0.170 | 5.00× | ok |
| Misc-C++/stepanov_container | 0.223 | 0.886 | 3.97× | 0.925 | 4.15× | ok |
| Misc-C++/stepanov_v1p2 | 0.043 | 0.199 | 4.63× | 0.181 | 4.21× | ok |
| PAQ8p | 0.314 | 3.877 | 12.35× | 1.653 | 5.26× | ok |
| Prolangs-C++/life | 0.009 | 0.093 | — | 0.069 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.184 | 9.68× | 0.104 | 5.47× | ok |
| Prolangs-C++/primes | 0.007 | 0.032 | — | 0.031 | — | ok |
| Shootout-C++-EH/except | 0.079 | 0.192 | 2.43× | 0.241 | 3.05× | ok |
| Shootout-C++/ackermann | 0.067 | 0.179 | 2.67× | 0.238 | 3.55× | ok |
| Shootout-C++/ary3 | 0.078 | 0.243 | 3.12× | 0.248 | 3.18× | ok |
| Shootout-C++/fibo | 0.075 | 0.204 | 2.72× | 0.251 | 3.35× | ok |
| Shootout-C++/hash | 0.130 | 0.404 | 3.11× | 0.406 | 3.12× | ok |
| Shootout-C++/hash2 | 0.118 | 0.381 | 3.23× | 0.409 | 3.47× | ok |
| Shootout-C++/heapsort | 0.083 | 0.207 | 2.49× | 0.232 | 2.80× | ok |
| Shootout-C++/lists | 0.077 | 0.269 | 3.49× | 0.243 | 3.16× | ok |
| Shootout-C++/lists1 | 0.088 | 0.260 | 2.95× | 0.282 | 3.20× | ok |
| Shootout-C++/matrix | 0.069 | 0.199 | 2.88× | 0.278 | 4.03× | ok |
| Shootout-C++/methcall | 0.081 | 0.176 | 2.17× | 0.204 | 2.52× | ok |
| Shootout-C++/moments | 0.097 | 0.286 | 2.95× | 0.305 | 3.14× | ok |
| Shootout-C++/random | 0.086 | 0.192 | 2.23× | 0.248 | 2.88× | ok |
| Shootout-C++/sieve | 0.090 | 0.244 | 2.71× | 0.294 | 3.27× | ok |
| SmallPT | 0.036 | 0.276 | 7.67× | 0.152 | 4.22× | ok |
| Stanford/Bubblesort | 0.010 | 0.051 | 5.10× | 0.046 | 4.60× | ok |
| Stanford/FloatMM | 0.012 | 0.057 | 4.75× | 0.067 | 5.58× | ok |
| Stanford/Puzzle | 0.019 | 0.118 | 6.21× | 0.113 | 5.95× | ok |
| Stanford/Treesort | 0.013 | 0.083 | 6.38× | 0.047 | 3.62× | ok |
| bg/binarytrees/2 | 0.071 | 0.394 | 5.55× | 0.221 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.122 | 3.21× | 0.113 | 2.97× | ok |
| bg/fasta/1 | 0.059 | 0.160 | 2.71× | 0.171 | 2.90× | ok |
| bg/fasta/2 | 0.059 | 0.158 | 2.68× | 0.158 | 2.68× | ok |
| bg/fasta/3 | 0.081 | 0.214 | 2.64× | 0.270 | 3.33× | ok |
| bg/fasta/4 | 0.072 | 0.184 | 2.56× | 0.206 | 2.86× | ok |
| bg/fasta/6 | 0.139 | 0.429 | 3.09× | 0.459 | 3.30× | ok |
| bg/mandelbrot/0 | 0.172 | 0.690 | 4.01× | 0.636 | 3.70× | ok |
| bg/mandelbrot/2 | 0.093 | 0.245 | 2.63× | 0.303 | 3.26× | ok |
| bg/mandelbrot/3 | 0.093 | 0.206 | 2.22× | 0.280 | 3.01× | ok |
| bg/mandelbrot/5 | 0.049 | 0.139 | 2.84× | 0.141 | 2.88× | ok |
| bg/mandelbrot/7 | 0.055 | 0.197 | 3.58× | 0.170 | 3.09× | ok |
| bg/mandelbrot/9 | 0.052 | 0.173 | 3.33× | 0.163 | 3.13× | ok |
| bg/nbody/1 | 0.040 | 0.168 | 4.20× | 0.162 | 4.05× | ok |
| bg/nbody/2 | 0.029 | 0.118 | 4.07× | 0.113 | 3.90× | ok |
| bg/nbody/3 | 0.028 | 0.120 | 4.29× | 0.100 | 3.57× | ok |
| bg/nbody/6 | 0.039 | 0.160 | 4.10× | 0.164 | 4.21× | ok |
| bg/pidigits/4 | 0.114 | 0.338 | 2.96× | 0.446 | 3.91× | ok |
| bg/pidigits/5 | 0.079 | 0.194 | 2.46× | 0.256 | 3.24× | ok |
| bg/revcomp/1 | 0.085 | 0.235 | 2.76× | 0.268 | 3.15× | ok |
| bg/revcomp/5 | 0.086 | 0.249 | 2.90× | 0.289 | 3.36× | ok |
| bg/spectralnorm/1 | 0.104 | 0.330 | 3.17× | 0.402 | 3.87× | ok |
| box2d | 1.731 | 6.865 | 3.97× | 5.799 | 3.35× | ok |
| fmt | 0.944 | 5.088 | 5.39× | 3.619 | 3.83× | ok |
| hexxagon | 0.278 | 1.008 | 3.63× | 1.063 | 3.82× | ok |
| lambda | 0.119 | 1.101 | 9.25× | 0.558 | 4.69× | ok |
| minisat | 0.141 | 0.992 | 7.04× | 0.608 | 4.31× | ok |
| nlohmann-json | 0.809 | 3.462 | 4.28× | 2.470 | 3.05× | ok |
| pugixml | 0.707 | 5.170 | 7.31× | 3.981 | 5.63× | ok |
| pugixml-tests | 4.986 | 34.438 | 6.91× | 24.440 | 4.90× | ok |
| rapidjson | 0.233 | 1.149 | 4.93× | 0.667 | 2.86× | ok |
| re2 | 2.962 | 18.572 | 6.27× | 9.865 | 3.33× | ok |
| re2-test-re2 | 5.927 | 26.701 | 4.50× | 22.279 | 3.76× | ok |
| re2-test-search | 5.723 | 23.092 | 4.03× | 20.862 | 3.65× | ok |
| tramp3d-v4 | 2.620 | 16.858 | 6.43× | 13.726 | 5.24× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.129 | 2.22× | 0.179 | 3.09× | ok |
| Adobe-C++/loop_unroll | 0.037 | 0.095 | 2.57× | 0.101 | 2.73× | ok |
| Adobe-C++/simple_types_constant_folding | 0.038 | 0.100 | 2.63× | 0.103 | 2.71× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.032 | 0.089 | 2.78× | 0.114 | 3.56× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.064 | 2.00× | 0.085 | 2.66× | ok |
| Adobe-C++/stepanov_vector | 0.054 | 0.116 | 2.15× | 0.157 | 2.91× | ok |
| Bullet | 3.739 | 10.559 | 2.82× | 11.542 | 3.09× | ok |
| CLAMR | 1.963 | 5.107 | 2.60× | 5.558 | 2.83× | ok |
| CoyoteBench/almabench | 0.029 | 0.061 | 2.10× | 0.075 | 2.59× | ok |
| CoyoteBench/fftbench | 0.095 | 0.211 | 2.22× | 0.296 | 3.12× | ok |
| CoyoteBench/huffbench | 0.025 | 0.054 | 2.16× | 0.082 | 3.28× | ok |
| CoyoteBench/lpbench | 0.026 | 0.054 | 2.08× | 0.065 | 2.50× | ok |
| DOE/HACCKernels | 0.094 | 0.214 | 2.28× | 0.273 | 2.90× | ok |
| DOE/HPCCG | 0.625 | 1.232 | 1.97× | 1.904 | 3.05× | ok |
| DOE/PENNANT | 1.284 | 2.944 | 2.29× | 3.349 | 2.61× | ok |
| DOE/miniFE | 0.496 | 1.184 | 2.39× | 1.475 | 2.97× | ok |
| Misc-C++-EH/spirit | 0.290 | 0.925 | 3.19× | 0.983 | 3.39× | ok |
| Misc-C++-Large/ray | 0.084 | 0.194 | 2.31× | 0.301 | 3.58× | ok |
| Misc-C++-Large/sphereflake | 0.090 | 0.168 | 1.87× | 0.262 | 2.91× | ok |
| Misc-C++/bigfib | 0.099 | 0.217 | 2.19× | 0.303 | 3.06× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.058 | 2.15× | 0.084 | 3.11× | ok |
| Misc-C++/stepanov_container | 0.141 | 0.320 | 2.27× | 0.434 | 3.08× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.057 | 2.11× | 0.088 | 3.26× | ok |
| PAQ8p | 0.043 | 0.116 | 2.70× | 0.133 | 3.09× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.018 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.022 | — | ok |
| Shootout-C++-EH/except | 0.073 | 0.162 | 2.22× | 0.215 | 2.95× | ok |
| Shootout-C++/ackermann | 0.065 | 0.142 | 2.18× | 0.229 | 3.52× | ok |
| Shootout-C++/ary3 | 0.081 | 0.180 | 2.22× | 0.208 | 2.57× | ok |
| Shootout-C++/fibo | 0.071 | 0.165 | 2.32× | 0.219 | 3.08× | ok |
| Shootout-C++/hash | 0.103 | 0.226 | 2.19× | 0.293 | 2.84× | ok |
| Shootout-C++/hash2 | 0.088 | 0.199 | 2.26× | 0.298 | 3.39× | ok |
| Shootout-C++/heapsort | 0.080 | 0.181 | 2.26× | 0.214 | 2.67× | ok |
| Shootout-C++/lists | 0.076 | 0.157 | 2.07× | 0.195 | 2.57× | ok |
| Shootout-C++/lists1 | 0.078 | 0.178 | 2.28× | 0.220 | 2.82× | ok |
| Shootout-C++/matrix | 0.064 | 0.139 | 2.17× | 0.182 | 2.84× | ok |
| Shootout-C++/methcall | 0.063 | 0.139 | 2.21× | 0.179 | 2.84× | ok |
| Shootout-C++/moments | 0.084 | 0.182 | 2.17× | 0.220 | 2.62× | ok |
| Shootout-C++/random | 0.079 | 0.164 | 2.08× | 0.229 | 2.90× | ok |
| Shootout-C++/sieve | 0.076 | 0.178 | 2.34× | 0.252 | 3.32× | ok |
| SmallPT | 0.025 | 0.052 | 2.08× | 0.068 | 2.72× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.022 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.067 | 0.144 | 2.15× | 0.216 | 3.22× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.061 | 1.85× | 0.080 | 2.42× | ok |
| bg/fasta/1 | 0.049 | 0.097 | 1.98× | 0.122 | 2.49× | ok |
| bg/fasta/2 | 0.053 | 0.090 | 1.70× | 0.133 | 2.51× | ok |
| bg/fasta/3 | 0.083 | 0.170 | 2.05× | 0.207 | 2.49× | ok |
| bg/fasta/4 | 0.070 | 0.163 | 2.33× | 0.164 | 2.34× | ok |
| bg/fasta/6 | 0.117 | 0.265 | 2.26× | 0.397 | 3.39× | ok |
| bg/mandelbrot/0 | 0.131 | 0.277 | 2.11× | 0.401 | 3.06× | ok |
| bg/mandelbrot/2 | 0.082 | 0.176 | 2.15× | 0.227 | 2.77× | ok |
| bg/mandelbrot/3 | 0.081 | 0.183 | 2.26× | 0.246 | 3.04× | ok |
| bg/mandelbrot/5 | 0.041 | 0.083 | 2.02× | 0.113 | 2.76× | ok |
| bg/mandelbrot/7 | 0.041 | 0.091 | 2.22× | 0.114 | 2.78× | ok |
| bg/mandelbrot/9 | 0.038 | 0.077 | 2.03× | 0.102 | 2.68× | ok |
| bg/nbody/1 | 0.027 | 0.055 | 2.04× | 0.072 | 2.67× | ok |
| bg/nbody/2 | 0.025 | 0.056 | 2.24× | 0.064 | 2.56× | ok |
| bg/nbody/3 | 0.024 | 0.054 | 2.25× | 0.067 | 2.79× | ok |
| bg/nbody/6 | 0.026 | 0.054 | 2.08× | 0.073 | 2.81× | ok |
| bg/pidigits/4 | 0.107 | 0.258 | 2.41× | 0.359 | 3.36× | ok |
| bg/pidigits/5 | 0.068 | 0.152 | 2.24× | 0.216 | 3.18× | ok |
| bg/revcomp/1 | 0.076 | 0.163 | 2.14× | 0.209 | 2.75× | ok |
| bg/revcomp/5 | 0.073 | 0.151 | 2.07× | 0.240 | 3.29× | ok |
| bg/spectralnorm/1 | 0.112 | 0.221 | 1.97× | 0.318 | 2.84× | ok |
| box2d | 1.297 | 2.600 | 2.00× | 3.709 | 2.86× | ok |
| fmt | 0.380 | 0.937 | 2.47× | 1.557 | 4.10× | ok |
| hexxagon | 0.235 | 0.568 | 2.42× | 0.736 | 3.13× | ok |
| lambda | 0.039 | 0.116 | 2.97× | 0.154 | 3.95× | ok |
| minisat | 0.050 | 0.119 | 2.38× | 0.164 | 3.28× | ok |
| nlohmann-json | 0.337 | 0.829 | 2.46× | 1.270 | 3.77× | ok |
| pugixml | 0.203 | 0.461 | 2.27× | 0.698 | 3.44× | ok |
| pugixml-tests | 2.826 | 7.084 | 2.51× | 9.540 | 3.38× | ok |
| rapidjson | 0.093 | 0.230 | 2.47× | 0.271 | 2.91× | ok |
| re2 | 2.805 | 6.845 | 2.44× | 5.575 | 1.99× | ok |
| re2-test-re2 | 4.224 | 9.325 | 2.21× | 12.327 | 2.92× | ok |
| re2-test-search | 4.123 | 9.329 | 2.26× | 13.215 | 3.21× | ok |
| tramp3d-v4 | 0.493 | 2.242 | 4.55× | 1.499 | 3.04× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
