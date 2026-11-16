# Public benchmarks: Intel (GitHub)

Measured compiler: [`0785eb821`](https://github.com/vishvananda/cppgm/commit/0785eb82196d630572f71a1967b3aa589dce33d3) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43967972310) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.30× | 74 | 2.97× | 74 |
| Compile CPU, `-O0` | 3.21× | 76 | 3.18× | 76 |
| Compile CPU, `-O3` | 4.37× | 79 | 3.93× | 79 |
| Compile peak RSS, `-O0` | 1.43× | 81 | 2.18× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.29× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.13× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 1.00× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.894 to 1.037; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.071 | 0.257 | 3.62× | 0.179 | 2.52× | ok |
| Adobe-C++/loop_unroll | 0.054 | 0.571 | 10.57× | 0.199 | 3.69× | ok |
| Adobe-C++/simple_types_constant_folding | 0.060 | 0.685 | 11.42× | 0.278 | 4.63× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.053 | 0.474 | 8.94× | 0.190 | 3.58× | ok |
| Adobe-C++/stepanov_abstraction | 0.040 | 0.181 | 4.52× | 0.114 | 2.85× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.275 | 4.37× | 0.243 | 3.86× | ok |
| Bullet | 4.351 | 18.322 | 4.21× | 14.948 | 3.44× | ok |
| CLAMR | 2.378 | 9.872 | 4.15× | 7.261 | 3.05× | ok |
| CoyoteBench/almabench | 0.031 | 0.077 | 2.48× | 0.093 | 3.00× | ok |
| CoyoteBench/fftbench | 0.101 | 0.248 | 2.46× | 0.311 | 3.08× | ok |
| CoyoteBench/huffbench | 0.026 | 0.062 | 2.38× | 0.081 | 3.12× | ok |
| CoyoteBench/lpbench | 0.027 | 0.071 | 2.63× | 0.077 | 2.85× | ok |
| DOE/HACCKernels | 0.102 | 0.243 | 2.38× | 0.309 | 3.03× | ok |
| DOE/HPCCG | 0.717 | 1.667 | 2.32× | 2.387 | 3.33× | ok |
| DOE/PENNANT | 1.387 | 4.121 | 2.97× | 4.033 | 2.91× | ok |
| DOE/miniFE | 0.616 | 2.197 | 3.57× | 2.149 | 3.49× | ok |
| Misc-C++-EH/spirit | 0.391 | 2.413 | 6.17× | 1.802 | 4.61× | ok |
| Misc-C++-Large/ray | 0.104 | 0.278 | 2.67× | 0.351 | 3.38× | ok |
| Misc-C++-Large/sphereflake | 0.087 | 0.233 | 2.68× | 0.276 | 3.17× | ok |
| Misc-C++/bigfib | 0.124 | 0.354 | 2.85× | 0.428 | 3.45× | ok |
| Misc-C++/oopack_v1p8 | 0.032 | 0.094 | 2.94× | 0.095 | 2.97× | ok |
| Misc-C++/stepanov_container | 0.161 | 0.591 | 3.67× | 0.499 | 3.10× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.120 | 4.44× | 0.088 | 3.26× | ok |
| PAQ8p | 0.064 | 0.452 | 7.06× | 0.213 | 3.33× | ok |
| Prolangs-C++/life | 0.004 | 0.032 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.064 | 6.40× | 0.050 | 5.00× | ok |
| Prolangs-C++/primes | 0.006 | 0.022 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.167 | 2.42× | 0.213 | 3.09× | ok |
| Shootout-C++/ackermann | 0.067 | 0.159 | 2.37× | 0.248 | 3.70× | ok |
| Shootout-C++/ary3 | 0.090 | 0.193 | 2.14× | 0.221 | 2.46× | ok |
| Shootout-C++/fibo | 0.064 | 0.148 | 2.31× | 0.230 | 3.59× | ok |
| Shootout-C++/hash | 0.095 | 0.262 | 2.76× | 0.309 | 3.25× | ok |
| Shootout-C++/hash2 | 0.091 | 0.267 | 2.93× | 0.282 | 3.10× | ok |
| Shootout-C++/heapsort | 0.093 | 0.182 | 1.96× | 0.254 | 2.73× | ok |
| Shootout-C++/lists | 0.070 | 0.191 | 2.73× | 0.220 | 3.14× | ok |
| Shootout-C++/lists1 | 0.099 | 0.217 | 2.19× | 0.248 | 2.51× | ok |
| Shootout-C++/matrix | 0.074 | 0.142 | 1.92× | 0.195 | 2.64× | ok |
| Shootout-C++/methcall | 0.061 | 0.154 | 2.52× | 0.197 | 3.23× | ok |
| Shootout-C++/moments | 0.087 | 0.277 | 3.18× | 0.248 | 2.85× | ok |
| Shootout-C++/random | 0.094 | 0.192 | 2.04× | 0.240 | 2.55× | ok |
| Shootout-C++/sieve | 0.092 | 0.244 | 2.65× | 0.287 | 3.12× | ok |
| SmallPT | 0.028 | 0.086 | 3.07× | 0.078 | 2.79× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.033 | — | ok |
| Stanford/FloatMM | 0.009 | 0.025 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.010 | 0.033 | 3.30× | 0.034 | 3.40× | ok |
| Stanford/Treesort | 0.008 | 0.030 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.065 | 0.150 | 2.31× | 0.201 | 3.09× | ok |
| bg/fannkuchredux/3 | 0.034 | 0.072 | 2.12× | 0.087 | 2.56× | ok |
| bg/fasta/1 | 0.049 | 0.123 | 2.51× | 0.153 | 3.12× | ok |
| bg/fasta/2 | 0.050 | 0.118 | 2.36× | 0.132 | 2.64× | ok |
| bg/fasta/3 | 0.075 | 0.189 | 2.52× | 0.231 | 3.08× | ok |
| bg/fasta/4 | 0.069 | 0.148 | 2.14× | 0.188 | 2.72× | ok |
| bg/fasta/6 | 0.127 | 0.366 | 2.88× | 0.438 | 3.45× | ok |
| bg/mandelbrot/0 | 0.147 | 0.470 | 3.20× | 0.420 | 2.86× | ok |
| bg/mandelbrot/2 | 0.086 | 0.208 | 2.42× | 0.252 | 2.93× | ok |
| bg/mandelbrot/3 | 0.090 | 0.198 | 2.20× | 0.272 | 3.02× | ok |
| bg/mandelbrot/5 | 0.048 | 0.108 | 2.25× | 0.123 | 2.56× | ok |
| bg/mandelbrot/7 | 0.046 | 0.124 | 2.70× | 0.132 | 2.87× | ok |
| bg/mandelbrot/9 | 0.044 | 0.109 | 2.48× | 0.120 | 2.73× | ok |
| bg/nbody/1 | 0.026 | 0.102 | 3.92× | 0.091 | 3.50× | ok |
| bg/nbody/2 | 0.027 | 0.070 | 2.59× | 0.074 | 2.74× | ok |
| bg/nbody/3 | 0.026 | 0.071 | 2.73× | 0.076 | 2.92× | ok |
| bg/nbody/6 | 0.028 | 0.095 | 3.39× | 0.086 | 3.07× | ok |
| bg/pidigits/4 | 0.132 | 0.291 | 2.20× | 0.391 | 2.96× | ok |
| bg/pidigits/5 | 0.075 | 0.169 | 2.25× | 0.247 | 3.29× | ok |
| bg/revcomp/1 | 0.082 | 0.235 | 2.87× | 0.243 | 2.96× | ok |
| bg/revcomp/5 | 0.080 | 0.213 | 2.66× | 0.283 | 3.54× | ok |
| bg/spectralnorm/1 | 0.101 | 0.256 | 2.53× | 0.347 | 3.44× | ok |
| box2d | 1.508 | 4.328 | 2.87× | 4.940 | 3.28× | ok |
| fmt | 0.503 | 2.291 | 4.55× | 2.044 | 4.06× | ok |
| hexxagon | 0.253 | 0.655 | 2.59× | 0.867 | 3.43× | ok |
| lambda | 0.051 | 0.306 | 6.00× | 0.228 | 4.47× | ok |
| minisat | 0.061 | 0.300 | 4.92× | 0.216 | 3.54× | ok |
| nlohmann-json | 0.437 | 1.988 | 4.55× | 1.735 | 3.97× | ok |
| pugixml | 0.285 | 1.235 | 4.33× | 0.957 | 3.36× | ok |
| pugixml-tests | 3.518 | 15.103 | 4.29× | 12.261 | 3.49× | ok |
| rapidjson | 0.113 | 0.463 | 4.10× | 0.395 | 3.50× | ok |
| re2 | 3.121 | 11.078 | 3.55× | 6.764 | 2.17× | ok |
| re2-test-re2 | 4.657 | 15.563 | 3.34× | 15.642 | 3.36× | ok |
| re2-test-search | 4.547 | 14.335 | 3.15× | 15.206 | 3.34× | ok |
| tramp3d-v4 | 0.715 | 8.974 | 12.55× | 2.632 | 3.68× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.122 | 0.914 | 7.49× | 0.582 | 4.77× | ok |
| Adobe-C++/loop_unroll | 0.449 | 5.561 | 12.39× | 4.347 | 9.68× | ok |
| Adobe-C++/simple_types_constant_folding | 0.234 | 3.186 | 13.62× | 2.583 | 11.04× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.226 | 2.396 | 10.60× | 1.899 | 8.40× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 1.108 | 12.04× | 0.443 | 4.82× | ok |
| Adobe-C++/stepanov_vector | 0.114 | 1.210 | 10.61× | 0.656 | 5.75× | ok |
| Bullet | 5.884 | 35.635 | 6.06× | 27.979 | 4.76× | ok |
| CLAMR | 4.105 | 23.991 | 5.84× | 17.279 | 4.21× | ok |
| CoyoteBench/almabench | 0.035 | 0.170 | 4.86× | 0.119 | 3.40× | ok |
| CoyoteBench/fftbench | 0.122 | 0.417 | 3.42× | 0.424 | 3.48× | ok |
| CoyoteBench/huffbench | 0.038 | 0.273 | 7.18× | 0.141 | 3.71× | ok |
| CoyoteBench/lpbench | 0.035 | 0.174 | 4.97× | 0.183 | 5.23× | ok |
| DOE/HACCKernels | 0.109 | 0.348 | 3.19× | 0.462 | 4.24× | ok |
| DOE/HPCCG | 0.776 | 2.449 | 3.16× | 2.257 | 2.91× | ok |
| DOE/PENNANT | 1.645 | 6.534 | 3.97× | 5.488 | 3.34× | ok |
| DOE/miniFE | 0.852 | 4.153 | 4.87× | 3.666 | 4.30× | ok |
| Misc-C++-EH/spirit | 0.601 | 3.576 | 5.95× | 3.574 | 5.95× | ok |
| Misc-C++-Large/ray | 0.117 | 0.483 | 4.13× | 0.403 | 3.44× | ok |
| Misc-C++-Large/sphereflake | 0.102 | 0.722 | 7.08× | 0.394 | 3.86× | ok |
| Misc-C++/bigfib | 0.152 | 0.531 | 3.49× | 0.543 | 3.57× | ok |
| Misc-C++/oopack_v1p8 | 0.040 | 0.189 | 4.72× | 0.168 | 4.20× | ok |
| Misc-C++/stepanov_container | 0.231 | 0.944 | 4.09× | 0.878 | 3.80× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.214 | 5.35× | 0.173 | 4.32× | ok |
| PAQ8p | 0.311 | 3.850 | 12.38× | 1.525 | 4.90× | ok |
| Prolangs-C++/life | 0.009 | 0.094 | — | 0.061 | — | ok |
| Prolangs-C++/ocean | 0.022 | 0.208 | 9.45× | 0.124 | 5.64× | ok |
| Prolangs-C++/primes | 0.007 | 0.033 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.070 | 0.187 | 2.67× | 0.225 | 3.21× | ok |
| Shootout-C++/ackermann | 0.071 | 0.199 | 2.80× | 0.213 | 3.00× | ok |
| Shootout-C++/ary3 | 0.078 | 0.228 | 2.92× | 0.270 | 3.46× | ok |
| Shootout-C++/fibo | 0.075 | 0.187 | 2.49× | 0.232 | 3.09× | ok |
| Shootout-C++/hash | 0.110 | 0.357 | 3.25× | 0.406 | 3.69× | ok |
| Shootout-C++/hash2 | 0.117 | 0.393 | 3.36× | 0.411 | 3.51× | ok |
| Shootout-C++/heapsort | 0.088 | 0.240 | 2.73× | 0.246 | 2.80× | ok |
| Shootout-C++/lists | 0.077 | 0.216 | 2.81× | 0.247 | 3.21× | ok |
| Shootout-C++/lists1 | 0.109 | 0.285 | 2.61× | 0.289 | 2.65× | ok |
| Shootout-C++/matrix | 0.069 | 0.229 | 3.32× | 0.280 | 4.06× | ok |
| Shootout-C++/methcall | 0.067 | 0.176 | 2.63× | 0.208 | 3.10× | ok |
| Shootout-C++/moments | 0.093 | 0.287 | 3.09× | 0.306 | 3.29× | ok |
| Shootout-C++/random | 0.082 | 0.203 | 2.48× | 0.253 | 3.09× | ok |
| Shootout-C++/sieve | 0.089 | 0.238 | 2.67× | 0.318 | 3.57× | ok |
| SmallPT | 0.037 | 0.279 | 7.54× | 0.180 | 4.86× | ok |
| Stanford/Bubblesort | 0.011 | 0.049 | 4.45× | 0.048 | 4.36× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.069 | 5.75× | ok |
| Stanford/Puzzle | 0.020 | 0.122 | 6.10× | 0.126 | 6.30× | ok |
| Stanford/Treesort | 0.014 | 0.091 | 6.50× | 0.050 | 3.57× | ok |
| bg/binarytrees/2 | 0.069 | 0.404 | 5.86× | 0.213 | 3.09× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.123 | 3.24× | 0.118 | 3.11× | ok |
| bg/fasta/1 | 0.055 | 0.154 | 2.80× | 0.167 | 3.04× | ok |
| bg/fasta/2 | 0.058 | 0.157 | 2.71× | 0.176 | 3.03× | ok |
| bg/fasta/3 | 0.085 | 0.223 | 2.62× | 0.257 | 3.02× | ok |
| bg/fasta/4 | 0.073 | 0.177 | 2.42× | 0.262 | 3.59× | ok |
| bg/fasta/6 | 0.157 | 0.433 | 2.76× | 0.481 | 3.06× | ok |
| bg/mandelbrot/0 | 0.175 | 0.576 | 3.29× | 0.634 | 3.62× | ok |
| bg/mandelbrot/2 | 0.096 | 0.250 | 2.60× | 0.322 | 3.35× | ok |
| bg/mandelbrot/3 | 0.091 | 0.235 | 2.58× | 0.291 | 3.20× | ok |
| bg/mandelbrot/5 | 0.055 | 0.138 | 2.51× | 0.151 | 2.75× | ok |
| bg/mandelbrot/7 | 0.057 | 0.200 | 3.51× | 0.171 | 3.00× | ok |
| bg/mandelbrot/9 | 0.049 | 0.179 | 3.65× | 0.171 | 3.49× | ok |
| bg/nbody/1 | 0.038 | 0.158 | 4.16× | 0.162 | 4.26× | ok |
| bg/nbody/2 | 0.031 | 0.122 | 3.94× | 0.132 | 4.26× | ok |
| bg/nbody/3 | 0.030 | 0.115 | 3.83× | 0.108 | 3.60× | ok |
| bg/nbody/6 | 0.040 | 0.158 | 3.95× | 0.184 | 4.60× | ok |
| bg/pidigits/4 | 0.123 | 0.335 | 2.72× | 0.427 | 3.47× | ok |
| bg/pidigits/5 | 0.077 | 0.219 | 2.84× | 0.252 | 3.27× | ok |
| bg/revcomp/1 | 0.086 | 0.237 | 2.76× | 0.284 | 3.30× | ok |
| bg/revcomp/5 | 0.088 | 0.237 | 2.69× | 0.305 | 3.47× | ok |
| bg/spectralnorm/1 | 0.109 | 0.377 | 3.46× | 0.429 | 3.94× | ok |
| box2d | 1.824 | 7.598 | 4.17× | 6.751 | 3.70× | ok |
| fmt | 0.976 | 5.555 | 5.69× | 3.919 | 4.02× | ok |
| hexxagon | 0.298 | 1.074 | 3.60× | 1.135 | 3.81× | ok |
| lambda | 0.126 | 1.154 | 9.16× | 0.583 | 4.63× | ok |
| minisat | 0.142 | 1.019 | 7.18× | 0.632 | 4.45× | ok |
| nlohmann-json | 0.849 | 3.572 | 4.21× | 3.043 | 3.58× | ok |
| pugixml | 0.669 | 5.555 | 8.30× | 3.829 | 5.72× | ok |
| pugixml-tests | 5.045 | 35.263 | 6.99× | 25.434 | 5.04× | ok |
| rapidjson | 0.232 | 1.203 | 5.19× | 0.712 | 3.07× | ok |
| re2 | 3.024 | 18.187 | 6.01× | 10.033 | 3.32× | ok |
| re2-test-re2 | 5.885 | 27.191 | 4.62× | 22.643 | 3.85× | ok |
| re2-test-search | 5.795 | 24.252 | 4.18× | 20.964 | 3.62× | ok |
| tramp3d-v4 | 2.698 | 21.609 | 8.01× | 14.464 | 5.36× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.137 | 2.32× | 0.150 | 2.54× | ok |
| Adobe-C++/loop_unroll | 0.038 | 0.102 | 2.68× | 0.133 | 3.50× | ok |
| Adobe-C++/simple_types_constant_folding | 0.042 | 0.102 | 2.43× | 0.105 | 2.50× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.037 | 0.093 | 2.51× | 0.104 | 2.81× | ok |
| Adobe-C++/stepanov_abstraction | 0.033 | 0.070 | 2.12× | 0.089 | 2.70× | ok |
| Adobe-C++/stepanov_vector | 0.056 | 0.121 | 2.16× | 0.193 | 3.45× | ok |
| Bullet | 3.927 | 11.089 | 2.82× | 12.303 | 3.13× | ok |
| CLAMR | 1.937 | 4.951 | 2.56× | 5.860 | 3.03× | ok |
| CoyoteBench/almabench | 0.030 | 0.064 | 2.13× | 0.086 | 2.87× | ok |
| CoyoteBench/fftbench | 0.099 | 0.222 | 2.24× | 0.286 | 2.89× | ok |
| CoyoteBench/huffbench | 0.027 | 0.053 | 1.96× | 0.080 | 2.96× | ok |
| CoyoteBench/lpbench | 0.027 | 0.058 | 2.15× | 0.073 | 2.70× | ok |
| DOE/HACCKernels | 0.100 | 0.210 | 2.10× | 0.290 | 2.90× | ok |
| DOE/HPCCG | 0.675 | 1.401 | 2.08× | 2.066 | 3.06× | ok |
| DOE/PENNANT | 1.252 | 3.053 | 2.44× | 4.170 | 3.33× | ok |
| DOE/miniFE | 0.556 | 1.477 | 2.66× | 1.744 | 3.14× | ok |
| Misc-C++-EH/spirit | 0.269 | 0.813 | 3.02× | 1.155 | 4.29× | ok |
| Misc-C++-Large/ray | 0.099 | 0.227 | 2.29× | 0.321 | 3.24× | ok |
| Misc-C++-Large/sphereflake | 0.084 | 0.203 | 2.42× | 0.252 | 3.00× | ok |
| Misc-C++/bigfib | 0.111 | 0.234 | 2.11× | 0.366 | 3.30× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.064 | 2.21× | 0.083 | 2.86× | ok |
| Misc-C++/stepanov_container | 0.145 | 0.346 | 2.39× | 0.420 | 2.90× | ok |
| Misc-C++/stepanov_v1p2 | 0.025 | 0.063 | 2.52× | 0.075 | 3.00× | ok |
| PAQ8p | 0.043 | 0.117 | 2.72× | 0.140 | 3.26× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.019 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.022 | — | 0.033 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.014 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.166 | 2.44× | 0.200 | 2.94× | ok |
| Shootout-C++/ackermann | 0.066 | 0.161 | 2.44× | 0.378 | 5.73× | ok |
| Shootout-C++/ary3 | 0.085 | 0.173 | 2.04× | 0.210 | 2.47× | ok |
| Shootout-C++/fibo | 0.065 | 0.149 | 2.29× | 0.227 | 3.49× | ok |
| Shootout-C++/hash | 0.088 | 0.200 | 2.27× | 0.274 | 3.11× | ok |
| Shootout-C++/hash2 | 0.086 | 0.196 | 2.28× | 0.249 | 2.90× | ok |
| Shootout-C++/heapsort | 0.085 | 0.183 | 2.15× | 0.212 | 2.49× | ok |
| Shootout-C++/lists | 0.067 | 0.159 | 2.37× | 0.202 | 3.01× | ok |
| Shootout-C++/lists1 | 0.096 | 0.177 | 1.84× | 0.226 | 2.35× | ok |
| Shootout-C++/matrix | 0.074 | 0.142 | 1.92× | 0.183 | 2.47× | ok |
| Shootout-C++/methcall | 0.062 | 0.151 | 2.44× | 0.185 | 2.98× | ok |
| Shootout-C++/moments | 0.082 | 0.196 | 2.39× | 0.225 | 2.74× | ok |
| Shootout-C++/random | 0.096 | 0.202 | 2.10× | 0.232 | 2.42× | ok |
| Shootout-C++/sieve | 0.083 | 0.175 | 2.11× | 0.268 | 3.23× | ok |
| SmallPT | 0.025 | 0.055 | 2.20× | 0.070 | 2.80× | ok |
| Stanford/Bubblesort | 0.009 | 0.021 | — | 0.034 | — | ok |
| Stanford/FloatMM | 0.009 | 0.020 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.009 | 0.025 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.064 | 0.148 | 2.31× | 0.188 | 2.94× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.062 | 1.88× | 0.082 | 2.48× | ok |
| bg/fasta/1 | 0.046 | 0.101 | 2.20× | 0.140 | 3.04× | ok |
| bg/fasta/2 | 0.048 | 0.093 | 1.94× | 0.119 | 2.48× | ok |
| bg/fasta/3 | 0.073 | 0.169 | 2.32× | 0.219 | 3.00× | ok |
| bg/fasta/4 | 0.067 | 0.141 | 2.10× | 0.186 | 2.78× | ok |
| bg/fasta/6 | 0.113 | 0.260 | 2.30× | 0.391 | 3.46× | ok |
| bg/mandelbrot/0 | 0.139 | 0.293 | 2.11× | 0.370 | 2.66× | ok |
| bg/mandelbrot/2 | 0.077 | 0.188 | 2.44× | 0.235 | 3.05× | ok |
| bg/mandelbrot/3 | 0.089 | 0.198 | 2.22× | 0.250 | 2.81× | ok |
| bg/mandelbrot/5 | 0.047 | 0.088 | 1.87× | 0.112 | 2.38× | ok |
| bg/mandelbrot/7 | 0.043 | 0.090 | 2.09× | 0.115 | 2.67× | ok |
| bg/mandelbrot/9 | 0.041 | 0.079 | 1.93× | 0.107 | 2.61× | ok |
| bg/nbody/1 | 0.025 | 0.059 | 2.36× | 0.076 | 3.04× | ok |
| bg/nbody/2 | 0.028 | 0.056 | 2.00× | 0.069 | 2.46× | ok |
| bg/nbody/3 | 0.026 | 0.057 | 2.19× | 0.072 | 2.77× | ok |
| bg/nbody/6 | 0.027 | 0.056 | 2.07× | 0.072 | 2.67× | ok |
| bg/pidigits/4 | 0.116 | 0.270 | 2.33× | 0.353 | 3.04× | ok |
| bg/pidigits/5 | 0.073 | 0.163 | 2.23× | 0.254 | 3.48× | ok |
| bg/revcomp/1 | 0.077 | 0.188 | 2.44× | 0.220 | 2.86× | ok |
| bg/revcomp/5 | 0.075 | 0.174 | 2.32× | 0.254 | 3.39× | ok |
| bg/spectralnorm/1 | 0.114 | 0.234 | 2.05× | 0.314 | 2.75× | ok |
| box2d | 1.365 | 2.898 | 2.12× | 3.503 | 2.57× | ok |
| fmt | 0.412 | 0.986 | 2.39× | 1.626 | 3.95× | ok |
| hexxagon | 0.249 | 0.603 | 2.42× | 0.814 | 3.27× | ok |
| lambda | 0.040 | 0.125 | 3.12× | 0.161 | 4.03× | ok |
| minisat | 0.051 | 0.132 | 2.59× | 0.156 | 3.06× | ok |
| nlohmann-json | 0.331 | 0.875 | 2.64× | 1.361 | 4.11× | ok |
| pugixml | 0.209 | 0.454 | 2.17× | 0.710 | 3.40× | ok |
| pugixml-tests | 2.975 | 7.369 | 2.48× | 9.645 | 3.24× | ok |
| rapidjson | 0.095 | 0.249 | 2.62× | 0.303 | 3.19× | ok |
| re2 | 2.739 | 6.653 | 2.43× | 5.712 | 2.09× | ok |
| re2-test-re2 | 4.216 | 9.774 | 2.32× | 13.489 | 3.20× | ok |
| re2-test-search | 4.126 | 8.844 | 2.14× | 12.951 | 3.14× | ok |
| tramp3d-v4 | 0.649 | 2.399 | 3.70× | 1.548 | 2.39× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
