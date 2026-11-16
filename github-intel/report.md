# Public benchmarks: Intel (GitHub)

Measured compiler: [`33a92f123`](https://github.com/vishvananda/cppgm/commit/33a92f123a1965a6a3ed154f1e785aef2f56b4a7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43801643629) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.27× | 74 | 2.93× | 74 |
| Compile CPU, `-O0` | 3.20× | 74 | 3.17× | 74 |
| Compile CPU, `-O3` | 4.30× | 80 | 3.84× | 80 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.19× | 81 |
| Compile peak RSS, `-O3` | 1.71× | 81 | 2.30× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.00× | 81 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.914 to 1.051; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.065 | 0.252 | 3.88× | 0.212 | 3.26× | ok |
| Adobe-C++/loop_unroll | 0.052 | 0.560 | 10.77× | 0.215 | 4.13× | ok |
| Adobe-C++/simple_types_constant_folding | 0.051 | 0.637 | 12.49× | 0.206 | 4.04× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.047 | 0.479 | 10.19× | 0.232 | 4.94× | ok |
| Adobe-C++/stepanov_abstraction | 0.035 | 0.170 | 4.86× | 0.109 | 3.11× | ok |
| Adobe-C++/stepanov_vector | 0.066 | 0.268 | 4.06× | 0.241 | 3.65× | ok |
| Bullet | 4.740 | 16.754 | 3.53× | 16.669 | 3.52× | ok |
| CLAMR | 2.506 | 9.735 | 3.88× | 7.610 | 3.04× | ok |
| CoyoteBench/almabench | 0.025 | 0.074 | 2.96× | 0.089 | 3.56× | ok |
| CoyoteBench/fftbench | 0.095 | 0.266 | 2.80× | 0.282 | 2.97× | ok |
| CoyoteBench/huffbench | 0.026 | 0.069 | 2.65× | 0.083 | 3.19× | ok |
| CoyoteBench/lpbench | 0.025 | 0.061 | 2.44× | 0.086 | 3.44× | ok |
| DOE/HACCKernels | 0.115 | 0.287 | 2.50× | 0.315 | 2.74× | ok |
| DOE/HPCCG | 0.687 | 1.493 | 2.17× | 2.254 | 3.28× | ok |
| DOE/PENNANT | 1.318 | 3.692 | 2.80× | 4.115 | 3.12× | ok |
| DOE/miniFE | 0.556 | 2.081 | 3.74× | 1.785 | 3.21× | ok |
| Misc-C++-EH/spirit | 0.421 | 2.296 | 5.45× | 1.861 | 4.42× | ok |
| Misc-C++-Large/ray | 0.092 | 0.305 | 3.32× | 0.270 | 2.93× | ok |
| Misc-C++-Large/sphereflake | 0.078 | 0.194 | 2.49× | 0.238 | 3.05× | ok |
| Misc-C++/bigfib | 0.108 | 0.343 | 3.18× | 0.388 | 3.59× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.082 | 2.65× | 0.084 | 2.71× | ok |
| Misc-C++/stepanov_container | 0.158 | 0.481 | 3.04× | 0.431 | 2.73× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.102 | 3.52× | 0.081 | 2.79× | ok |
| PAQ8p | 0.059 | 0.408 | 6.92× | 0.198 | 3.36× | ok |
| Prolangs-C++/life | 0.004 | 0.028 | — | 0.026 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.056 | — | 0.039 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.020 | — | 0.022 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.156 | 2.33× | 0.225 | 3.36× | ok |
| Shootout-C++/ackermann | 0.062 | 0.136 | 2.19× | 0.191 | 3.08× | ok |
| Shootout-C++/ary3 | 0.078 | 0.196 | 2.51× | 0.218 | 2.79× | ok |
| Shootout-C++/fibo | 0.061 | 0.139 | 2.28× | 0.193 | 3.16× | ok |
| Shootout-C++/hash | 0.092 | 0.268 | 2.91× | 0.272 | 2.96× | ok |
| Shootout-C++/hash2 | 0.098 | 0.300 | 3.06× | 0.356 | 3.63× | ok |
| Shootout-C++/heapsort | 0.074 | 0.163 | 2.20× | 0.220 | 2.97× | ok |
| Shootout-C++/lists | 0.076 | 0.225 | 2.96× | 0.252 | 3.32× | ok |
| Shootout-C++/lists1 | 0.080 | 0.214 | 2.67× | 0.239 | 2.99× | ok |
| Shootout-C++/matrix | 0.063 | 0.141 | 2.24× | 0.197 | 3.13× | ok |
| Shootout-C++/methcall | 0.060 | 0.137 | 2.28× | 0.184 | 3.07× | ok |
| Shootout-C++/moments | 0.085 | 0.229 | 2.69× | 0.236 | 2.78× | ok |
| Shootout-C++/random | 0.077 | 0.186 | 2.42× | 0.232 | 3.01× | ok |
| Shootout-C++/sieve | 0.086 | 0.205 | 2.38× | 0.270 | 3.14× | ok |
| SmallPT | 0.025 | 0.080 | 3.20× | 0.073 | 2.92× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.009 | 0.024 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.027 | — | ok |
| bg/binarytrees/2 | 0.060 | 0.143 | 2.38× | 0.186 | 3.10× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.069 | 2.16× | 0.080 | 2.50× | ok |
| bg/fasta/1 | 0.046 | 0.113 | 2.46× | 0.128 | 2.78× | ok |
| bg/fasta/2 | 0.046 | 0.115 | 2.50× | 0.139 | 3.02× | ok |
| bg/fasta/3 | 0.074 | 0.172 | 2.32× | 0.277 | 3.74× | ok |
| bg/fasta/4 | 0.067 | 0.139 | 2.07× | 0.167 | 2.49× | ok |
| bg/fasta/6 | 0.126 | 0.436 | 3.46× | 0.371 | 2.94× | ok |
| bg/mandelbrot/0 | 0.123 | 0.396 | 3.22× | 0.395 | 3.21× | ok |
| bg/mandelbrot/2 | 0.085 | 0.208 | 2.45× | 0.252 | 2.96× | ok |
| bg/mandelbrot/3 | 0.088 | 0.189 | 2.15× | 0.259 | 2.94× | ok |
| bg/mandelbrot/5 | 0.041 | 0.098 | 2.39× | 0.116 | 2.83× | ok |
| bg/mandelbrot/7 | 0.042 | 0.118 | 2.81× | 0.117 | 2.79× | ok |
| bg/mandelbrot/9 | 0.039 | 0.109 | 2.79× | 0.111 | 2.85× | ok |
| bg/nbody/1 | 0.028 | 0.096 | 3.43× | 0.086 | 3.07× | ok |
| bg/nbody/2 | 0.024 | 0.064 | 2.67× | 0.071 | 2.96× | ok |
| bg/nbody/3 | 0.025 | 0.064 | 2.56× | 0.068 | 2.72× | ok |
| bg/nbody/6 | 0.027 | 0.095 | 3.52× | 0.097 | 3.59× | ok |
| bg/pidigits/4 | 0.110 | 0.304 | 2.76× | 0.315 | 2.86× | ok |
| bg/pidigits/5 | 0.080 | 0.155 | 1.94× | 0.237 | 2.96× | ok |
| bg/revcomp/1 | 0.078 | 0.208 | 2.67× | 0.230 | 2.95× | ok |
| bg/revcomp/5 | 0.073 | 0.178 | 2.44× | 0.200 | 2.74× | ok |
| bg/spectralnorm/1 | 0.107 | 0.255 | 2.38× | 0.332 | 3.10× | ok |
| box2d | 1.341 | 3.772 | 2.81× | 3.058 | 2.28× | ok |
| fmt | 0.433 | 2.359 | 5.45× | 1.856 | 4.29× | ok |
| hexxagon | 0.229 | 0.515 | 2.25× | 0.776 | 3.39× | ok |
| lambda | 0.049 | 0.294 | 6.00× | 0.195 | 3.98× | ok |
| minisat | 0.062 | 0.279 | 4.50× | 0.223 | 3.60× | ok |
| nlohmann-json | 0.412 | 1.790 | 4.34× | 1.712 | 4.16× | ok |
| pugixml | 0.262 | 1.224 | 4.67× | 0.946 | 3.61× | ok |
| pugixml-tests | 2.893 | 14.609 | 5.05× | 11.056 | 3.82× | ok |
| rapidjson | 0.113 | 0.462 | 4.09× | 0.379 | 3.35× | ok |
| re2 | 3.038 | 10.030 | 3.30× | 6.371 | 2.10× | ok |
| re2-test-re2 | 4.291 | 14.601 | 3.40× | 14.409 | 3.36× | ok |
| re2-test-search | 4.255 | 13.517 | 3.18× | 14.030 | 3.30× | ok |
| tramp3d-v4 | 0.663 | 7.230 | 10.90× | 2.416 | 3.64× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.129 | 0.831 | 6.44× | 0.445 | 3.45× | ok |
| Adobe-C++/loop_unroll | 0.489 | 5.267 | 10.77× | 4.171 | 8.53× | ok |
| Adobe-C++/simple_types_constant_folding | 0.294 | 2.795 | 9.51× | 2.551 | 8.68× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.201 | 2.218 | 11.03× | 1.773 | 8.82× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 0.959 | 10.42× | 0.511 | 5.55× | ok |
| Adobe-C++/stepanov_vector | 0.129 | 1.189 | 9.22× | 0.642 | 4.98× | ok |
| Bullet | 6.042 | 36.051 | 5.97× | 27.879 | 4.61× | ok |
| CLAMR | 4.125 | 22.269 | 5.40× | 17.511 | 4.25× | ok |
| CoyoteBench/almabench | 0.030 | 0.169 | 5.63× | 0.115 | 3.83× | ok |
| CoyoteBench/fftbench | 0.111 | 0.401 | 3.61× | 0.386 | 3.48× | ok |
| CoyoteBench/huffbench | 0.037 | 0.188 | 5.08× | 0.128 | 3.46× | ok |
| CoyoteBench/lpbench | 0.040 | 0.159 | 3.98× | 0.205 | 5.12× | ok |
| DOE/HACCKernels | 0.114 | 0.403 | 3.54× | 0.446 | 3.91× | ok |
| DOE/HPCCG | 0.733 | 2.385 | 3.25× | 2.157 | 2.94× | ok |
| DOE/PENNANT | 1.692 | 6.605 | 3.90× | 5.471 | 3.23× | ok |
| DOE/miniFE | 0.798 | 3.803 | 4.77× | 2.953 | 3.70× | ok |
| Misc-C++-EH/spirit | 0.683 | 3.744 | 5.48× | 3.381 | 4.95× | ok |
| Misc-C++-Large/ray | 0.101 | 0.434 | 4.30× | 0.326 | 3.23× | ok |
| Misc-C++-Large/sphereflake | 0.098 | 0.678 | 6.92× | 0.394 | 4.02× | ok |
| Misc-C++/bigfib | 0.135 | 0.496 | 3.67× | 0.443 | 3.28× | ok |
| Misc-C++/oopack_v1p8 | 0.036 | 0.163 | 4.53× | 0.150 | 4.17× | ok |
| Misc-C++/stepanov_container | 0.198 | 0.894 | 4.52× | 0.780 | 3.94× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.211 | 5.41× | 0.207 | 5.31× | ok |
| PAQ8p | 0.291 | 3.752 | 12.89× | 1.478 | 5.08× | ok |
| Prolangs-C++/life | 0.010 | 0.103 | 10.30× | 0.070 | 7.00× | ok |
| Prolangs-C++/ocean | 0.018 | 0.182 | 10.11× | 0.102 | 5.67× | ok |
| Prolangs-C++/primes | 0.006 | 0.031 | — | 0.031 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.187 | 2.71× | 0.240 | 3.48× | ok |
| Shootout-C++/ackermann | 0.067 | 0.176 | 2.63× | 0.205 | 3.06× | ok |
| Shootout-C++/ary3 | 0.077 | 0.240 | 3.12× | 0.294 | 3.82× | ok |
| Shootout-C++/fibo | 0.108 | 0.183 | 1.69× | 0.205 | 1.90× | ok |
| Shootout-C++/hash | 0.111 | 0.361 | 3.25× | 0.368 | 3.32× | ok |
| Shootout-C++/hash2 | 0.127 | 0.426 | 3.35× | 0.526 | 4.14× | ok |
| Shootout-C++/heapsort | 0.079 | 0.199 | 2.52× | 0.234 | 2.96× | ok |
| Shootout-C++/lists | 0.076 | 0.232 | 3.05× | 0.245 | 3.22× | ok |
| Shootout-C++/lists1 | 0.090 | 0.254 | 2.82× | 0.288 | 3.20× | ok |
| Shootout-C++/matrix | 0.070 | 0.231 | 3.30× | 0.317 | 4.53× | ok |
| Shootout-C++/methcall | 0.065 | 0.169 | 2.60× | 0.202 | 3.11× | ok |
| Shootout-C++/moments | 0.095 | 0.285 | 3.00× | 0.293 | 3.08× | ok |
| Shootout-C++/random | 0.085 | 0.190 | 2.24× | 0.247 | 2.91× | ok |
| Shootout-C++/sieve | 0.093 | 0.226 | 2.43× | 0.282 | 3.03× | ok |
| SmallPT | 0.036 | 0.271 | 7.53× | 0.156 | 4.33× | ok |
| Stanford/Bubblesort | 0.010 | 0.051 | 5.10× | 0.040 | 4.00× | ok |
| Stanford/FloatMM | 0.012 | 0.057 | 4.75× | 0.065 | 5.42× | ok |
| Stanford/Puzzle | 0.019 | 0.117 | 6.16× | 0.121 | 6.37× | ok |
| Stanford/Treesort | 0.013 | 0.077 | 5.92× | 0.046 | 3.54× | ok |
| bg/binarytrees/2 | 0.067 | 0.391 | 5.84× | 0.207 | 3.09× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.118 | 3.11× | 0.111 | 2.92× | ok |
| bg/fasta/1 | 0.056 | 0.151 | 2.70× | 0.169 | 3.02× | ok |
| bg/fasta/2 | 0.058 | 0.156 | 2.69× | 0.171 | 2.95× | ok |
| bg/fasta/3 | 0.083 | 0.208 | 2.51× | 0.269 | 3.24× | ok |
| bg/fasta/4 | 0.074 | 0.171 | 2.31× | 0.221 | 2.99× | ok |
| bg/fasta/6 | 0.145 | 0.420 | 2.90× | 0.511 | 3.52× | ok |
| bg/mandelbrot/0 | 0.174 | 0.597 | 3.43× | 0.627 | 3.60× | ok |
| bg/mandelbrot/2 | 0.092 | 0.262 | 2.85× | 0.280 | 3.04× | ok |
| bg/mandelbrot/3 | 0.097 | 0.224 | 2.31× | 0.282 | 2.91× | ok |
| bg/mandelbrot/5 | 0.053 | 0.144 | 2.72× | 0.146 | 2.75× | ok |
| bg/mandelbrot/7 | 0.055 | 0.201 | 3.65× | 0.155 | 2.82× | ok |
| bg/mandelbrot/9 | 0.050 | 0.167 | 3.34× | 0.154 | 3.08× | ok |
| bg/nbody/1 | 0.040 | 0.143 | 3.57× | 0.157 | 3.92× | ok |
| bg/nbody/2 | 0.029 | 0.129 | 4.45× | 0.118 | 4.07× | ok |
| bg/nbody/3 | 0.028 | 0.112 | 4.00× | 0.101 | 3.61× | ok |
| bg/nbody/6 | 0.039 | 0.172 | 4.41× | 0.182 | 4.67× | ok |
| bg/pidigits/4 | 0.111 | 0.324 | 2.92× | 0.443 | 3.99× | ok |
| bg/pidigits/5 | 0.086 | 0.187 | 2.17× | 0.264 | 3.07× | ok |
| bg/revcomp/1 | 0.083 | 0.229 | 2.76× | 0.265 | 3.19× | ok |
| bg/revcomp/5 | 0.084 | 0.217 | 2.58× | 0.234 | 2.79× | ok |
| bg/spectralnorm/1 | 0.114 | 0.332 | 2.91× | 0.403 | 3.54× | ok |
| box2d | 1.751 | 6.491 | 3.71× | 4.358 | 2.49× | ok |
| fmt | 0.919 | 5.323 | 5.79× | 3.595 | 3.91× | ok |
| hexxagon | 0.276 | 1.011 | 3.66× | 1.044 | 3.78× | ok |
| lambda | 0.116 | 1.108 | 9.55× | 0.541 | 4.66× | ok |
| minisat | 0.141 | 0.905 | 6.42× | 0.611 | 4.33× | ok |
| nlohmann-json | 0.785 | 3.169 | 4.04× | 2.979 | 3.79× | ok |
| pugixml | 0.671 | 5.171 | 7.71× | 3.649 | 5.44× | ok |
| pugixml-tests | 4.404 | 33.234 | 7.55× | 23.836 | 5.41× | ok |
| rapidjson | 0.231 | 1.195 | 5.17× | 0.723 | 3.13× | ok |
| re2 | 2.990 | 17.348 | 5.80× | 9.820 | 3.28× | ok |
| re2-test-re2 | 5.574 | 25.397 | 4.56× | 21.217 | 3.81× | ok |
| re2-test-search | 5.525 | 23.045 | 4.17× | 19.797 | 3.58× | ok |
| tramp3d-v4 | 2.537 | 20.822 | 8.21× | 13.241 | 5.22× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.060 | 0.127 | 2.12× | 0.182 | 3.03× | ok |
| Adobe-C++/loop_unroll | 0.038 | 0.097 | 2.55× | 0.103 | 2.71× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.102 | 2.91× | 0.105 | 3.00× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.035 | 0.091 | 2.60× | 0.121 | 3.46× | ok |
| Adobe-C++/stepanov_abstraction | 0.029 | 0.066 | 2.28× | 0.085 | 2.93× | ok |
| Adobe-C++/stepanov_vector | 0.056 | 0.119 | 2.12× | 0.196 | 3.50× | ok |
| Bullet | 3.801 | 11.329 | 2.98× | 13.003 | 3.42× | ok |
| CLAMR | 2.174 | 5.330 | 2.45× | 6.681 | 3.07× | ok |
| CoyoteBench/almabench | 0.026 | 0.062 | 2.38× | 0.088 | 3.38× | ok |
| CoyoteBench/fftbench | 0.094 | 0.220 | 2.34× | 0.263 | 2.80× | ok |
| CoyoteBench/huffbench | 0.027 | 0.061 | 2.26× | 0.080 | 2.96× | ok |
| CoyoteBench/lpbench | 0.025 | 0.050 | 2.00× | 0.081 | 3.24× | ok |
| DOE/HACCKernels | 0.114 | 0.254 | 2.23× | 0.296 | 2.60× | ok |
| DOE/HPCCG | 0.619 | 1.351 | 2.18× | 2.093 | 3.38× | ok |
| DOE/PENNANT | 1.325 | 2.701 | 2.04× | 3.570 | 2.69× | ok |
| DOE/miniFE | 0.509 | 1.349 | 2.65× | 1.539 | 3.02× | ok |
| Misc-C++-EH/spirit | 0.320 | 0.806 | 2.52× | 1.241 | 3.88× | ok |
| Misc-C++-Large/ray | 0.091 | 0.255 | 2.80× | 0.247 | 2.71× | ok |
| Misc-C++-Large/sphereflake | 0.078 | 0.169 | 2.17× | 0.225 | 2.88× | ok |
| Misc-C++/bigfib | 0.099 | 0.223 | 2.25× | 0.331 | 3.34× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.056 | 2.07× | 0.076 | 2.81× | ok |
| Misc-C++/stepanov_container | 0.128 | 0.287 | 2.24× | 0.362 | 2.83× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.053 | 1.89× | 0.071 | 2.54× | ok |
| PAQ8p | 0.042 | 0.104 | 2.48× | 0.113 | 2.69× | ok |
| Prolangs-C++/life | 0.003 | 0.008 | — | 0.020 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.013 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.070 | 0.160 | 2.29× | 0.217 | 3.10× | ok |
| Shootout-C++/ackermann | 0.063 | 0.139 | 2.21× | 0.186 | 2.95× | ok |
| Shootout-C++/ary3 | 0.077 | 0.181 | 2.35× | 0.212 | 2.75× | ok |
| Shootout-C++/fibo | 0.064 | 0.144 | 2.25× | 0.188 | 2.94× | ok |
| Shootout-C++/hash | 0.090 | 0.202 | 2.24× | 0.246 | 2.73× | ok |
| Shootout-C++/hash2 | 0.097 | 0.220 | 2.27× | 0.317 | 3.27× | ok |
| Shootout-C++/heapsort | 0.076 | 0.162 | 2.13× | 0.214 | 2.82× | ok |
| Shootout-C++/lists | 0.076 | 0.193 | 2.54× | 0.193 | 2.54× | ok |
| Shootout-C++/lists1 | 0.080 | 0.174 | 2.17× | 0.219 | 2.74× | ok |
| Shootout-C++/matrix | 0.064 | 0.140 | 2.19× | 0.188 | 2.94× | ok |
| Shootout-C++/methcall | 0.062 | 0.137 | 2.21× | 0.176 | 2.84× | ok |
| Shootout-C++/moments | 0.083 | 0.182 | 2.19× | 0.218 | 2.63× | ok |
| Shootout-C++/random | 0.078 | 0.159 | 2.04× | 0.228 | 2.92× | ok |
| Shootout-C++/sieve | 0.082 | 0.171 | 2.09× | 0.244 | 2.98× | ok |
| SmallPT | 0.024 | 0.052 | 2.17× | 0.069 | 2.88× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.009 | 0.020 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.008 | 0.021 | — | 0.027 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.141 | 2.24× | 0.182 | 2.89× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.060 | 1.82× | 0.079 | 2.39× | ok |
| bg/fasta/1 | 0.047 | 0.092 | 1.96× | 0.121 | 2.57× | ok |
| bg/fasta/2 | 0.047 | 0.093 | 1.98× | 0.122 | 2.60× | ok |
| bg/fasta/3 | 0.075 | 0.163 | 2.17× | 0.258 | 3.44× | ok |
| bg/fasta/4 | 0.067 | 0.133 | 1.99× | 0.170 | 2.54× | ok |
| bg/fasta/6 | 0.114 | 0.291 | 2.55× | 0.328 | 2.88× | ok |
| bg/mandelbrot/0 | 0.113 | 0.282 | 2.50× | 0.351 | 3.11× | ok |
| bg/mandelbrot/2 | 0.082 | 0.192 | 2.34× | 0.246 | 3.00× | ok |
| bg/mandelbrot/3 | 0.087 | 0.185 | 2.13× | 0.262 | 3.01× | ok |
| bg/mandelbrot/5 | 0.041 | 0.080 | 1.95× | 0.108 | 2.63× | ok |
| bg/mandelbrot/7 | 0.040 | 0.083 | 2.08× | 0.100 | 2.50× | ok |
| bg/mandelbrot/9 | 0.038 | 0.084 | 2.21× | 0.101 | 2.66× | ok |
| bg/nbody/1 | 0.028 | 0.057 | 2.04× | 0.070 | 2.50× | ok |
| bg/nbody/2 | 0.025 | 0.055 | 2.20× | 0.068 | 2.72× | ok |
| bg/nbody/3 | 0.025 | 0.052 | 2.08× | 0.067 | 2.68× | ok |
| bg/nbody/6 | 0.026 | 0.049 | 1.88× | 0.084 | 3.23× | ok |
| bg/pidigits/4 | 0.110 | 0.233 | 2.12× | 0.356 | 3.24× | ok |
| bg/pidigits/5 | 0.079 | 0.155 | 1.96× | 0.223 | 2.82× | ok |
| bg/revcomp/1 | 0.075 | 0.185 | 2.47× | 0.209 | 2.79× | ok |
| bg/revcomp/5 | 0.074 | 0.153 | 2.07× | 0.185 | 2.50× | ok |
| bg/spectralnorm/1 | 0.104 | 0.241 | 2.32× | 0.335 | 3.22× | ok |
| box2d | 1.285 | 2.532 | 1.97× | 2.586 | 2.01× | ok |
| fmt | 0.399 | 1.029 | 2.58× | 1.550 | 3.88× | ok |
| hexxagon | 0.231 | 0.466 | 2.02× | 0.748 | 3.24× | ok |
| lambda | 0.038 | 0.115 | 3.03× | 0.140 | 3.68× | ok |
| minisat | 0.054 | 0.119 | 2.20× | 0.163 | 3.02× | ok |
| nlohmann-json | 0.290 | 0.876 | 3.02× | 1.315 | 4.53× | ok |
| pugixml | 0.214 | 0.452 | 2.11× | 0.689 | 3.22× | ok |
| pugixml-tests | 2.665 | 6.825 | 2.56× | 9.061 | 3.40× | ok |
| rapidjson | 0.092 | 0.239 | 2.60× | 0.290 | 3.15× | ok |
| re2 | 2.642 | 6.334 | 2.40× | 5.419 | 2.05× | ok |
| re2-test-re2 | 3.801 | 9.537 | 2.51× | 12.381 | 3.26× | ok |
| re2-test-search | 3.841 | 9.140 | 2.38× | 12.069 | 3.14× | ok |
| tramp3d-v4 | 0.638 | 2.085 | 3.27× | 1.419 | 2.22× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
