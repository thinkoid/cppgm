# Public benchmarks: AMD EPYC

Measured compiler: [`94aaecc52`](https://github.com/vishvananda/cppgm/commit/94aaecc52ac26996bd3d654522334e3c28c68457) · [CI run](https://github.com/thinkoid/cppgm/actions/runs/44661842949) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 9V45 96-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.17× | 74 | 2.67× | 74 |
| Compile CPU, `-O0` | 3.05× | 75 | 2.91× | 75 |
| Compile CPU, `-O3` | 4.19× | 79 | 3.69× | 79 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.21× | 81 |
| Compile peak RSS, `-O3` | 1.71× | 81 | 2.30× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.13× | 81 | 1.12× | 81 |
| Run CPU, `-O3` | 1.02× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.898 to 1.092; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.061 | 0.219 | 3.59× | 0.185 | 3.03× | ok |
| Adobe-C++/loop_unroll | 0.047 | 0.462 | 9.83× | 0.151 | 3.21× | ok |
| Adobe-C++/simple_types_constant_folding | 0.052 | 0.565 | 10.87× | 0.177 | 3.40× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.043 | 0.394 | 9.16× | 0.148 | 3.44× | ok |
| Adobe-C++/stepanov_abstraction | 0.035 | 0.147 | 4.20× | 0.095 | 2.71× | ok |
| Adobe-C++/stepanov_vector | 0.067 | 0.235 | 3.51× | 0.167 | 2.49× | ok |
| Bullet | 4.412 | 15.319 | 3.47× | 13.792 | 3.13× | ok |
| CLAMR | 2.285 | 7.938 | 3.47× | 7.316 | 3.20× | ok |
| CoyoteBench/almabench | 0.029 | 0.064 | 2.21× | 0.072 | 2.48× | ok |
| CoyoteBench/fftbench | 0.094 | 0.208 | 2.21× | 0.259 | 2.76× | ok |
| CoyoteBench/huffbench | 0.025 | 0.069 | 2.76× | 0.066 | 2.64× | ok |
| CoyoteBench/lpbench | 0.025 | 0.065 | 2.60× | 0.067 | 2.68× | ok |
| DOE/HACCKernels | 0.107 | 0.250 | 2.34× | 0.271 | 2.53× | ok |
| DOE/HPCCG | 0.628 | 1.418 | 2.26× | 1.947 | 3.10× | ok |
| DOE/PENNANT | 1.281 | 3.588 | 2.80× | 3.700 | 2.89× | ok |
| DOE/miniFE | 0.548 | 1.923 | 3.51× | 1.823 | 3.33× | ok |
| Misc-C++-EH/spirit | 0.351 | 2.171 | 6.19× | 1.631 | 4.65× | ok |
| Misc-C++-Large/ray | 0.092 | 0.248 | 2.70× | 0.268 | 2.91× | ok |
| Misc-C++-Large/sphereflake | 0.081 | 0.203 | 2.51× | 0.220 | 2.72× | ok |
| Misc-C++/bigfib | 0.110 | 0.346 | 3.15× | 0.372 | 3.38× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.083 | 2.86× | 0.077 | 2.66× | ok |
| Misc-C++/stepanov_container | 0.127 | 0.446 | 3.51× | 0.381 | 3.00× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.098 | 3.50× | 0.078 | 2.79× | ok |
| PAQ8p | 0.057 | 0.374 | 6.56× | 0.183 | 3.21× | ok |
| Prolangs-C++/life | 0.004 | 0.028 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.056 | 5.60× | 0.041 | 4.10× | ok |
| Prolangs-C++/primes | 0.006 | 0.023 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.133 | 2.05× | 0.183 | 2.82× | ok |
| Shootout-C++/ackermann | 0.068 | 0.153 | 2.25× | 0.174 | 2.56× | ok |
| Shootout-C++/ary3 | 0.076 | 0.167 | 2.20× | 0.202 | 2.66× | ok |
| Shootout-C++/fibo | 0.064 | 0.135 | 2.11× | 0.178 | 2.78× | ok |
| Shootout-C++/hash | 0.095 | 0.254 | 2.67× | 0.317 | 3.34× | ok |
| Shootout-C++/hash2 | 0.088 | 0.238 | 2.70× | 0.248 | 2.82× | ok |
| Shootout-C++/heapsort | 0.075 | 0.166 | 2.21× | 0.212 | 2.83× | ok |
| Shootout-C++/lists | 0.068 | 0.190 | 2.79× | 0.212 | 3.12× | ok |
| Shootout-C++/lists1 | 0.081 | 0.213 | 2.63× | 0.233 | 2.88× | ok |
| Shootout-C++/matrix | 0.061 | 0.133 | 2.18× | 0.179 | 2.93× | ok |
| Shootout-C++/methcall | 0.062 | 0.135 | 2.18× | 0.174 | 2.81× | ok |
| Shootout-C++/moments | 0.084 | 0.223 | 2.65× | 0.219 | 2.61× | ok |
| Shootout-C++/random | 0.073 | 0.149 | 2.04× | 0.196 | 2.68× | ok |
| Shootout-C++/sieve | 0.087 | 0.194 | 2.23× | 0.217 | 2.49× | ok |
| SmallPT | 0.026 | 0.076 | 2.92× | 0.075 | 2.88× | ok |
| Stanford/Bubblesort | 0.009 | 0.026 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.028 | — | 0.031 | — | ok |
| Stanford/Puzzle | 0.009 | 0.037 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.126 | 1.91× | 0.177 | 2.68× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.063 | 2.10× | 0.070 | 2.33× | ok |
| bg/fasta/1 | 0.047 | 0.110 | 2.34× | 0.111 | 2.36× | ok |
| bg/fasta/2 | 0.047 | 0.114 | 2.43× | 0.113 | 2.40× | ok |
| bg/fasta/3 | 0.069 | 0.154 | 2.23× | 0.199 | 2.88× | ok |
| bg/fasta/4 | 0.071 | 0.133 | 1.87× | 0.148 | 2.08× | ok |
| bg/fasta/6 | 0.124 | 0.330 | 2.66× | 0.323 | 2.60× | ok |
| bg/mandelbrot/0 | 0.128 | 0.373 | 2.91× | 0.360 | 2.81× | ok |
| bg/mandelbrot/2 | 0.077 | 0.228 | 2.96× | 0.228 | 2.96× | ok |
| bg/mandelbrot/3 | 0.078 | 0.169 | 2.17× | 0.227 | 2.91× | ok |
| bg/mandelbrot/5 | 0.039 | 0.104 | 2.67× | 0.106 | 2.72× | ok |
| bg/mandelbrot/7 | 0.041 | 0.105 | 2.56× | 0.111 | 2.71× | ok |
| bg/mandelbrot/9 | 0.037 | 0.105 | 2.84× | 0.103 | 2.78× | ok |
| bg/nbody/1 | 0.026 | 0.086 | 3.31× | 0.084 | 3.23× | ok |
| bg/nbody/2 | 0.024 | 0.061 | 2.54× | 0.068 | 2.83× | ok |
| bg/nbody/3 | 0.024 | 0.063 | 2.62× | 0.064 | 2.67× | ok |
| bg/nbody/6 | 0.026 | 0.084 | 3.23× | 0.076 | 2.92× | ok |
| bg/pidigits/4 | 0.130 | 0.252 | 1.94× | 0.300 | 2.31× | ok |
| bg/pidigits/5 | 0.067 | 0.146 | 2.18× | 0.224 | 3.34× | ok |
| bg/revcomp/1 | 0.072 | 0.181 | 2.51× | 0.197 | 2.74× | ok |
| bg/revcomp/5 | 0.070 | 0.163 | 2.33× | 0.187 | 2.67× | ok |
| bg/spectralnorm/1 | 0.096 | 0.224 | 2.33× | 0.261 | 2.72× | ok |
| box2d | 1.321 | 3.711 | 2.81× | 4.343 | 3.29× | ok |
| fmt | 0.425 | 2.047 | 4.82× | 1.480 | 3.48× | ok |
| hexxagon | 0.268 | 0.577 | 2.15× | 0.806 | 3.01× | ok |
| lambda | 0.050 | 0.265 | 5.30× | 0.207 | 4.14× | ok |
| minisat | 0.057 | 0.266 | 4.67× | 0.184 | 3.23× | ok |
| nlohmann-json | 0.389 | 1.779 | 4.57× | 1.531 | 3.94× | ok |
| pugixml | 0.238 | 1.185 | 4.98× | 0.713 | 3.00× | ok |
| pugixml-tests | 3.259 | 13.111 | 4.02× | 10.597 | 3.25× | ok |
| rapidjson | 0.107 | 0.386 | 3.61× | 0.297 | 2.78× | ok |
| re2 | 2.672 | 8.969 | 3.36× | 5.940 | 2.22× | ok |
| re2-test-re2 | 4.239 | 12.997 | 3.07× | 13.378 | 3.16× | ok |
| re2-test-search | 4.177 | 12.475 | 2.99× | 12.540 | 3.00× | ok |
| tramp3d-v4 | 0.607 | 5.825 | 9.60× | 2.182 | 3.59× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.106 | 0.785 | 7.41× | 0.401 | 3.78× | ok |
| Adobe-C++/loop_unroll | 0.345 | 4.392 | 12.73× | 3.718 | 10.78× | ok |
| Adobe-C++/simple_types_constant_folding | 0.191 | 2.508 | 13.13× | 1.916 | 10.03× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.163 | 1.935 | 11.87× | 1.504 | 9.23× | ok |
| Adobe-C++/stepanov_abstraction | 0.078 | 0.894 | 11.46× | 0.425 | 5.45× | ok |
| Adobe-C++/stepanov_vector | 0.107 | 1.150 | 10.75× | 0.443 | 4.14× | ok |
| Bullet | 5.619 | 32.941 | 5.86× | 23.835 | 4.24× | ok |
| CLAMR | 3.438 | 19.333 | 5.62× | 14.993 | 4.36× | ok |
| CoyoteBench/almabench | 0.031 | 0.131 | 4.23× | 0.103 | 3.32× | ok |
| CoyoteBench/fftbench | 0.107 | 0.341 | 3.19× | 0.330 | 3.08× | ok |
| CoyoteBench/huffbench | 0.033 | 0.198 | 6.00× | 0.119 | 3.61× | ok |
| CoyoteBench/lpbench | 0.032 | 0.152 | 4.75× | 0.154 | 4.81× | ok |
| DOE/HACCKernels | 0.115 | 0.347 | 3.02× | 0.384 | 3.34× | ok |
| DOE/HPCCG | 0.668 | 1.981 | 2.97× | 2.279 | 3.41× | ok |
| DOE/PENNANT | 1.586 | 5.320 | 3.35× | 5.230 | 3.30× | ok |
| DOE/miniFE | 0.773 | 3.249 | 4.20× | 3.131 | 4.05× | ok |
| Misc-C++-EH/spirit | 0.543 | 2.985 | 5.50× | 2.846 | 5.24× | ok |
| Misc-C++-Large/ray | 0.113 | 0.393 | 3.48× | 0.375 | 3.32× | ok |
| Misc-C++-Large/sphereflake | 0.094 | 0.617 | 6.56× | 0.310 | 3.30× | ok |
| Misc-C++/bigfib | 0.139 | 0.464 | 3.34× | 0.498 | 3.58× | ok |
| Misc-C++/oopack_v1p8 | 0.036 | 0.163 | 4.53× | 0.135 | 3.75× | ok |
| Misc-C++/stepanov_container | 0.176 | 0.751 | 4.27× | 0.722 | 4.10× | ok |
| Misc-C++/stepanov_v1p2 | 0.035 | 0.191 | 5.46× | 0.158 | 4.51× | ok |
| PAQ8p | 0.242 | 3.090 | 12.77× | 1.319 | 5.45× | ok |
| Prolangs-C++/life | 0.009 | 0.086 | — | 0.058 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.172 | 9.05× | 0.098 | 5.16× | ok |
| Prolangs-C++/primes | 0.007 | 0.032 | — | 0.034 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.159 | 2.37× | 0.184 | 2.75× | ok |
| Shootout-C++/ackermann | 0.070 | 0.185 | 2.64× | 0.190 | 2.71× | ok |
| Shootout-C++/ary3 | 0.075 | 0.218 | 2.91× | 0.243 | 3.24× | ok |
| Shootout-C++/fibo | 0.071 | 0.172 | 2.42× | 0.184 | 2.59× | ok |
| Shootout-C++/hash | 0.109 | 0.338 | 3.10× | 0.386 | 3.54× | ok |
| Shootout-C++/hash2 | 0.106 | 0.363 | 3.42× | 0.393 | 3.71× | ok |
| Shootout-C++/heapsort | 0.080 | 0.192 | 2.40× | 0.231 | 2.89× | ok |
| Shootout-C++/lists | 0.079 | 0.212 | 2.68× | 0.225 | 2.85× | ok |
| Shootout-C++/lists1 | 0.087 | 0.247 | 2.84× | 0.261 | 3.00× | ok |
| Shootout-C++/matrix | 0.068 | 0.183 | 2.69× | 0.252 | 3.71× | ok |
| Shootout-C++/methcall | 0.065 | 0.171 | 2.63× | 0.206 | 3.17× | ok |
| Shootout-C++/moments | 0.091 | 0.269 | 2.96× | 0.270 | 2.97× | ok |
| Shootout-C++/random | 0.075 | 0.173 | 2.31× | 0.202 | 2.69× | ok |
| Shootout-C++/sieve | 0.085 | 0.209 | 2.46× | 0.241 | 2.84× | ok |
| SmallPT | 0.037 | 0.236 | 6.38× | 0.133 | 3.59× | ok |
| Stanford/Bubblesort | 0.011 | 0.047 | 4.27× | 0.044 | 4.00× | ok |
| Stanford/FloatMM | 0.011 | 0.055 | 5.00× | 0.061 | 5.55× | ok |
| Stanford/Puzzle | 0.015 | 0.100 | 6.67× | 0.091 | 6.07× | ok |
| Stanford/Treesort | 0.012 | 0.068 | 5.67× | 0.045 | 3.75× | ok |
| bg/binarytrees/2 | 0.065 | 0.317 | 4.88× | 0.187 | 2.88× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.103 | 2.94× | 0.098 | 2.80× | ok |
| bg/fasta/1 | 0.052 | 0.140 | 2.69× | 0.155 | 2.98× | ok |
| bg/fasta/2 | 0.052 | 0.146 | 2.81× | 0.145 | 2.79× | ok |
| bg/fasta/3 | 0.074 | 0.184 | 2.49× | 0.223 | 3.01× | ok |
| bg/fasta/4 | 0.069 | 0.165 | 2.39× | 0.181 | 2.62× | ok |
| bg/fasta/6 | 0.128 | 0.378 | 2.95× | 0.447 | 3.49× | ok |
| bg/mandelbrot/0 | 0.162 | 0.508 | 3.14× | 0.515 | 3.18× | ok |
| bg/mandelbrot/2 | 0.085 | 0.234 | 2.75× | 0.251 | 2.95× | ok |
| bg/mandelbrot/3 | 0.086 | 0.202 | 2.35× | 0.240 | 2.79× | ok |
| bg/mandelbrot/5 | 0.044 | 0.126 | 2.86× | 0.127 | 2.89× | ok |
| bg/mandelbrot/7 | 0.049 | 0.161 | 3.29× | 0.146 | 2.98× | ok |
| bg/mandelbrot/9 | 0.046 | 0.157 | 3.41× | 0.137 | 2.98× | ok |
| bg/nbody/1 | 0.035 | 0.128 | 3.66× | 0.142 | 4.06× | ok |
| bg/nbody/2 | 0.029 | 0.116 | 4.00× | 0.106 | 3.66× | ok |
| bg/nbody/3 | 0.028 | 0.109 | 3.89× | 0.091 | 3.25× | ok |
| bg/nbody/6 | 0.035 | 0.137 | 3.91× | 0.137 | 3.91× | ok |
| bg/pidigits/4 | 0.115 | 0.286 | 2.49× | 0.383 | 3.33× | ok |
| bg/pidigits/5 | 0.068 | 0.169 | 2.49× | 0.210 | 3.09× | ok |
| bg/revcomp/1 | 0.079 | 0.253 | 3.20× | 0.230 | 2.91× | ok |
| bg/revcomp/5 | 0.075 | 0.190 | 2.53× | 0.210 | 2.80× | ok |
| bg/spectralnorm/1 | 0.113 | 0.280 | 2.48× | 0.318 | 2.81× | ok |
| box2d | 1.676 | 6.366 | 3.80× | 5.973 | 3.56× | ok |
| fmt | 0.773 | 4.431 | 5.73× | 3.342 | 4.32× | ok |
| hexxagon | 0.261 | 0.951 | 3.64× | 0.955 | 3.66× | ok |
| lambda | 0.107 | 1.031 | 9.64× | 0.470 | 4.39× | ok |
| minisat | 0.124 | 0.915 | 7.38× | 0.548 | 4.42× | ok |
| nlohmann-json | 0.634 | 2.917 | 4.60× | 2.498 | 3.94× | ok |
| pugixml | 0.548 | 4.768 | 8.70× | 3.079 | 5.62× | ok |
| pugixml-tests | 4.432 | 29.488 | 6.65× | 20.438 | 4.61× | ok |
| rapidjson | 0.202 | 1.004 | 4.97× | 0.586 | 2.90× | ok |
| re2 | 2.972 | 14.919 | 5.02× | 8.455 | 2.84× | ok |
| re2-test-re2 | 5.427 | 23.590 | 4.35× | 19.489 | 3.59× | ok |
| re2-test-search | 5.122 | 21.317 | 4.16× | 17.619 | 3.44× | ok |
| tramp3d-v4 | 2.011 | 14.889 | 7.40× | 11.947 | 5.94× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.056 | 0.121 | 2.16× | 0.153 | 2.73× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.083 | 2.52× | 0.090 | 2.73× | ok |
| Adobe-C++/simple_types_constant_folding | 0.038 | 0.093 | 2.45× | 0.096 | 2.53× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.081 | 2.38× | 0.087 | 2.56× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.062 | 2.00× | 0.075 | 2.42× | ok |
| Adobe-C++/stepanov_vector | 0.058 | 0.110 | 1.90× | 0.136 | 2.34× | ok |
| Bullet | 4.269 | 9.435 | 2.21× | 11.844 | 2.77× | ok |
| CLAMR | 1.995 | 4.382 | 2.20× | 5.205 | 2.61× | ok |
| CoyoteBench/almabench | 0.029 | 0.054 | 1.86× | 0.066 | 2.28× | ok |
| CoyoteBench/fftbench | 0.091 | 0.190 | 2.09× | 0.231 | 2.54× | ok |
| CoyoteBench/huffbench | 0.025 | 0.060 | 2.40× | 0.063 | 2.52× | ok |
| CoyoteBench/lpbench | 0.025 | 0.052 | 2.08× | 0.063 | 2.52× | ok |
| DOE/HACCKernels | 0.101 | 0.220 | 2.18× | 0.253 | 2.50× | ok |
| DOE/HPCCG | 0.627 | 1.231 | 1.96× | 1.789 | 2.85× | ok |
| DOE/PENNANT | 1.243 | 2.527 | 2.03× | 3.143 | 2.53× | ok |
| DOE/miniFE | 0.492 | 1.216 | 2.47× | 1.601 | 3.25× | ok |
| Misc-C++-EH/spirit | 0.261 | 0.764 | 2.93× | 1.059 | 4.06× | ok |
| Misc-C++-Large/ray | 0.090 | 0.207 | 2.30× | 0.235 | 2.61× | ok |
| Misc-C++-Large/sphereflake | 0.081 | 0.183 | 2.26× | 0.207 | 2.56× | ok |
| Misc-C++/bigfib | 0.100 | 0.226 | 2.26× | 0.281 | 2.81× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.059 | 2.11× | 0.067 | 2.39× | ok |
| Misc-C++/stepanov_container | 0.116 | 0.260 | 2.24× | 0.317 | 2.73× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.054 | 2.00× | 0.067 | 2.48× | ok |
| PAQ8p | 0.041 | 0.102 | 2.49× | 0.104 | 2.54× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.019 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.021 | — | 0.029 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.015 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.132 | 2.10× | 0.181 | 2.87× | ok |
| Shootout-C++/ackermann | 0.071 | 0.144 | 2.03× | 0.169 | 2.38× | ok |
| Shootout-C++/ary3 | 0.073 | 0.151 | 2.07× | 0.186 | 2.55× | ok |
| Shootout-C++/fibo | 0.064 | 0.135 | 2.11× | 0.174 | 2.72× | ok |
| Shootout-C++/hash | 0.088 | 0.198 | 2.25× | 0.275 | 3.13× | ok |
| Shootout-C++/hash2 | 0.085 | 0.177 | 2.08× | 0.222 | 2.61× | ok |
| Shootout-C++/heapsort | 0.081 | 0.177 | 2.19× | 0.203 | 2.51× | ok |
| Shootout-C++/lists | 0.065 | 0.153 | 2.35× | 0.193 | 2.97× | ok |
| Shootout-C++/lists1 | 0.079 | 0.169 | 2.14× | 0.208 | 2.63× | ok |
| Shootout-C++/matrix | 0.060 | 0.133 | 2.22× | 0.212 | 3.53× | ok |
| Shootout-C++/methcall | 0.060 | 0.133 | 2.22× | 0.164 | 2.73× | ok |
| Shootout-C++/moments | 0.083 | 0.181 | 2.18× | 0.194 | 2.34× | ok |
| Shootout-C++/random | 0.074 | 0.151 | 2.04× | 0.228 | 3.08× | ok |
| Shootout-C++/sieve | 0.085 | 0.158 | 1.86× | 0.215 | 2.53× | ok |
| SmallPT | 0.025 | 0.052 | 2.08× | 0.068 | 2.72× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.027 | — | 0.027 | — | ok |
| Stanford/Treesort | 0.008 | 0.021 | — | 0.027 | — | ok |
| bg/binarytrees/2 | 0.065 | 0.123 | 1.89× | 0.172 | 2.65× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.054 | 1.80× | 0.067 | 2.23× | ok |
| bg/fasta/1 | 0.045 | 0.084 | 1.87× | 0.102 | 2.27× | ok |
| bg/fasta/2 | 0.045 | 0.090 | 2.00× | 0.101 | 2.24× | ok |
| bg/fasta/3 | 0.068 | 0.144 | 2.12× | 0.185 | 2.72× | ok |
| bg/fasta/4 | 0.071 | 0.127 | 1.79× | 0.145 | 2.04× | ok |
| bg/fasta/6 | 0.111 | 0.234 | 2.11× | 0.294 | 2.65× | ok |
| bg/mandelbrot/0 | 0.118 | 0.257 | 2.18× | 0.307 | 2.60× | ok |
| bg/mandelbrot/2 | 0.075 | 0.162 | 2.16× | 0.217 | 2.89× | ok |
| bg/mandelbrot/3 | 0.078 | 0.164 | 2.10× | 0.213 | 2.73× | ok |
| bg/mandelbrot/5 | 0.037 | 0.076 | 2.05× | 0.098 | 2.65× | ok |
| bg/mandelbrot/7 | 0.040 | 0.075 | 1.88× | 0.103 | 2.57× | ok |
| bg/mandelbrot/9 | 0.035 | 0.071 | 2.03× | 0.092 | 2.63× | ok |
| bg/nbody/1 | 0.025 | 0.053 | 2.12× | 0.068 | 2.72× | ok |
| bg/nbody/2 | 0.024 | 0.051 | 2.12× | 0.063 | 2.62× | ok |
| bg/nbody/3 | 0.024 | 0.050 | 2.08× | 0.061 | 2.54× | ok |
| bg/nbody/6 | 0.025 | 0.051 | 2.04× | 0.066 | 2.64× | ok |
| bg/pidigits/4 | 0.107 | 0.229 | 2.14× | 0.277 | 2.59× | ok |
| bg/pidigits/5 | 0.066 | 0.147 | 2.23× | 0.187 | 2.83× | ok |
| bg/revcomp/1 | 0.070 | 0.147 | 2.10× | 0.178 | 2.54× | ok |
| bg/revcomp/5 | 0.067 | 0.138 | 2.06× | 0.161 | 2.40× | ok |
| bg/spectralnorm/1 | 0.091 | 0.204 | 2.24× | 0.247 | 2.71× | ok |
| box2d | 1.281 | 2.571 | 2.01× | 3.722 | 2.91× | ok |
| fmt | 0.372 | 0.871 | 2.34× | 1.198 | 3.22× | ok |
| hexxagon | 0.268 | 0.518 | 1.93× | 0.818 | 3.05× | ok |
| lambda | 0.041 | 0.116 | 2.83× | 0.146 | 3.56× | ok |
| minisat | 0.051 | 0.123 | 2.41× | 0.144 | 2.82× | ok |
| nlohmann-json | 0.268 | 0.816 | 3.04× | 1.225 | 4.57× | ok |
| pugixml | 0.200 | 0.426 | 2.13× | 0.527 | 2.63× | ok |
| pugixml-tests | 2.850 | 6.797 | 2.38× | 7.996 | 2.81× | ok |
| rapidjson | 0.131 | 0.195 | 1.49× | 0.234 | 1.79× | ok |
| re2 | 2.605 | 5.687 | 2.18× | 5.112 | 1.96× | ok |
| re2-test-re2 | 3.841 | 8.417 | 2.19× | 11.458 | 2.98× | ok |
| re2-test-search | 3.825 | 8.579 | 2.24× | 10.588 | 2.77× | ok |
| tramp3d-v4 | 0.440 | 2.206 | 5.01× | 1.264 | 2.87× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
