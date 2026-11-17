# Public benchmarks: Intel (GitHub)

Measured compiler: [`4bcc7ed57`](https://github.com/vishvananda/cppgm/commit/4bcc7ed573ec2701286a757a83f159779f6c8cbf) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44000592326) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.29× | 79 | 2.83× | 79 |
| Compile CPU, `-O0` | 3.15× | 79 | 3.08× | 79 |
| Compile CPU, `-O3` | 4.33× | 80 | 3.78× | 80 |
| Compile peak RSS, `-O0` | 1.43× | 81 | 2.12× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.20× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.14× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.01× | 81 | 1.00× | 81 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.965 to 1.071; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.090 | 0.356 | 3.96× | 0.294 | 3.27× | ok |
| Adobe-C++/loop_unroll | 0.072 | 0.785 | 10.90× | 0.246 | 3.42× | ok |
| Adobe-C++/simple_types_constant_folding | 0.072 | 0.887 | 12.32× | 0.293 | 4.07× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.065 | 0.686 | 10.55× | 0.338 | 5.20× | ok |
| Adobe-C++/stepanov_abstraction | 0.049 | 0.252 | 5.14× | 0.182 | 3.71× | ok |
| Adobe-C++/stepanov_vector | 0.104 | 0.403 | 3.88× | 0.264 | 2.54× | ok |
| Bullet | 6.828 | 24.185 | 3.54× | 21.018 | 3.08× | ok |
| CLAMR | 3.608 | 12.412 | 3.44× | 10.068 | 2.79× | ok |
| CoyoteBench/almabench | 0.043 | 0.109 | 2.53× | 0.108 | 2.51× | ok |
| CoyoteBench/fftbench | 0.136 | 0.318 | 2.34× | 0.393 | 2.89× | ok |
| CoyoteBench/huffbench | 0.038 | 0.089 | 2.34× | 0.104 | 2.74× | ok |
| CoyoteBench/lpbench | 0.036 | 0.090 | 2.50× | 0.105 | 2.92× | ok |
| DOE/HACCKernels | 0.147 | 0.365 | 2.48× | 0.521 | 3.54× | ok |
| DOE/HPCCG | 0.996 | 2.068 | 2.08× | 2.672 | 2.68× | ok |
| DOE/PENNANT | 1.972 | 5.093 | 2.58× | 5.576 | 2.83× | ok |
| DOE/miniFE | 0.831 | 2.824 | 3.40× | 2.597 | 3.13× | ok |
| Misc-C++-EH/spirit | 0.527 | 3.771 | 7.16× | 2.216 | 4.20× | ok |
| Misc-C++-Large/ray | 0.146 | 0.376 | 2.58× | 0.425 | 2.91× | ok |
| Misc-C++-Large/sphereflake | 0.130 | 0.317 | 2.44× | 0.394 | 3.03× | ok |
| Misc-C++/bigfib | 0.160 | 0.528 | 3.30× | 0.560 | 3.50× | ok |
| Misc-C++/oopack_v1p8 | 0.044 | 0.126 | 2.86× | 0.129 | 2.93× | ok |
| Misc-C++/stepanov_container | 0.221 | 0.778 | 3.52× | 0.707 | 3.20× | ok |
| Misc-C++/stepanov_v1p2 | 0.043 | 0.163 | 3.79× | 0.122 | 2.84× | ok |
| PAQ8p | 0.091 | 0.640 | 7.03× | 0.307 | 3.37× | ok |
| Prolangs-C++/life | 0.005 | 0.041 | — | 0.035 | — | ok |
| Prolangs-C++/ocean | 0.015 | 0.083 | 5.53× | 0.058 | 3.87× | ok |
| Prolangs-C++/primes | 0.007 | 0.030 | — | 0.037 | — | ok |
| Shootout-C++-EH/except | 0.095 | 0.214 | 2.25× | 0.281 | 2.96× | ok |
| Shootout-C++/ackermann | 0.103 | 0.218 | 2.12× | 0.316 | 3.07× | ok |
| Shootout-C++/ary3 | 0.109 | 0.266 | 2.44× | 0.308 | 2.83× | ok |
| Shootout-C++/fibo | 0.096 | 0.295 | 3.07× | 0.279 | 2.91× | ok |
| Shootout-C++/hash | 0.151 | 0.392 | 2.60× | 0.467 | 3.09× | ok |
| Shootout-C++/hash2 | 0.137 | 0.387 | 2.82× | 0.401 | 2.93× | ok |
| Shootout-C++/heapsort | 0.133 | 0.267 | 2.01× | 0.340 | 2.56× | ok |
| Shootout-C++/lists | 0.107 | 0.277 | 2.59× | 0.316 | 2.95× | ok |
| Shootout-C++/lists1 | 0.118 | 0.296 | 2.51× | 0.392 | 3.32× | ok |
| Shootout-C++/matrix | 0.091 | 0.207 | 2.27× | 0.279 | 3.07× | ok |
| Shootout-C++/methcall | 0.094 | 0.219 | 2.33× | 0.267 | 2.84× | ok |
| Shootout-C++/moments | 0.132 | 0.345 | 2.61× | 0.353 | 2.67× | ok |
| Shootout-C++/random | 0.114 | 0.244 | 2.14× | 0.319 | 2.80× | ok |
| Shootout-C++/sieve | 0.127 | 0.316 | 2.49× | 0.363 | 2.86× | ok |
| SmallPT | 0.039 | 0.103 | 2.64× | 0.127 | 3.26× | ok |
| Stanford/Bubblesort | 0.012 | 0.036 | 3.00× | 0.041 | 3.42× | ok |
| Stanford/FloatMM | 0.012 | 0.038 | 3.17× | 0.040 | 3.33× | ok |
| Stanford/Puzzle | 0.013 | 0.046 | 3.54× | 0.042 | 3.23× | ok |
| Stanford/Treesort | 0.012 | 0.039 | 3.25× | 0.041 | 3.42× | ok |
| bg/binarytrees/2 | 0.094 | 0.214 | 2.28× | 0.342 | 3.64× | ok |
| bg/fannkuchredux/3 | 0.045 | 0.095 | 2.11× | 0.110 | 2.44× | ok |
| bg/fasta/1 | 0.075 | 0.167 | 2.23× | 0.176 | 2.35× | ok |
| bg/fasta/2 | 0.076 | 0.171 | 2.25× | 0.173 | 2.28× | ok |
| bg/fasta/3 | 0.116 | 0.246 | 2.12× | 0.307 | 2.65× | ok |
| bg/fasta/4 | 0.112 | 0.226 | 2.02× | 0.304 | 2.71× | ok |
| bg/fasta/6 | 0.193 | 0.532 | 2.76× | 0.585 | 3.03× | ok |
| bg/mandelbrot/0 | 0.201 | 0.624 | 3.10× | 0.657 | 3.27× | ok |
| bg/mandelbrot/2 | 0.125 | 0.329 | 2.63× | 0.333 | 2.66× | ok |
| bg/mandelbrot/3 | 0.129 | 0.288 | 2.23× | 0.376 | 2.91× | ok |
| bg/mandelbrot/5 | 0.059 | 0.153 | 2.59× | 0.171 | 2.90× | ok |
| bg/mandelbrot/7 | 0.064 | 0.154 | 2.41× | 0.171 | 2.67× | ok |
| bg/mandelbrot/9 | 0.062 | 0.163 | 2.63× | 0.167 | 2.69× | ok |
| bg/nbody/1 | 0.041 | 0.141 | 3.44× | 0.142 | 3.46× | ok |
| bg/nbody/2 | 0.037 | 0.095 | 2.57× | 0.107 | 2.89× | ok |
| bg/nbody/3 | 0.039 | 0.088 | 2.26× | 0.102 | 2.62× | ok |
| bg/nbody/6 | 0.039 | 0.150 | 3.85× | 0.140 | 3.59× | ok |
| bg/pidigits/4 | 0.163 | 0.431 | 2.64× | 0.468 | 2.87× | ok |
| bg/pidigits/5 | 0.113 | 0.236 | 2.09× | 0.299 | 2.65× | ok |
| bg/revcomp/1 | 0.111 | 0.303 | 2.73× | 0.370 | 3.33× | ok |
| bg/revcomp/5 | 0.110 | 0.266 | 2.42× | 0.290 | 2.64× | ok |
| bg/spectralnorm/1 | 0.161 | 0.367 | 2.28× | 0.478 | 2.97× | ok |
| box2d | 2.061 | 5.815 | 2.82× | 5.931 | 2.88× | ok |
| fmt | 0.744 | 3.311 | 4.45× | 2.819 | 3.79× | ok |
| hexxagon | 0.345 | 0.771 | 2.23× | 0.979 | 2.84× | ok |
| lambda | 0.073 | 0.422 | 5.78× | 0.305 | 4.18× | ok |
| minisat | 0.081 | 0.377 | 4.65× | 0.298 | 3.68× | ok |
| nlohmann-json | 0.575 | 2.360 | 4.10× | 2.335 | 4.06× | ok |
| pugixml | 0.383 | 1.869 | 4.88× | 1.427 | 3.73× | ok |
| pugixml-tests | 4.890 | 20.746 | 4.24× | 17.921 | 3.66× | ok |
| rapidjson | 0.161 | 0.645 | 4.01× | 0.500 | 3.11× | ok |
| re2 | 3.180 | 15.102 | 4.75× | 8.832 | 2.78× | ok |
| re2-test-re2 | 6.592 | 20.516 | 3.11× | 20.149 | 3.06× | ok |
| re2-test-search | 6.536 | 19.448 | 2.98× | 19.961 | 3.05× | ok |
| tramp3d-v4 | 0.908 | 9.651 | 10.63× | 3.395 | 3.74× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.178 | 1.183 | 6.65× | 0.674 | 3.79× | ok |
| Adobe-C++/loop_unroll | 0.621 | 7.485 | 12.05× | 5.684 | 9.15× | ok |
| Adobe-C++/simple_types_constant_folding | 0.357 | 3.940 | 11.04× | 3.139 | 8.79× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.297 | 3.146 | 10.59× | 2.524 | 8.50× | ok |
| Adobe-C++/stepanov_abstraction | 0.143 | 1.331 | 9.31× | 0.613 | 4.29× | ok |
| Adobe-C++/stepanov_vector | 0.152 | 1.975 | 12.99× | 0.859 | 5.65× | ok |
| Bullet | 9.002 | 50.670 | 5.63× | 37.390 | 4.15× | ok |
| CLAMR | 5.545 | 32.848 | 5.92× | 23.491 | 4.24× | ok |
| CoyoteBench/almabench | 0.046 | 0.239 | 5.20× | 0.160 | 3.48× | ok |
| CoyoteBench/fftbench | 0.158 | 0.569 | 3.60× | 0.535 | 3.39× | ok |
| CoyoteBench/huffbench | 0.052 | 0.276 | 5.31× | 0.170 | 3.27× | ok |
| CoyoteBench/lpbench | 0.046 | 0.219 | 4.76× | 0.251 | 5.46× | ok |
| DOE/HACCKernels | 0.158 | 0.505 | 3.20× | 0.557 | 3.53× | ok |
| DOE/HPCCG | 1.067 | 3.235 | 3.03× | 3.061 | 2.87× | ok |
| DOE/PENNANT | 2.436 | 8.851 | 3.63× | 7.713 | 3.17× | ok |
| DOE/miniFE | 1.151 | 5.458 | 4.74× | 4.906 | 4.26× | ok |
| Misc-C++-EH/spirit | 0.920 | 5.122 | 5.57× | 4.276 | 4.65× | ok |
| Misc-C++-Large/ray | 0.157 | 0.659 | 4.20× | 0.509 | 3.24× | ok |
| Misc-C++-Large/sphereflake | 0.151 | 1.051 | 6.96× | 0.522 | 3.46× | ok |
| Misc-C++/bigfib | 0.196 | 0.768 | 3.92× | 0.746 | 3.81× | ok |
| Misc-C++/oopack_v1p8 | 0.055 | 0.250 | 4.55× | 0.231 | 4.20× | ok |
| Misc-C++/stepanov_container | 0.312 | 1.249 | 4.00× | 1.275 | 4.09× | ok |
| Misc-C++/stepanov_v1p2 | 0.057 | 0.301 | 5.28× | 0.283 | 4.96× | ok |
| PAQ8p | 0.429 | 5.477 | 12.77× | 2.205 | 5.14× | ok |
| Prolangs-C++/life | 0.013 | 0.143 | 11.00× | 0.089 | 6.85× | ok |
| Prolangs-C++/ocean | 0.029 | 0.270 | 9.31× | 0.149 | 5.14× | ok |
| Prolangs-C++/primes | 0.009 | 0.046 | — | 0.044 | — | ok |
| Shootout-C++-EH/except | 0.097 | 0.271 | 2.79× | 0.296 | 3.05× | ok |
| Shootout-C++/ackermann | 0.105 | 0.273 | 2.60× | 0.289 | 2.75× | ok |
| Shootout-C++/ary3 | 0.114 | 0.336 | 2.95× | 0.345 | 3.03× | ok |
| Shootout-C++/fibo | 0.099 | 0.269 | 2.72× | 0.478 | 4.83× | ok |
| Shootout-C++/hash | 0.176 | 0.526 | 2.99× | 0.627 | 3.56× | ok |
| Shootout-C++/hash2 | 0.168 | 0.562 | 3.35× | 0.582 | 3.46× | ok |
| Shootout-C++/heapsort | 0.120 | 0.316 | 2.63× | 0.425 | 3.54× | ok |
| Shootout-C++/lists | 0.127 | 0.314 | 2.47× | 0.337 | 2.65× | ok |
| Shootout-C++/lists1 | 0.131 | 0.351 | 2.68× | 0.455 | 3.47× | ok |
| Shootout-C++/matrix | 0.101 | 0.279 | 2.76× | 0.399 | 3.95× | ok |
| Shootout-C++/methcall | 0.112 | 0.258 | 2.30× | 0.274 | 2.45× | ok |
| Shootout-C++/moments | 0.147 | 0.428 | 2.91× | 0.437 | 2.97× | ok |
| Shootout-C++/random | 0.120 | 0.276 | 2.30× | 0.342 | 2.85× | ok |
| Shootout-C++/sieve | 0.132 | 0.339 | 2.57× | 0.385 | 2.92× | ok |
| SmallPT | 0.053 | 0.399 | 7.53× | 0.215 | 4.06× | ok |
| Stanford/Bubblesort | 0.015 | 0.074 | 4.93× | 0.064 | 4.27× | ok |
| Stanford/FloatMM | 0.017 | 0.084 | 4.94× | 0.088 | 5.18× | ok |
| Stanford/Puzzle | 0.026 | 0.166 | 6.38× | 0.151 | 5.81× | ok |
| Stanford/Treesort | 0.019 | 0.112 | 5.89× | 0.067 | 3.53× | ok |
| bg/binarytrees/2 | 0.101 | 0.556 | 5.50× | 0.292 | 2.89× | ok |
| bg/fannkuchredux/3 | 0.051 | 0.181 | 3.55× | 0.149 | 2.92× | ok |
| bg/fasta/1 | 0.085 | 0.225 | 2.65× | 0.228 | 2.68× | ok |
| bg/fasta/2 | 0.084 | 0.234 | 2.79× | 0.241 | 2.87× | ok |
| bg/fasta/3 | 0.118 | 0.302 | 2.56× | 0.385 | 3.26× | ok |
| bg/fasta/4 | 0.110 | 0.250 | 2.27× | 0.326 | 2.96× | ok |
| bg/fasta/6 | 0.197 | 0.671 | 3.41× | 0.687 | 3.49× | ok |
| bg/mandelbrot/0 | 0.249 | 0.928 | 3.73× | 0.889 | 3.57× | ok |
| bg/mandelbrot/2 | 0.127 | 0.369 | 2.91× | 0.374 | 2.94× | ok |
| bg/mandelbrot/3 | 0.145 | 0.328 | 2.26× | 0.387 | 2.67× | ok |
| bg/mandelbrot/5 | 0.069 | 0.207 | 3.00× | 0.241 | 3.49× | ok |
| bg/mandelbrot/7 | 0.090 | 0.250 | 2.78× | 0.237 | 2.63× | ok |
| bg/mandelbrot/9 | 0.074 | 0.239 | 3.23× | 0.225 | 3.04× | ok |
| bg/nbody/1 | 0.057 | 0.218 | 3.82× | 0.214 | 3.75× | ok |
| bg/nbody/2 | 0.043 | 0.178 | 4.14× | 0.161 | 3.74× | ok |
| bg/nbody/3 | 0.044 | 0.176 | 4.00× | 0.143 | 3.25× | ok |
| bg/nbody/6 | 0.055 | 0.229 | 4.16× | 0.251 | 4.56× | ok |
| bg/pidigits/4 | 0.169 | 0.487 | 2.88× | 0.622 | 3.68× | ok |
| bg/pidigits/5 | 0.109 | 0.282 | 2.59× | 0.327 | 3.00× | ok |
| bg/revcomp/1 | 0.120 | 0.361 | 3.01× | 0.431 | 3.59× | ok |
| bg/revcomp/5 | 0.118 | 0.323 | 2.74× | 0.331 | 2.81× | ok |
| bg/spectralnorm/1 | 0.172 | 0.465 | 2.70× | 0.550 | 3.20× | ok |
| box2d | 2.429 | 9.919 | 4.08× | 8.162 | 3.36× | ok |
| fmt | 1.408 | 7.468 | 5.30× | 5.407 | 3.84× | ok |
| hexxagon | 0.408 | 1.434 | 3.51× | 1.332 | 3.26× | ok |
| lambda | 0.168 | 1.564 | 9.31× | 0.757 | 4.51× | ok |
| minisat | 0.197 | 1.311 | 6.65× | 0.890 | 4.52× | ok |
| nlohmann-json | 1.181 | 4.503 | 3.81× | 3.961 | 3.35× | ok |
| pugixml | 0.981 | 7.683 | 7.83× | 5.556 | 5.66× | ok |
| pugixml-tests | 6.948 | 48.245 | 6.94× | 34.172 | 4.92× | ok |
| rapidjson | 0.321 | 1.608 | 5.01× | 1.004 | 3.13× | ok |
| re2 | 3.865 | 25.244 | 6.53× | 13.209 | 3.42× | ok |
| re2-test-re2 | 8.202 | 36.563 | 4.46× | 29.312 | 3.57× | ok |
| re2-test-search | 7.750 | 33.111 | 4.27× | 27.880 | 3.60× | ok |
| tramp3d-v4 | 3.434 | 32.062 | 9.34× | 18.418 | 5.36× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.082 | 0.189 | 2.30× | 0.251 | 3.06× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.143 | 2.86× | 0.139 | 2.78× | ok |
| Adobe-C++/simple_types_constant_folding | 0.050 | 0.149 | 2.98× | 0.147 | 2.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.048 | 0.140 | 2.92× | 0.163 | 3.40× | ok |
| Adobe-C++/stepanov_abstraction | 0.041 | 0.102 | 2.49× | 0.134 | 3.27× | ok |
| Adobe-C++/stepanov_vector | 0.086 | 0.182 | 2.12× | 0.207 | 2.41× | ok |
| Bullet | 6.285 | 15.287 | 2.43× | 18.045 | 2.87× | ok |
| CLAMR | 3.134 | 7.382 | 2.36× | 7.810 | 2.49× | ok |
| CoyoteBench/almabench | 0.041 | 0.092 | 2.24× | 0.101 | 2.46× | ok |
| CoyoteBench/fftbench | 0.131 | 0.279 | 2.13× | 0.368 | 2.81× | ok |
| CoyoteBench/huffbench | 0.039 | 0.074 | 1.90× | 0.099 | 2.54× | ok |
| CoyoteBench/lpbench | 0.035 | 0.072 | 2.06× | 0.098 | 2.80× | ok |
| DOE/HACCKernels | 0.142 | 0.324 | 2.28× | 0.393 | 2.77× | ok |
| DOE/HPCCG | 0.960 | 1.912 | 1.99× | 2.456 | 2.56× | ok |
| DOE/PENNANT | 1.914 | 4.228 | 2.21× | 4.781 | 2.50× | ok |
| DOE/miniFE | 0.750 | 1.898 | 2.53× | 2.213 | 2.95× | ok |
| Misc-C++-EH/spirit | 0.415 | 1.309 | 3.15× | 1.429 | 3.44× | ok |
| Misc-C++-Large/ray | 0.141 | 0.311 | 2.21× | 0.387 | 2.74× | ok |
| Misc-C++-Large/sphereflake | 0.126 | 0.282 | 2.24× | 0.366 | 2.90× | ok |
| Misc-C++/bigfib | 0.144 | 0.355 | 2.47× | 0.489 | 3.40× | ok |
| Misc-C++/oopack_v1p8 | 0.043 | 0.088 | 2.05× | 0.113 | 2.63× | ok |
| Misc-C++/stepanov_container | 0.199 | 0.459 | 2.31× | 0.610 | 3.07× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.086 | 2.15× | 0.104 | 2.60× | ok |
| PAQ8p | 0.061 | 0.174 | 2.85× | 0.198 | 3.25× | ok |
| Prolangs-C++/life | 0.004 | 0.012 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.012 | 0.029 | 2.42× | 0.038 | 3.17× | ok |
| Prolangs-C++/primes | 0.007 | 0.020 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.095 | 0.213 | 2.24× | 0.263 | 2.77× | ok |
| Shootout-C++/ackermann | 0.102 | 0.227 | 2.23× | 0.303 | 2.97× | ok |
| Shootout-C++/ary3 | 0.106 | 0.243 | 2.29× | 0.298 | 2.81× | ok |
| Shootout-C++/fibo | 0.095 | 0.241 | 2.54× | 0.269 | 2.83× | ok |
| Shootout-C++/hash | 0.141 | 0.296 | 2.10× | 0.413 | 2.93× | ok |
| Shootout-C++/hash2 | 0.130 | 0.289 | 2.22× | 0.355 | 2.73× | ok |
| Shootout-C++/heapsort | 0.135 | 0.271 | 2.01× | 0.330 | 2.44× | ok |
| Shootout-C++/lists | 0.102 | 0.232 | 2.27× | 0.287 | 2.81× | ok |
| Shootout-C++/lists1 | 0.113 | 0.243 | 2.15× | 0.380 | 3.36× | ok |
| Shootout-C++/matrix | 0.090 | 0.207 | 2.30× | 0.275 | 3.06× | ok |
| Shootout-C++/methcall | 0.093 | 0.216 | 2.32× | 0.252 | 2.71× | ok |
| Shootout-C++/moments | 0.125 | 0.271 | 2.17× | 0.318 | 2.54× | ok |
| Shootout-C++/random | 0.116 | 0.246 | 2.12× | 0.305 | 2.63× | ok |
| Shootout-C++/sieve | 0.122 | 0.260 | 2.13× | 0.331 | 2.71× | ok |
| SmallPT | 0.038 | 0.067 | 1.76× | 0.098 | 2.58× | ok |
| Stanford/Bubblesort | 0.012 | 0.031 | 2.58× | 0.038 | 3.17× | ok |
| Stanford/FloatMM | 0.012 | 0.032 | 2.67× | 0.038 | 3.17× | ok |
| Stanford/Puzzle | 0.012 | 0.032 | 2.67× | 0.038 | 3.17× | ok |
| Stanford/Treesort | 0.012 | 0.031 | 2.58× | 0.038 | 3.17× | ok |
| bg/binarytrees/2 | 0.094 | 0.210 | 2.23× | 0.262 | 2.79× | ok |
| bg/fannkuchredux/3 | 0.044 | 0.081 | 1.84× | 0.104 | 2.36× | ok |
| bg/fasta/1 | 0.072 | 0.134 | 1.86× | 0.161 | 2.24× | ok |
| bg/fasta/2 | 0.073 | 0.134 | 1.84× | 0.156 | 2.14× | ok |
| bg/fasta/3 | 0.125 | 0.235 | 1.88× | 0.294 | 2.35× | ok |
| bg/fasta/4 | 0.101 | 0.198 | 1.96× | 0.236 | 2.34× | ok |
| bg/fasta/6 | 0.174 | 0.370 | 2.13× | 0.558 | 3.21× | ok |
| bg/mandelbrot/0 | 0.185 | 0.470 | 2.54× | 0.535 | 2.89× | ok |
| bg/mandelbrot/2 | 0.119 | 0.302 | 2.54× | 0.314 | 2.64× | ok |
| bg/mandelbrot/3 | 0.128 | 0.283 | 2.21× | 0.342 | 2.67× | ok |
| bg/mandelbrot/5 | 0.057 | 0.123 | 2.16× | 0.157 | 2.75× | ok |
| bg/mandelbrot/7 | 0.059 | 0.113 | 1.92× | 0.151 | 2.56× | ok |
| bg/mandelbrot/9 | 0.058 | 0.120 | 2.07× | 0.169 | 2.91× | ok |
| bg/nbody/1 | 0.039 | 0.082 | 2.10× | 0.105 | 2.69× | ok |
| bg/nbody/2 | 0.038 | 0.078 | 2.05× | 0.100 | 2.63× | ok |
| bg/nbody/3 | 0.038 | 0.075 | 1.97× | 0.097 | 2.55× | ok |
| bg/nbody/6 | 0.037 | 0.086 | 2.32× | 0.119 | 3.22× | ok |
| bg/pidigits/4 | 0.160 | 0.389 | 2.43× | 0.504 | 3.15× | ok |
| bg/pidigits/5 | 0.103 | 0.230 | 2.23× | 0.279 | 2.71× | ok |
| bg/revcomp/1 | 0.106 | 0.269 | 2.54× | 0.340 | 3.21× | ok |
| bg/revcomp/5 | 0.105 | 0.219 | 2.09× | 0.308 | 2.93× | ok |
| bg/spectralnorm/1 | 0.147 | 0.326 | 2.22× | 0.449 | 3.05× | ok |
| box2d | 1.946 | 3.991 | 2.05× | 4.362 | 2.24× | ok |
| fmt | 0.586 | 1.457 | 2.49× | 2.213 | 3.78× | ok |
| hexxagon | 0.341 | 0.695 | 2.04× | 0.915 | 2.68× | ok |
| lambda | 0.057 | 0.172 | 3.02× | 0.214 | 3.75× | ok |
| minisat | 0.067 | 0.169 | 2.52× | 0.216 | 3.22× | ok |
| nlohmann-json | 0.455 | 1.063 | 2.34× | 1.799 | 3.95× | ok |
| pugixml | 0.289 | 0.730 | 2.53× | 1.054 | 3.65× | ok |
| pugixml-tests | 4.122 | 10.392 | 2.52× | 12.148 | 2.95× | ok |
| rapidjson | 0.127 | 0.334 | 2.63× | 0.386 | 3.04× | ok |
| re2 | 3.947 | 9.554 | 2.42× | 7.518 | 1.90× | ok |
| re2-test-re2 | 5.921 | 13.195 | 2.23× | 17.250 | 2.91× | ok |
| re2-test-search | 5.832 | 13.151 | 2.25× | 17.219 | 2.95× | ok |
| tramp3d-v4 | 0.833 | 3.018 | 3.62× | 1.976 | 2.37× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
