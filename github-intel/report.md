# Public benchmarks: Intel (GitHub)

Measured compiler: [`393bcf16e`](https://github.com/vishvananda/cppgm-extended/commit/393bcf16e6a1102a419fcfd176ee8b4bcb60b16a) · [CI run](https://github.com/vishvananda/cppgm-extended/actions/runs/43674677962) · [Raw program results](results.json)

81 of 81 programs built with cppgm++ and g++ and agreed. Each number is the reference over cppgm++, so above 1× means cppgm++ is smaller or faster.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.27× | 79 | 2.80× | 79 |
| Compile CPU, `-O0` | 3.16× | 79 | 3.04× | 79 |
| Compile CPU, `-O3` | 4.24× | 80 | 3.70× | 80 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.11× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.19× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.95× | 81 | 0.91× | 81 |
| Run CPU, `-O0` | 1.13× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 81 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.961 to 1.037; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.094 | 0.354 | 3.77× | 0.295 | 3.14× | ok |
| Adobe-C++/loop_unroll | 0.087 | 0.784 | 9.01× | 0.238 | 2.74× | ok |
| Adobe-C++/simple_types_constant_folding | 0.073 | 0.926 | 12.68× | 0.294 | 4.03× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.064 | 0.662 | 10.34× | 0.323 | 5.05× | ok |
| Adobe-C++/stepanov_abstraction | 0.051 | 0.247 | 4.84× | 0.150 | 2.94× | ok |
| Adobe-C++/stepanov_vector | 0.104 | 0.401 | 3.86× | 0.332 | 3.19× | ok |
| Bullet | 6.722 | 23.303 | 3.47× | 22.462 | 3.34× | ok |
| CLAMR | 3.482 | 11.441 | 3.29× | 10.176 | 2.92× | ok |
| CoyoteBench/almabench | 0.040 | 0.109 | 2.72× | 0.106 | 2.65× | ok |
| CoyoteBench/fftbench | 0.139 | 0.356 | 2.56× | 0.464 | 3.34× | ok |
| CoyoteBench/huffbench | 0.038 | 0.098 | 2.58× | 0.110 | 2.89× | ok |
| CoyoteBench/lpbench | 0.043 | 0.108 | 2.51× | 0.119 | 2.77× | ok |
| DOE/HACCKernels | 0.166 | 0.403 | 2.43× | 0.431 | 2.60× | ok |
| DOE/HPCCG | 0.989 | 2.178 | 2.20× | 2.987 | 3.02× | ok |
| DOE/PENNANT | 1.893 | 5.395 | 2.85× | 5.352 | 2.83× | ok |
| DOE/miniFE | 0.890 | 2.988 | 3.36× | 2.782 | 3.13× | ok |
| Misc-C++-EH/spirit | 0.595 | 3.748 | 6.30× | 2.571 | 4.32× | ok |
| Misc-C++-Large/ray | 0.137 | 0.344 | 2.51× | 0.424 | 3.09× | ok |
| Misc-C++-Large/sphereflake | 0.126 | 0.285 | 2.26× | 0.383 | 3.04× | ok |
| Misc-C++/bigfib | 0.173 | 0.519 | 3.00× | 0.549 | 3.17× | ok |
| Misc-C++/oopack_v1p8 | 0.042 | 0.123 | 2.93× | 0.113 | 2.69× | ok |
| Misc-C++/stepanov_container | 0.227 | 0.767 | 3.38× | 0.613 | 2.70× | ok |
| Misc-C++/stepanov_v1p2 | 0.042 | 0.149 | 3.55× | 0.119 | 2.83× | ok |
| PAQ8p | 0.092 | 0.587 | 6.38× | 0.348 | 3.78× | ok |
| Prolangs-C++/life | 0.005 | 0.041 | — | 0.035 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.081 | 6.23× | 0.056 | 4.31× | ok |
| Prolangs-C++/primes | 0.007 | 0.029 | — | 0.031 | — | ok |
| Shootout-C++-EH/except | 0.095 | 0.224 | 2.36× | 0.275 | 2.89× | ok |
| Shootout-C++/ackermann | 0.098 | 0.207 | 2.11× | 0.275 | 2.81× | ok |
| Shootout-C++/ary3 | 0.114 | 0.258 | 2.26× | 0.313 | 2.75× | ok |
| Shootout-C++/fibo | 0.097 | 0.210 | 2.16× | 0.277 | 2.86× | ok |
| Shootout-C++/hash | 0.144 | 0.393 | 2.73× | 0.437 | 3.03× | ok |
| Shootout-C++/hash2 | 0.139 | 0.420 | 3.02× | 0.405 | 2.91× | ok |
| Shootout-C++/heapsort | 0.119 | 0.265 | 2.23× | 0.326 | 2.74× | ok |
| Shootout-C++/lists | 0.104 | 0.263 | 2.53× | 0.307 | 2.95× | ok |
| Shootout-C++/lists1 | 0.120 | 0.300 | 2.50× | 0.334 | 2.78× | ok |
| Shootout-C++/matrix | 0.099 | 0.214 | 2.16× | 0.268 | 2.71× | ok |
| Shootout-C++/methcall | 0.086 | 0.208 | 2.42× | 0.263 | 3.06× | ok |
| Shootout-C++/moments | 0.133 | 0.342 | 2.57× | 0.350 | 2.63× | ok |
| Shootout-C++/random | 0.118 | 0.242 | 2.05× | 0.337 | 2.86× | ok |
| Shootout-C++/sieve | 0.127 | 0.316 | 2.49× | 0.360 | 2.83× | ok |
| SmallPT | 0.038 | 0.117 | 3.08× | 0.110 | 2.89× | ok |
| Stanford/Bubblesort | 0.012 | 0.036 | 3.00× | 0.041 | 3.42× | ok |
| Stanford/FloatMM | 0.011 | 0.038 | 3.45× | 0.039 | 3.55× | ok |
| Stanford/Puzzle | 0.013 | 0.046 | 3.54× | 0.041 | 3.15× | ok |
| Stanford/Treesort | 0.012 | 0.038 | 3.17× | 0.040 | 3.33× | ok |
| bg/binarytrees/2 | 0.096 | 0.212 | 2.21× | 0.287 | 2.99× | ok |
| bg/fannkuchredux/3 | 0.045 | 0.094 | 2.09× | 0.109 | 2.42× | ok |
| bg/fasta/1 | 0.074 | 0.168 | 2.27× | 0.188 | 2.54× | ok |
| bg/fasta/2 | 0.076 | 0.169 | 2.22× | 0.184 | 2.42× | ok |
| bg/fasta/3 | 0.112 | 0.248 | 2.21× | 0.295 | 2.63× | ok |
| bg/fasta/4 | 0.103 | 0.203 | 1.97× | 0.248 | 2.41× | ok |
| bg/fasta/6 | 0.196 | 0.601 | 3.07× | 0.586 | 2.99× | ok |
| bg/mandelbrot/0 | 0.197 | 0.614 | 3.12× | 0.543 | 2.76× | ok |
| bg/mandelbrot/2 | 0.120 | 0.286 | 2.38× | 0.371 | 3.09× | ok |
| bg/mandelbrot/3 | 0.130 | 0.279 | 2.15× | 0.360 | 2.77× | ok |
| bg/mandelbrot/5 | 0.055 | 0.151 | 2.75× | 0.174 | 3.16× | ok |
| bg/mandelbrot/7 | 0.068 | 0.174 | 2.56× | 0.178 | 2.62× | ok |
| bg/mandelbrot/9 | 0.055 | 0.158 | 2.87× | 0.162 | 2.95× | ok |
| bg/nbody/1 | 0.040 | 0.158 | 3.95× | 0.124 | 3.10× | ok |
| bg/nbody/2 | 0.038 | 0.094 | 2.47× | 0.101 | 2.66× | ok |
| bg/nbody/3 | 0.041 | 0.096 | 2.34× | 0.101 | 2.46× | ok |
| bg/nbody/6 | 0.040 | 0.143 | 3.57× | 0.116 | 2.90× | ok |
| bg/pidigits/4 | 0.174 | 0.379 | 2.18× | 0.532 | 3.06× | ok |
| bg/pidigits/5 | 0.115 | 0.231 | 2.01× | 0.287 | 2.50× | ok |
| bg/revcomp/1 | 0.117 | 0.311 | 2.66× | 0.329 | 2.81× | ok |
| bg/revcomp/5 | 0.105 | 0.264 | 2.51× | 0.328 | 3.12× | ok |
| bg/spectralnorm/1 | 0.150 | 0.344 | 2.29× | 0.416 | 2.77× | ok |
| box2d | 1.965 | 6.186 | 3.15× | 6.329 | 3.22× | ok |
| fmt | 0.734 | 3.355 | 4.57× | 2.716 | 3.70× | ok |
| hexxagon | 0.359 | 0.858 | 2.39× | 0.971 | 2.70× | ok |
| lambda | 0.065 | 0.436 | 6.71× | 0.301 | 4.63× | ok |
| minisat | 0.079 | 0.377 | 4.77× | 0.293 | 3.71× | ok |
| nlohmann-json | 0.542 | 2.360 | 4.35× | 2.460 | 4.54× | ok |
| pugixml | 0.371 | 1.875 | 5.05× | 1.347 | 3.63× | ok |
| pugixml-tests | 4.751 | 20.258 | 4.26× | 15.722 | 3.31× | ok |
| rapidjson | 0.160 | 0.617 | 3.86× | 0.527 | 3.29× | ok |
| re2 | 3.159 | 14.805 | 4.69× | 8.859 | 2.80× | ok |
| re2-test-re2 | 6.317 | 20.477 | 3.24× | 20.302 | 3.21× | ok |
| re2-test-search | 6.370 | 18.952 | 2.98× | 19.763 | 3.10× | ok |
| tramp3d-v4 | 0.944 | 11.150 | 11.81× | 3.384 | 3.58× | ok |

### O3 compilation

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.179 | 1.144 | 6.39× | 0.680 | 3.80× | ok |
| Adobe-C++/loop_unroll | 0.614 | 7.443 | 12.12× | 5.620 | 9.15× | ok |
| Adobe-C++/simple_types_constant_folding | 0.351 | 3.921 | 11.17× | 3.124 | 8.90× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.295 | 3.056 | 10.36× | 2.479 | 8.40× | ok |
| Adobe-C++/stepanov_abstraction | 0.142 | 1.356 | 9.55× | 0.620 | 4.37× | ok |
| Adobe-C++/stepanov_vector | 0.179 | 1.933 | 10.80× | 0.833 | 4.65× | ok |
| Bullet | 8.494 | 48.764 | 5.74× | 35.747 | 4.21× | ok |
| CLAMR | 5.876 | 32.066 | 5.46× | 23.175 | 3.94× | ok |
| CoyoteBench/almabench | 0.051 | 0.237 | 4.65× | 0.147 | 2.88× | ok |
| CoyoteBench/fftbench | 0.191 | 0.577 | 3.02× | 0.638 | 3.34× | ok |
| CoyoteBench/huffbench | 0.052 | 0.283 | 5.44× | 0.185 | 3.56× | ok |
| CoyoteBench/lpbench | 0.054 | 0.263 | 4.87× | 0.282 | 5.22× | ok |
| DOE/HACCKernels | 0.160 | 0.570 | 3.56× | 0.606 | 3.79× | ok |
| DOE/HPCCG | 1.013 | 3.131 | 3.09× | 3.431 | 3.39× | ok |
| DOE/PENNANT | 2.433 | 8.398 | 3.45× | 7.519 | 3.09× | ok |
| DOE/miniFE | 1.230 | 5.735 | 4.66× | 4.620 | 3.76× | ok |
| Misc-C++-EH/spirit | 0.941 | 4.614 | 4.90× | 4.042 | 4.30× | ok |
| Misc-C++-Large/ray | 0.159 | 0.599 | 3.77× | 0.499 | 3.14× | ok |
| Misc-C++-Large/sphereflake | 0.149 | 0.993 | 6.66× | 0.503 | 3.38× | ok |
| Misc-C++/bigfib | 0.215 | 0.749 | 3.48× | 0.727 | 3.38× | ok |
| Misc-C++/oopack_v1p8 | 0.053 | 0.254 | 4.79× | 0.204 | 3.85× | ok |
| Misc-C++/stepanov_container | 0.290 | 1.228 | 4.23× | 1.108 | 3.82× | ok |
| Misc-C++/stepanov_v1p2 | 0.053 | 0.290 | 5.47× | 0.258 | 4.87× | ok |
| PAQ8p | 0.466 | 4.982 | 10.69× | 2.336 | 5.01× | ok |
| Prolangs-C++/life | 0.012 | 0.141 | 11.75× | 0.086 | 7.17× | ok |
| Prolangs-C++/ocean | 0.026 | 0.260 | 10.00× | 0.144 | 5.54× | ok |
| Prolangs-C++/primes | 0.009 | 0.044 | — | 0.042 | — | ok |
| Shootout-C++-EH/except | 0.098 | 0.264 | 2.69× | 0.290 | 2.96× | ok |
| Shootout-C++/ackermann | 0.099 | 0.264 | 2.67× | 0.291 | 2.94× | ok |
| Shootout-C++/ary3 | 0.119 | 0.320 | 2.69× | 0.382 | 3.21× | ok |
| Shootout-C++/fibo | 0.100 | 0.268 | 2.68× | 0.288 | 2.88× | ok |
| Shootout-C++/hash | 0.170 | 0.526 | 3.09× | 0.607 | 3.57× | ok |
| Shootout-C++/hash2 | 0.195 | 0.616 | 3.16× | 0.565 | 2.90× | ok |
| Shootout-C++/heapsort | 0.123 | 0.324 | 2.63× | 0.354 | 2.88× | ok |
| Shootout-C++/lists | 0.129 | 0.303 | 2.35× | 0.349 | 2.71× | ok |
| Shootout-C++/lists1 | 0.134 | 0.357 | 2.66× | 0.384 | 2.87× | ok |
| Shootout-C++/matrix | 0.105 | 0.249 | 2.37× | 0.395 | 3.76× | ok |
| Shootout-C++/methcall | 0.098 | 0.226 | 2.31× | 0.289 | 2.95× | ok |
| Shootout-C++/moments | 0.149 | 0.423 | 2.84× | 0.432 | 2.90× | ok |
| Shootout-C++/random | 0.134 | 0.272 | 2.03× | 0.347 | 2.59× | ok |
| Shootout-C++/sieve | 0.132 | 0.348 | 2.64× | 0.380 | 2.88× | ok |
| SmallPT | 0.054 | 0.408 | 7.56× | 0.225 | 4.17× | ok |
| Stanford/Bubblesort | 0.015 | 0.074 | 4.93× | 0.063 | 4.20× | ok |
| Stanford/FloatMM | 0.017 | 0.089 | 5.24× | 0.088 | 5.18× | ok |
| Stanford/Puzzle | 0.026 | 0.166 | 6.38× | 0.150 | 5.77× | ok |
| Stanford/Treesort | 0.019 | 0.110 | 5.79× | 0.067 | 3.53× | ok |
| bg/binarytrees/2 | 0.101 | 0.551 | 5.46× | 0.304 | 3.01× | ok |
| bg/fannkuchredux/3 | 0.051 | 0.155 | 3.04× | 0.149 | 2.92× | ok |
| bg/fasta/1 | 0.083 | 0.219 | 2.64× | 0.226 | 2.72× | ok |
| bg/fasta/2 | 0.084 | 0.219 | 2.61× | 0.233 | 2.77× | ok |
| bg/fasta/3 | 0.119 | 0.304 | 2.55× | 0.439 | 3.69× | ok |
| bg/fasta/4 | 0.108 | 0.246 | 2.28× | 0.296 | 2.74× | ok |
| bg/fasta/6 | 0.207 | 0.610 | 2.95× | 0.714 | 3.45× | ok |
| bg/mandelbrot/0 | 0.240 | 0.896 | 3.73× | 0.840 | 3.50× | ok |
| bg/mandelbrot/2 | 0.129 | 0.356 | 2.76× | 0.421 | 3.26× | ok |
| bg/mandelbrot/3 | 0.147 | 0.327 | 2.22× | 0.396 | 2.69× | ok |
| bg/mandelbrot/5 | 0.062 | 0.200 | 3.23× | 0.219 | 3.53× | ok |
| bg/mandelbrot/7 | 0.089 | 0.268 | 3.01× | 0.232 | 2.61× | ok |
| bg/mandelbrot/9 | 0.068 | 0.252 | 3.71× | 0.219 | 3.22× | ok |
| bg/nbody/1 | 0.056 | 0.222 | 3.96× | 0.233 | 4.16× | ok |
| bg/nbody/2 | 0.044 | 0.178 | 4.05× | 0.153 | 3.48× | ok |
| bg/nbody/3 | 0.044 | 0.170 | 3.86× | 0.155 | 3.52× | ok |
| bg/nbody/6 | 0.055 | 0.232 | 4.22× | 0.254 | 4.62× | ok |
| bg/pidigits/4 | 0.190 | 0.484 | 2.55× | 0.597 | 3.14× | ok |
| bg/pidigits/5 | 0.120 | 0.294 | 2.45× | 0.313 | 2.61× | ok |
| bg/revcomp/1 | 0.119 | 0.331 | 2.78× | 0.383 | 3.22× | ok |
| bg/revcomp/5 | 0.114 | 0.327 | 2.87× | 0.391 | 3.43× | ok |
| bg/spectralnorm/1 | 0.181 | 0.459 | 2.54× | 0.484 | 2.67× | ok |
| box2d | 2.294 | 10.402 | 4.53× | 8.322 | 3.63× | ok |
| fmt | 1.444 | 6.895 | 4.77× | 5.516 | 3.82× | ok |
| hexxagon | 0.390 | 1.428 | 3.66× | 1.391 | 3.57× | ok |
| lambda | 0.167 | 1.407 | 8.43× | 0.758 | 4.54× | ok |
| minisat | 0.195 | 1.370 | 7.03× | 0.863 | 4.43× | ok |
| nlohmann-json | 1.065 | 4.448 | 4.18× | 3.869 | 3.63× | ok |
| pugixml | 1.011 | 7.525 | 7.44× | 5.108 | 5.05× | ok |
| pugixml-tests | 7.128 | 47.443 | 6.66× | 32.527 | 4.56× | ok |
| rapidjson | 0.323 | 1.580 | 4.89× | 0.998 | 3.09× | ok |
| re2 | 3.904 | 24.832 | 6.36× | 13.172 | 3.37× | ok |
| re2-test-re2 | 8.076 | 36.097 | 4.47× | 29.270 | 3.62× | ok |
| re2-test-search | 8.002 | 32.499 | 4.06× | 27.529 | 3.44× | ok |
| tramp3d-v4 | 3.521 | 32.121 | 9.12× | 18.266 | 5.19× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm++ (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.089 | 0.189 | 2.12× | 0.250 | 2.81× | ok |
| Adobe-C++/loop_unroll | 0.056 | 0.140 | 2.50× | 0.138 | 2.46× | ok |
| Adobe-C++/simple_types_constant_folding | 0.051 | 0.147 | 2.88× | 0.149 | 2.92× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.049 | 0.132 | 2.69× | 0.172 | 3.51× | ok |
| Adobe-C++/stepanov_abstraction | 0.043 | 0.098 | 2.28× | 0.116 | 2.70× | ok |
| Adobe-C++/stepanov_vector | 0.093 | 0.179 | 1.92× | 0.260 | 2.80× | ok |
| Bullet | 6.043 | 14.091 | 2.33× | 18.899 | 3.13× | ok |
| CLAMR | 2.999 | 6.341 | 2.11× | 7.851 | 2.62× | ok |
| CoyoteBench/almabench | 0.039 | 0.089 | 2.28× | 0.098 | 2.51× | ok |
| CoyoteBench/fftbench | 0.141 | 0.329 | 2.33× | 0.428 | 3.04× | ok |
| CoyoteBench/huffbench | 0.038 | 0.086 | 2.26× | 0.105 | 2.76× | ok |
| CoyoteBench/lpbench | 0.042 | 0.091 | 2.17× | 0.113 | 2.69× | ok |
| DOE/HACCKernels | 0.163 | 0.360 | 2.21× | 0.405 | 2.48× | ok |
| DOE/HPCCG | 0.958 | 1.789 | 1.87× | 2.759 | 2.88× | ok |
| DOE/PENNANT | 1.837 | 4.012 | 2.18× | 4.750 | 2.59× | ok |
| DOE/miniFE | 0.811 | 1.917 | 2.36× | 2.398 | 2.96× | ok |
| Misc-C++-EH/spirit | 0.408 | 1.355 | 3.32× | 1.666 | 4.08× | ok |
| Misc-C++-Large/ray | 0.130 | 0.285 | 2.19× | 0.384 | 2.95× | ok |
| Misc-C++-Large/sphereflake | 0.123 | 0.252 | 2.05× | 0.364 | 2.96× | ok |
| Misc-C++/bigfib | 0.159 | 0.346 | 2.18× | 0.472 | 2.97× | ok |
| Misc-C++/oopack_v1p8 | 0.042 | 0.089 | 2.12× | 0.112 | 2.67× | ok |
| Misc-C++/stepanov_container | 0.204 | 0.449 | 2.20× | 0.516 | 2.53× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.079 | 1.97× | 0.099 | 2.48× | ok |
| PAQ8p | 0.060 | 0.155 | 2.58× | 0.183 | 3.05× | ok |
| Prolangs-C++/life | 0.004 | 0.012 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.028 | 2.55× | 0.037 | 3.36× | ok |
| Prolangs-C++/primes | 0.007 | 0.020 | — | 0.029 | — | ok |
| Shootout-C++-EH/except | 0.094 | 0.228 | 2.43× | 0.263 | 2.80× | ok |
| Shootout-C++/ackermann | 0.098 | 0.211 | 2.15× | 0.264 | 2.69× | ok |
| Shootout-C++/ary3 | 0.116 | 0.237 | 2.04× | 0.293 | 2.53× | ok |
| Shootout-C++/fibo | 0.097 | 0.217 | 2.24× | 0.264 | 2.72× | ok |
| Shootout-C++/hash | 0.137 | 0.297 | 2.17× | 0.359 | 2.62× | ok |
| Shootout-C++/hash2 | 0.131 | 0.309 | 2.36× | 0.383 | 2.92× | ok |
| Shootout-C++/heapsort | 0.121 | 0.268 | 2.21× | 0.312 | 2.58× | ok |
| Shootout-C++/lists | 0.099 | 0.221 | 2.23× | 0.279 | 2.82× | ok |
| Shootout-C++/lists1 | 0.115 | 0.249 | 2.17× | 0.302 | 2.63× | ok |
| Shootout-C++/matrix | 0.097 | 0.214 | 2.21× | 0.257 | 2.65× | ok |
| Shootout-C++/methcall | 0.086 | 0.205 | 2.38× | 0.251 | 2.92× | ok |
| Shootout-C++/moments | 0.127 | 0.269 | 2.12× | 0.318 | 2.50× | ok |
| Shootout-C++/random | 0.119 | 0.243 | 2.04× | 0.324 | 2.72× | ok |
| Shootout-C++/sieve | 0.121 | 0.247 | 2.04× | 0.330 | 2.73× | ok |
| SmallPT | 0.036 | 0.077 | 2.14× | 0.100 | 2.78× | ok |
| Stanford/Bubblesort | 0.012 | 0.031 | 2.58× | 0.039 | 3.25× | ok |
| Stanford/FloatMM | 0.012 | 0.032 | 2.67× | 0.038 | 3.17× | ok |
| Stanford/Puzzle | 0.012 | 0.033 | 2.75× | 0.038 | 3.17× | ok |
| Stanford/Treesort | 0.012 | 0.030 | 2.50× | 0.038 | 3.17× | ok |
| bg/binarytrees/2 | 0.095 | 0.209 | 2.20× | 0.285 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.044 | 0.081 | 1.84× | 0.104 | 2.36× | ok |
| bg/fasta/1 | 0.072 | 0.135 | 1.88× | 0.173 | 2.40× | ok |
| bg/fasta/2 | 0.074 | 0.134 | 1.81× | 0.162 | 2.19× | ok |
| bg/fasta/3 | 0.110 | 0.235 | 2.14× | 0.280 | 2.55× | ok |
| bg/fasta/4 | 0.100 | 0.196 | 1.96× | 0.239 | 2.39× | ok |
| bg/fasta/6 | 0.176 | 0.373 | 2.12× | 0.509 | 2.89× | ok |
| bg/mandelbrot/0 | 0.163 | 0.417 | 2.56× | 0.485 | 2.98× | ok |
| bg/mandelbrot/2 | 0.116 | 0.263 | 2.27× | 0.348 | 3.00× | ok |
| bg/mandelbrot/3 | 0.129 | 0.278 | 2.16× | 0.344 | 2.67× | ok |
| bg/mandelbrot/5 | 0.053 | 0.119 | 2.25× | 0.149 | 2.81× | ok |
| bg/mandelbrot/7 | 0.066 | 0.128 | 1.94× | 0.158 | 2.39× | ok |
| bg/mandelbrot/9 | 0.051 | 0.100 | 1.96× | 0.144 | 2.82× | ok |
| bg/nbody/1 | 0.038 | 0.082 | 2.16× | 0.104 | 2.74× | ok |
| bg/nbody/2 | 0.038 | 0.078 | 2.05× | 0.095 | 2.50× | ok |
| bg/nbody/3 | 0.040 | 0.078 | 1.95× | 0.095 | 2.38× | ok |
| bg/nbody/6 | 0.037 | 0.084 | 2.27× | 0.098 | 2.65× | ok |
| bg/pidigits/4 | 0.156 | 0.369 | 2.37× | 0.469 | 3.01× | ok |
| bg/pidigits/5 | 0.113 | 0.237 | 2.10× | 0.286 | 2.53× | ok |
| bg/revcomp/1 | 0.112 | 0.261 | 2.33× | 0.287 | 2.56× | ok |
| bg/revcomp/5 | 0.099 | 0.241 | 2.43× | 0.282 | 2.85× | ok |
| bg/spectralnorm/1 | 0.141 | 0.316 | 2.24× | 0.391 | 2.77× | ok |
| box2d | 1.920 | 4.279 | 2.23× | 4.082 | 2.13× | ok |
| fmt | 0.625 | 1.501 | 2.40× | 2.153 | 3.44× | ok |
| hexxagon | 0.351 | 0.786 | 2.24× | 0.917 | 2.61× | ok |
| lambda | 0.052 | 0.161 | 3.10× | 0.211 | 4.06× | ok |
| minisat | 0.066 | 0.166 | 2.52× | 0.213 | 3.23× | ok |
| nlohmann-json | 0.428 | 1.049 | 2.45× | 1.822 | 4.26× | ok |
| pugixml | 0.289 | 0.709 | 2.45× | 0.952 | 3.29× | ok |
| pugixml-tests | 4.112 | 10.130 | 2.46× | 12.664 | 3.08× | ok |
| rapidjson | 0.130 | 0.328 | 2.52× | 0.420 | 3.23× | ok |
| re2 | 4.093 | 8.917 | 2.18× | 7.507 | 1.83× | ok |
| re2-test-re2 | 5.721 | 13.584 | 2.37× | 17.289 | 3.02× | ok |
| re2-test-search | 5.785 | 13.413 | 2.32× | 17.121 | 2.96× | ok |
| tramp3d-v4 | 0.820 | 2.946 | 3.59× | 1.972 | 2.40× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
