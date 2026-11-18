# Public benchmarks: Intel (GitHub)

Measured compiler: [`90ebfa8f4`](https://github.com/vishvananda/cppgm/commit/90ebfa8f4eed49b0d61b4b4993914107c23a761e) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44260407309) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.29× | 74 | 2.91× | 74 |
| Compile CPU, `-O0` | 3.22× | 75 | 3.17× | 75 |
| Compile CPU, `-O3` | 4.27× | 79 | 3.81× | 79 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.71× | 81 | 2.31× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.13× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.900 to 1.006; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.065 | 0.253 | 3.89× | 0.217 | 3.34× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.554 | 11.31× | 0.169 | 3.45× | ok |
| Adobe-C++/simple_types_constant_folding | 0.052 | 0.653 | 12.56× | 0.208 | 4.00× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.477 | 10.60× | 0.222 | 4.93× | ok |
| Adobe-C++/stepanov_abstraction | 0.042 | 0.171 | 4.07× | 0.110 | 2.62× | ok |
| Adobe-C++/stepanov_vector | 0.075 | 0.304 | 4.05× | 0.197 | 2.63× | ok |
| Bullet | 4.331 | 16.780 | 3.87× | 16.215 | 3.74× | ok |
| CLAMR | 2.587 | 8.963 | 3.46× | 7.202 | 2.78× | ok |
| CoyoteBench/almabench | 0.031 | 0.075 | 2.42× | 0.076 | 2.45× | ok |
| CoyoteBench/fftbench | 0.100 | 0.247 | 2.47× | 0.286 | 2.86× | ok |
| CoyoteBench/huffbench | 0.026 | 0.061 | 2.35× | 0.083 | 3.19× | ok |
| CoyoteBench/lpbench | 0.025 | 0.063 | 2.52× | 0.083 | 3.32× | ok |
| DOE/HACCKernels | 0.095 | 0.285 | 3.00× | 0.304 | 3.20× | ok |
| DOE/HPCCG | 0.680 | 1.563 | 2.30× | 2.272 | 3.34× | ok |
| DOE/PENNANT | 1.300 | 3.679 | 2.83× | 4.257 | 3.27× | ok |
| DOE/miniFE | 0.600 | 2.110 | 3.52× | 2.157 | 3.60× | ok |
| Misc-C++-EH/spirit | 0.374 | 2.249 | 6.01× | 1.791 | 4.79× | ok |
| Misc-C++-Large/ray | 0.099 | 0.270 | 2.73× | 0.300 | 3.03× | ok |
| Misc-C++-Large/sphereflake | 0.087 | 0.226 | 2.60× | 0.274 | 3.15× | ok |
| Misc-C++/bigfib | 0.120 | 0.388 | 3.23× | 0.400 | 3.33× | ok |
| Misc-C++/oopack_v1p8 | 0.032 | 0.091 | 2.84× | 0.093 | 2.91× | ok |
| Misc-C++/stepanov_container | 0.160 | 0.573 | 3.58× | 0.481 | 3.01× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.116 | 4.14× | 0.081 | 2.89× | ok |
| PAQ8p | 0.064 | 0.449 | 7.02× | 0.236 | 3.69× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.058 | 5.27× | 0.050 | 4.55× | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.150 | 2.21× | 0.206 | 3.03× | ok |
| Shootout-C++/ackermann | 0.066 | 0.157 | 2.38× | 0.197 | 2.98× | ok |
| Shootout-C++/ary3 | 0.079 | 0.186 | 2.35× | 0.222 | 2.81× | ok |
| Shootout-C++/fibo | 0.066 | 0.141 | 2.14× | 0.200 | 3.03× | ok |
| Shootout-C++/hash | 0.096 | 0.273 | 2.84× | 0.281 | 2.93× | ok |
| Shootout-C++/hash2 | 0.116 | 0.289 | 2.49× | 0.368 | 3.17× | ok |
| Shootout-C++/heapsort | 0.077 | 0.167 | 2.17× | 0.226 | 2.94× | ok |
| Shootout-C++/lists | 0.070 | 0.231 | 3.30× | 0.218 | 3.11× | ok |
| Shootout-C++/lists1 | 0.084 | 0.218 | 2.60× | 0.259 | 3.08× | ok |
| Shootout-C++/matrix | 0.071 | 0.152 | 2.14× | 0.200 | 2.82× | ok |
| Shootout-C++/methcall | 0.057 | 0.142 | 2.49× | 0.188 | 3.30× | ok |
| Shootout-C++/moments | 0.085 | 0.280 | 3.29× | 0.246 | 2.89× | ok |
| Shootout-C++/random | 0.094 | 0.196 | 2.09× | 0.232 | 2.47× | ok |
| Shootout-C++/sieve | 0.082 | 0.252 | 3.07× | 0.262 | 3.20× | ok |
| SmallPT | 0.028 | 0.081 | 2.89× | 0.081 | 2.89× | ok |
| Stanford/Bubblesort | 0.008 | 0.026 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.149 | 2.26× | 0.210 | 3.18× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.068 | 2.27× | 0.082 | 2.73× | ok |
| bg/fasta/1 | 0.048 | 0.120 | 2.50× | 0.131 | 2.73× | ok |
| bg/fasta/2 | 0.049 | 0.124 | 2.53× | 0.145 | 2.96× | ok |
| bg/fasta/3 | 0.072 | 0.171 | 2.38× | 0.219 | 3.04× | ok |
| bg/fasta/4 | 0.068 | 0.151 | 2.22× | 0.181 | 2.66× | ok |
| bg/fasta/6 | 0.126 | 0.357 | 2.83× | 0.389 | 3.09× | ok |
| bg/mandelbrot/0 | 0.145 | 0.415 | 2.86× | 0.430 | 2.97× | ok |
| bg/mandelbrot/2 | 0.089 | 0.227 | 2.55× | 0.260 | 2.92× | ok |
| bg/mandelbrot/3 | 0.085 | 0.191 | 2.25× | 0.266 | 3.13× | ok |
| bg/mandelbrot/5 | 0.043 | 0.107 | 2.49× | 0.121 | 2.81× | ok |
| bg/mandelbrot/7 | 0.044 | 0.114 | 2.59× | 0.118 | 2.68× | ok |
| bg/mandelbrot/9 | 0.043 | 0.108 | 2.51× | 0.115 | 2.67× | ok |
| bg/nbody/1 | 0.029 | 0.098 | 3.38× | 0.089 | 3.07× | ok |
| bg/nbody/2 | 0.025 | 0.057 | 2.28× | 0.075 | 3.00× | ok |
| bg/nbody/3 | 0.024 | 0.064 | 2.67× | 0.072 | 3.00× | ok |
| bg/nbody/6 | 0.028 | 0.094 | 3.36× | 0.087 | 3.11× | ok |
| bg/pidigits/4 | 0.111 | 0.290 | 2.61× | 0.342 | 3.08× | ok |
| bg/pidigits/5 | 0.071 | 0.161 | 2.27× | 0.211 | 2.97× | ok |
| bg/revcomp/1 | 0.081 | 0.215 | 2.65× | 0.256 | 3.16× | ok |
| bg/revcomp/5 | 0.076 | 0.195 | 2.57× | 0.207 | 2.72× | ok |
| bg/spectralnorm/1 | 0.109 | 0.244 | 2.24× | 0.355 | 3.26× | ok |
| box2d | 1.421 | 4.099 | 2.88× | 4.440 | 3.12× | ok |
| fmt | 0.528 | 2.357 | 4.46× | 2.057 | 3.90× | ok |
| hexxagon | 0.233 | 0.550 | 2.36× | 0.720 | 3.09× | ok |
| lambda | 0.046 | 0.269 | 5.85× | 0.195 | 4.24× | ok |
| minisat | 0.058 | 0.260 | 4.48× | 0.214 | 3.69× | ok |
| nlohmann-json | 0.397 | 1.883 | 4.74× | 1.711 | 4.31× | ok |
| pugixml | 0.271 | 1.252 | 4.62× | 1.024 | 3.78× | ok |
| pugixml-tests | 3.136 | 14.407 | 4.59× | 13.058 | 4.16× | ok |
| rapidjson | 0.113 | 0.395 | 3.50× | 0.352 | 3.12× | ok |
| re2 | 2.200 | 10.690 | 4.86× | 6.406 | 2.91× | ok |
| re2-test-re2 | 4.426 | 14.979 | 3.38× | 15.458 | 3.49× | ok |
| re2-test-search | 4.352 | 13.546 | 3.11× | 13.760 | 3.16× | ok |
| tramp3d-v4 | 0.654 | 8.225 | 12.58× | 2.475 | 3.78× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.109 | 0.804 | 7.38× | 0.486 | 4.46× | ok |
| Adobe-C++/loop_unroll | 0.431 | 5.230 | 12.13× | 4.026 | 9.34× | ok |
| Adobe-C++/simple_types_constant_folding | 0.248 | 2.905 | 11.71× | 2.254 | 9.09× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.245 | 2.151 | 8.78× | 1.768 | 7.22× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 0.951 | 10.45× | 0.451 | 4.96× | ok |
| Adobe-C++/stepanov_vector | 0.130 | 1.405 | 10.81× | 0.644 | 4.95× | ok |
| Bullet | 5.984 | 36.309 | 6.07× | 26.391 | 4.41× | ok |
| CLAMR | 4.636 | 22.636 | 4.88× | 17.168 | 3.70× | ok |
| CoyoteBench/almabench | 0.035 | 0.171 | 4.89× | 0.126 | 3.60× | ok |
| CoyoteBench/fftbench | 0.121 | 0.408 | 3.37× | 0.394 | 3.26× | ok |
| CoyoteBench/huffbench | 0.037 | 0.188 | 5.08× | 0.141 | 3.81× | ok |
| CoyoteBench/lpbench | 0.038 | 0.154 | 4.05× | 0.203 | 5.34× | ok |
| DOE/HACCKernels | 0.110 | 0.359 | 3.26× | 0.361 | 3.28× | ok |
| DOE/HPCCG | 0.742 | 2.474 | 3.33× | 2.180 | 2.94× | ok |
| DOE/PENNANT | 1.686 | 5.741 | 3.41× | 5.838 | 3.46× | ok |
| DOE/miniFE | 0.850 | 4.043 | 4.76× | 3.606 | 4.24× | ok |
| Misc-C++-EH/spirit | 0.655 | 3.613 | 5.52× | 2.875 | 4.39× | ok |
| Misc-C++-Large/ray | 0.106 | 0.455 | 4.29× | 0.394 | 3.72× | ok |
| Misc-C++-Large/sphereflake | 0.102 | 0.769 | 7.54× | 0.371 | 3.64× | ok |
| Misc-C++/bigfib | 0.148 | 0.552 | 3.73× | 0.544 | 3.68× | ok |
| Misc-C++/oopack_v1p8 | 0.038 | 0.184 | 4.84× | 0.168 | 4.42× | ok |
| Misc-C++/stepanov_container | 0.227 | 0.904 | 3.98× | 0.923 | 4.07× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.211 | 5.41× | 0.169 | 4.33× | ok |
| PAQ8p | 0.312 | 3.934 | 12.61× | 1.672 | 5.36× | ok |
| Prolangs-C++/life | 0.009 | 0.093 | — | 0.062 | — | ok |
| Prolangs-C++/ocean | 0.023 | 0.206 | 8.96× | 0.118 | 5.13× | ok |
| Prolangs-C++/primes | 0.007 | 0.036 | — | 0.035 | — | ok |
| Shootout-C++-EH/except | 0.072 | 0.182 | 2.53× | 0.217 | 3.01× | ok |
| Shootout-C++/ackermann | 0.069 | 0.197 | 2.86× | 0.208 | 3.01× | ok |
| Shootout-C++/ary3 | 0.078 | 0.229 | 2.94× | 0.268 | 3.44× | ok |
| Shootout-C++/fibo | 0.108 | 0.182 | 1.69× | 0.206 | 1.91× | ok |
| Shootout-C++/hash | 0.115 | 0.368 | 3.20× | 0.375 | 3.26× | ok |
| Shootout-C++/hash2 | 0.139 | 0.470 | 3.38× | 0.528 | 3.80× | ok |
| Shootout-C++/heapsort | 0.081 | 0.205 | 2.53× | 0.241 | 2.98× | ok |
| Shootout-C++/lists | 0.093 | 0.236 | 2.54× | 0.245 | 2.63× | ok |
| Shootout-C++/lists1 | 0.091 | 0.258 | 2.84× | 0.299 | 3.29× | ok |
| Shootout-C++/matrix | 0.071 | 0.197 | 2.77× | 0.294 | 4.14× | ok |
| Shootout-C++/methcall | 0.065 | 0.174 | 2.68× | 0.204 | 3.14× | ok |
| Shootout-C++/moments | 0.091 | 0.288 | 3.16× | 0.306 | 3.36× | ok |
| Shootout-C++/random | 0.081 | 0.202 | 2.49× | 0.250 | 3.09× | ok |
| Shootout-C++/sieve | 0.088 | 0.257 | 2.92× | 0.288 | 3.27× | ok |
| SmallPT | 0.038 | 0.289 | 7.61× | 0.156 | 4.11× | ok |
| Stanford/Bubblesort | 0.011 | 0.053 | 4.82× | 0.048 | 4.36× | ok |
| Stanford/FloatMM | 0.012 | 0.057 | 4.75× | 0.063 | 5.25× | ok |
| Stanford/Puzzle | 0.019 | 0.116 | 6.11× | 0.109 | 5.74× | ok |
| Stanford/Treesort | 0.014 | 0.079 | 5.64× | 0.051 | 3.64× | ok |
| bg/binarytrees/2 | 0.068 | 0.402 | 5.91× | 0.226 | 3.32× | ok |
| bg/fannkuchredux/3 | 0.036 | 0.116 | 3.22× | 0.110 | 3.06× | ok |
| bg/fasta/1 | 0.055 | 0.155 | 2.82× | 0.166 | 3.02× | ok |
| bg/fasta/2 | 0.056 | 0.165 | 2.95× | 0.165 | 2.95× | ok |
| bg/fasta/3 | 0.083 | 0.212 | 2.55× | 0.255 | 3.07× | ok |
| bg/fasta/4 | 0.073 | 0.181 | 2.48× | 0.224 | 3.07× | ok |
| bg/fasta/6 | 0.151 | 0.434 | 2.87× | 0.525 | 3.48× | ok |
| bg/mandelbrot/0 | 0.152 | 0.629 | 4.14× | 0.624 | 4.11× | ok |
| bg/mandelbrot/2 | 0.100 | 0.251 | 2.51× | 0.281 | 2.81× | ok |
| bg/mandelbrot/3 | 0.098 | 0.230 | 2.35× | 0.263 | 2.68× | ok |
| bg/mandelbrot/5 | 0.047 | 0.143 | 3.04× | 0.148 | 3.15× | ok |
| bg/mandelbrot/7 | 0.053 | 0.180 | 3.40× | 0.162 | 3.06× | ok |
| bg/mandelbrot/9 | 0.046 | 0.173 | 3.76× | 0.158 | 3.43× | ok |
| bg/nbody/1 | 0.042 | 0.148 | 3.52× | 0.162 | 3.86× | ok |
| bg/nbody/2 | 0.031 | 0.122 | 3.94× | 0.119 | 3.84× | ok |
| bg/nbody/3 | 0.028 | 0.115 | 4.11× | 0.102 | 3.64× | ok |
| bg/nbody/6 | 0.040 | 0.155 | 3.88× | 0.167 | 4.17× | ok |
| bg/pidigits/4 | 0.116 | 0.331 | 2.85× | 0.402 | 3.47× | ok |
| bg/pidigits/5 | 0.080 | 0.194 | 2.43× | 0.283 | 3.54× | ok |
| bg/revcomp/1 | 0.088 | 0.245 | 2.78× | 0.319 | 3.62× | ok |
| bg/revcomp/5 | 0.084 | 0.226 | 2.69× | 0.243 | 2.89× | ok |
| bg/spectralnorm/1 | 0.129 | 0.329 | 2.55× | 0.417 | 3.23× | ok |
| box2d | 1.615 | 6.813 | 4.22× | 6.384 | 3.95× | ok |
| fmt | 0.985 | 5.432 | 5.51× | 3.614 | 3.67× | ok |
| hexxagon | 0.259 | 1.062 | 4.10× | 1.097 | 4.24× | ok |
| lambda | 0.111 | 1.024 | 9.23× | 0.499 | 4.50× | ok |
| minisat | 0.140 | 1.004 | 7.17× | 0.664 | 4.74× | ok |
| nlohmann-json | 0.799 | 3.471 | 4.34× | 2.931 | 3.67× | ok |
| pugixml | 0.703 | 5.472 | 7.78× | 3.924 | 5.58× | ok |
| pugixml-tests | 4.865 | 34.060 | 7.00× | 24.658 | 5.07× | ok |
| rapidjson | 0.223 | 1.190 | 5.34× | 0.685 | 3.07× | ok |
| re2 | 2.794 | 17.394 | 6.23× | 9.589 | 3.43× | ok |
| re2-test-re2 | 5.578 | 25.559 | 4.58× | 22.223 | 3.98× | ok |
| re2-test-search | 5.812 | 23.093 | 3.97× | 21.214 | 3.65× | ok |
| tramp3d-v4 | 2.607 | 22.152 | 8.50× | 13.345 | 5.12× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.134 | 2.27× | 0.185 | 3.14× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.097 | 2.94× | 0.100 | 3.03× | ok |
| Adobe-C++/simple_types_constant_folding | 0.036 | 0.103 | 2.86× | 0.106 | 2.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.094 | 2.76× | 0.115 | 3.38× | ok |
| Adobe-C++/stepanov_abstraction | 0.034 | 0.068 | 2.00× | 0.086 | 2.53× | ok |
| Adobe-C++/stepanov_vector | 0.066 | 0.133 | 2.02× | 0.156 | 2.36× | ok |
| Bullet | 3.972 | 10.844 | 2.73× | 12.718 | 3.20× | ok |
| CLAMR | 2.196 | 5.310 | 2.42× | 5.798 | 2.64× | ok |
| CoyoteBench/almabench | 0.030 | 0.064 | 2.13× | 0.071 | 2.37× | ok |
| CoyoteBench/fftbench | 0.113 | 0.217 | 1.92× | 0.264 | 2.34× | ok |
| CoyoteBench/huffbench | 0.026 | 0.053 | 2.04× | 0.081 | 3.12× | ok |
| CoyoteBench/lpbench | 0.025 | 0.050 | 2.00× | 0.079 | 3.16× | ok |
| DOE/HACCKernels | 0.095 | 0.253 | 2.66× | 0.280 | 2.95× | ok |
| DOE/HPCCG | 0.654 | 1.298 | 1.98× | 1.905 | 2.91× | ok |
| DOE/PENNANT | 1.257 | 2.738 | 2.18× | 3.782 | 3.01× | ok |
| DOE/miniFE | 0.545 | 1.392 | 2.55× | 1.740 | 3.19× | ok |
| Misc-C++-EH/spirit | 0.266 | 0.775 | 2.91× | 1.119 | 4.21× | ok |
| Misc-C++-Large/ray | 0.094 | 0.225 | 2.39× | 0.274 | 2.91× | ok |
| Misc-C++-Large/sphereflake | 0.094 | 0.198 | 2.11× | 0.237 | 2.52× | ok |
| Misc-C++/bigfib | 0.108 | 0.254 | 2.35× | 0.344 | 3.19× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.063 | 2.17× | 0.083 | 2.86× | ok |
| Misc-C++/stepanov_container | 0.142 | 0.333 | 2.35× | 0.407 | 2.87× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.060 | 2.14× | 0.071 | 2.54× | ok |
| PAQ8p | 0.042 | 0.118 | 2.81× | 0.135 | 3.21× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.020 | — | 0.033 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.159 | 2.41× | 0.193 | 2.92× | ok |
| Shootout-C++/ackermann | 0.066 | 0.159 | 2.41× | 0.188 | 2.85× | ok |
| Shootout-C++/ary3 | 0.075 | 0.168 | 2.24× | 0.209 | 2.79× | ok |
| Shootout-C++/fibo | 0.065 | 0.145 | 2.23× | 0.190 | 2.92× | ok |
| Shootout-C++/hash | 0.091 | 0.205 | 2.25× | 0.253 | 2.78× | ok |
| Shootout-C++/hash2 | 0.109 | 0.210 | 1.93× | 0.323 | 2.96× | ok |
| Shootout-C++/heapsort | 0.077 | 0.165 | 2.14× | 0.216 | 2.81× | ok |
| Shootout-C++/lists | 0.067 | 0.192 | 2.87× | 0.199 | 2.97× | ok |
| Shootout-C++/lists1 | 0.081 | 0.177 | 2.19× | 0.245 | 3.02× | ok |
| Shootout-C++/matrix | 0.063 | 0.150 | 2.38× | 0.190 | 3.02× | ok |
| Shootout-C++/methcall | 0.058 | 0.139 | 2.40× | 0.182 | 3.14× | ok |
| Shootout-C++/moments | 0.081 | 0.205 | 2.53× | 0.224 | 2.77× | ok |
| Shootout-C++/random | 0.094 | 0.199 | 2.12× | 0.249 | 2.65× | ok |
| Shootout-C++/sieve | 0.077 | 0.175 | 2.27× | 0.240 | 3.12× | ok |
| SmallPT | 0.026 | 0.053 | 2.04× | 0.074 | 2.85× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.009 | 0.022 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.021 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.064 | 0.145 | 2.27× | 0.206 | 3.22× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.058 | 1.93× | 0.077 | 2.57× | ok |
| bg/fasta/1 | 0.046 | 0.094 | 2.04× | 0.118 | 2.57× | ok |
| bg/fasta/2 | 0.047 | 0.093 | 1.98× | 0.117 | 2.49× | ok |
| bg/fasta/3 | 0.071 | 0.161 | 2.27× | 0.209 | 2.94× | ok |
| bg/fasta/4 | 0.066 | 0.146 | 2.21× | 0.174 | 2.64× | ok |
| bg/fasta/6 | 0.111 | 0.256 | 2.31× | 0.336 | 3.03× | ok |
| bg/mandelbrot/0 | 0.142 | 0.280 | 1.97× | 0.372 | 2.62× | ok |
| bg/mandelbrot/2 | 0.080 | 0.181 | 2.26× | 0.239 | 2.99× | ok |
| bg/mandelbrot/3 | 0.085 | 0.188 | 2.21× | 0.256 | 3.01× | ok |
| bg/mandelbrot/5 | 0.041 | 0.087 | 2.12× | 0.111 | 2.71× | ok |
| bg/mandelbrot/7 | 0.043 | 0.083 | 1.93× | 0.105 | 2.44× | ok |
| bg/mandelbrot/9 | 0.041 | 0.077 | 1.88× | 0.104 | 2.54× | ok |
| bg/nbody/1 | 0.028 | 0.058 | 2.07× | 0.078 | 2.79× | ok |
| bg/nbody/2 | 0.025 | 0.048 | 1.92× | 0.071 | 2.84× | ok |
| bg/nbody/3 | 0.027 | 0.055 | 2.04× | 0.068 | 2.52× | ok |
| bg/nbody/6 | 0.026 | 0.055 | 2.12× | 0.075 | 2.88× | ok |
| bg/pidigits/4 | 0.109 | 0.259 | 2.38× | 0.328 | 3.01× | ok |
| bg/pidigits/5 | 0.080 | 0.157 | 1.96× | 0.202 | 2.53× | ok |
| bg/revcomp/1 | 0.078 | 0.169 | 2.17× | 0.256 | 3.28× | ok |
| bg/revcomp/5 | 0.072 | 0.155 | 2.15× | 0.187 | 2.60× | ok |
| bg/spectralnorm/1 | 0.101 | 0.233 | 2.31× | 0.328 | 3.25× | ok |
| box2d | 1.317 | 2.974 | 2.26× | 2.728 | 2.07× | ok |
| fmt | 0.432 | 1.082 | 2.50× | 1.582 | 3.66× | ok |
| hexxagon | 0.221 | 0.494 | 2.24× | 0.670 | 3.03× | ok |
| lambda | 0.036 | 0.109 | 3.03× | 0.139 | 3.86× | ok |
| minisat | 0.049 | 0.114 | 2.33× | 0.158 | 3.22× | ok |
| nlohmann-json | 0.324 | 0.830 | 2.56× | 1.284 | 3.96× | ok |
| pugixml | 0.203 | 0.462 | 2.28× | 0.733 | 3.61× | ok |
| pugixml-tests | 2.786 | 6.978 | 2.50× | 8.636 | 3.10× | ok |
| rapidjson | 0.092 | 0.202 | 2.20× | 0.271 | 2.95× | ok |
| re2 | 2.668 | 6.809 | 2.55× | 5.454 | 2.04× | ok |
| re2-test-re2 | 3.911 | 9.287 | 2.37× | 12.431 | 3.18× | ok |
| re2-test-search | 3.917 | 8.628 | 2.20× | 13.125 | 3.35× | ok |
| tramp3d-v4 | 0.420 | 2.322 | 5.53× | 1.432 | 3.41× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
