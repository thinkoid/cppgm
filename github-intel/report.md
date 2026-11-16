# Public benchmarks: Intel (GitHub)

Measured compiler: [`4b05c8780`](https://github.com/vishvananda/cppgm/commit/4b05c87802afb837551466590e3eb75c8099ec82) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/43822097696) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.26× | 74 | 2.87× | 74 |
| Compile CPU, `-O0` | 3.15× | 74 | 3.10× | 74 |
| Compile CPU, `-O3` | 4.29× | 79 | 3.79× | 79 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.19× | 81 |
| Compile peak RSS, `-O3` | 1.71× | 81 | 2.29× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.14× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.00× | 81 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.929 to 1.032; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.247 | 3.92× | 0.211 | 3.35× | ok |
| Adobe-C++/loop_unroll | 0.045 | 0.544 | 12.09× | 0.167 | 3.71× | ok |
| Adobe-C++/simple_types_constant_folding | 0.050 | 0.640 | 12.80× | 0.202 | 4.04× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.461 | 10.24× | 0.185 | 4.11× | ok |
| Adobe-C++/stepanov_abstraction | 0.036 | 0.164 | 4.56× | 0.107 | 2.97× | ok |
| Adobe-C++/stepanov_vector | 0.071 | 0.264 | 3.72× | 0.232 | 3.27× | ok |
| Bullet | 4.272 | 16.438 | 3.85× | 15.786 | 3.70× | ok |
| CLAMR | 2.209 | 8.065 | 3.65× | 8.455 | 3.83× | ok |
| CoyoteBench/almabench | 0.026 | 0.071 | 2.73× | 0.078 | 3.00× | ok |
| CoyoteBench/fftbench | 0.097 | 0.230 | 2.37× | 0.345 | 3.56× | ok |
| CoyoteBench/huffbench | 0.026 | 0.064 | 2.46× | 0.073 | 2.81× | ok |
| CoyoteBench/lpbench | 0.029 | 0.072 | 2.48× | 0.083 | 2.86× | ok |
| DOE/HACCKernels | 0.112 | 0.280 | 2.50× | 0.304 | 2.71× | ok |
| DOE/HPCCG | 0.603 | 1.468 | 2.43× | 1.845 | 3.06× | ok |
| DOE/PENNANT | 1.483 | 3.565 | 2.40× | 3.884 | 2.62× | ok |
| DOE/miniFE | 0.611 | 2.101 | 3.44× | 2.067 | 3.38× | ok |
| Misc-C++-EH/spirit | 0.407 | 2.347 | 5.77× | 1.584 | 3.89× | ok |
| Misc-C++-Large/ray | 0.111 | 0.275 | 2.48× | 0.281 | 2.53× | ok |
| Misc-C++-Large/sphereflake | 0.084 | 0.213 | 2.54× | 0.244 | 2.90× | ok |
| Misc-C++/bigfib | 0.113 | 0.346 | 3.06× | 0.330 | 2.92× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.083 | 2.77× | 0.087 | 2.90× | ok |
| Misc-C++/stepanov_container | 0.159 | 0.532 | 3.35× | 0.558 | 3.51× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.105 | 3.75× | 0.094 | 3.36× | ok |
| PAQ8p | 0.067 | 0.458 | 6.84× | 0.243 | 3.63× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.058 | — | 0.041 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.024 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.149 | 2.26× | 0.194 | 2.94× | ok |
| Shootout-C++/ackermann | 0.071 | 0.165 | 2.32× | 0.234 | 3.30× | ok |
| Shootout-C++/ary3 | 0.076 | 0.182 | 2.39× | 0.226 | 2.97× | ok |
| Shootout-C++/fibo | 0.071 | 0.160 | 2.25× | 0.232 | 3.27× | ok |
| Shootout-C++/hash | 0.106 | 0.301 | 2.84× | 0.338 | 3.19× | ok |
| Shootout-C++/hash2 | 0.095 | 0.267 | 2.81× | 0.286 | 3.01× | ok |
| Shootout-C++/heapsort | 0.094 | 0.191 | 2.03× | 0.218 | 2.32× | ok |
| Shootout-C++/lists | 0.073 | 0.190 | 2.60× | 0.216 | 2.96× | ok |
| Shootout-C++/lists1 | 0.082 | 0.210 | 2.56× | 0.248 | 3.02× | ok |
| Shootout-C++/matrix | 0.063 | 0.151 | 2.40× | 0.187 | 2.97× | ok |
| Shootout-C++/methcall | 0.067 | 0.142 | 2.12× | 0.187 | 2.79× | ok |
| Shootout-C++/moments | 0.084 | 0.227 | 2.70× | 0.244 | 2.90× | ok |
| Shootout-C++/random | 0.078 | 0.165 | 2.12× | 0.226 | 2.90× | ok |
| Shootout-C++/sieve | 0.083 | 0.219 | 2.64× | 0.245 | 2.95× | ok |
| SmallPT | 0.026 | 0.080 | 3.08× | 0.075 | 2.88× | ok |
| Stanford/Bubblesort | 0.008 | 0.026 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.009 | 0.031 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.148 | 2.24× | 0.242 | 3.67× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.066 | 2.20× | 0.077 | 2.57× | ok |
| bg/fasta/1 | 0.050 | 0.126 | 2.52× | 0.129 | 2.58× | ok |
| bg/fasta/2 | 0.050 | 0.112 | 2.24× | 0.155 | 3.10× | ok |
| bg/fasta/3 | 0.073 | 0.189 | 2.59× | 0.209 | 2.86× | ok |
| bg/fasta/4 | 0.074 | 0.144 | 1.95× | 0.176 | 2.38× | ok |
| bg/fasta/6 | 0.128 | 0.355 | 2.77× | 0.357 | 2.79× | ok |
| bg/mandelbrot/0 | 0.151 | 0.423 | 2.80× | 0.437 | 2.89× | ok |
| bg/mandelbrot/2 | 0.085 | 0.196 | 2.31× | 0.254 | 2.99× | ok |
| bg/mandelbrot/3 | 0.096 | 0.193 | 2.01× | 0.250 | 2.60× | ok |
| bg/mandelbrot/5 | 0.042 | 0.105 | 2.50× | 0.110 | 2.62× | ok |
| bg/mandelbrot/7 | 0.043 | 0.119 | 2.77× | 0.125 | 2.91× | ok |
| bg/mandelbrot/9 | 0.042 | 0.116 | 2.76× | 0.115 | 2.74× | ok |
| bg/nbody/1 | 0.027 | 0.090 | 3.33× | 0.087 | 3.22× | ok |
| bg/nbody/2 | 0.025 | 0.064 | 2.56× | 0.071 | 2.84× | ok |
| bg/nbody/3 | 0.028 | 0.067 | 2.39× | 0.081 | 2.89× | ok |
| bg/nbody/6 | 0.027 | 0.088 | 3.26× | 0.087 | 3.22× | ok |
| bg/pidigits/4 | 0.109 | 0.296 | 2.72× | 0.370 | 3.39× | ok |
| bg/pidigits/5 | 0.068 | 0.156 | 2.29× | 0.204 | 3.00× | ok |
| bg/revcomp/1 | 0.079 | 0.213 | 2.70× | 0.233 | 2.95× | ok |
| bg/revcomp/5 | 0.073 | 0.186 | 2.55× | 0.200 | 2.74× | ok |
| bg/spectralnorm/1 | 0.101 | 0.246 | 2.44× | 0.281 | 2.78× | ok |
| box2d | 1.305 | 4.107 | 3.15× | 3.027 | 2.32× | ok |
| fmt | 0.512 | 2.426 | 4.74× | 2.007 | 3.92× | ok |
| hexxagon | 0.216 | 0.597 | 2.76× | 0.698 | 3.23× | ok |
| lambda | 0.044 | 0.277 | 6.30× | 0.173 | 3.93× | ok |
| minisat | 0.052 | 0.255 | 4.90× | 0.209 | 4.02× | ok |
| nlohmann-json | 0.391 | 1.695 | 4.34× | 1.726 | 4.41× | ok |
| pugixml | 0.247 | 1.314 | 5.32× | 1.020 | 4.13× | ok |
| pugixml-tests | 3.185 | 14.321 | 4.50× | 12.331 | 3.87× | ok |
| rapidjson | 0.108 | 0.393 | 3.64× | 0.344 | 3.19× | ok |
| re2 | 2.825 | 10.412 | 3.69× | 6.363 | 2.25× | ok |
| re2-test-re2 | 4.723 | 14.468 | 3.06× | 15.513 | 3.28× | ok |
| re2-test-search | 4.366 | 13.512 | 3.09× | 14.228 | 3.26× | ok |
| tramp3d-v4 | 0.687 | 7.941 | 11.56× | 2.412 | 3.51× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.115 | 0.811 | 7.05× | 0.479 | 4.17× | ok |
| Adobe-C++/loop_unroll | 0.435 | 5.175 | 11.90× | 4.050 | 9.31× | ok |
| Adobe-C++/simple_types_constant_folding | 0.242 | 3.025 | 12.50× | 2.190 | 9.05× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.221 | 2.133 | 9.65× | 1.748 | 7.91× | ok |
| Adobe-C++/stepanov_abstraction | 0.090 | 1.049 | 11.66× | 0.503 | 5.59× | ok |
| Adobe-C++/stepanov_vector | 0.115 | 1.380 | 12.00× | 0.597 | 5.19× | ok |
| Bullet | 6.155 | 36.329 | 5.90× | 25.581 | 4.16× | ok |
| CLAMR | 4.076 | 21.902 | 5.37× | 16.328 | 4.01× | ok |
| CoyoteBench/almabench | 0.032 | 0.163 | 5.09× | 0.107 | 3.34× | ok |
| CoyoteBench/fftbench | 0.120 | 0.387 | 3.23× | 0.473 | 3.94× | ok |
| CoyoteBench/huffbench | 0.039 | 0.187 | 4.79× | 0.141 | 3.62× | ok |
| CoyoteBench/lpbench | 0.039 | 0.186 | 4.77× | 0.202 | 5.18× | ok |
| DOE/HACCKernels | 0.113 | 0.405 | 3.58× | 0.356 | 3.15× | ok |
| DOE/HPCCG | 0.750 | 2.153 | 2.87× | 2.203 | 2.94× | ok |
| DOE/PENNANT | 1.795 | 6.183 | 3.44× | 6.287 | 3.50× | ok |
| DOE/miniFE | 0.853 | 3.848 | 4.51× | 3.701 | 4.34× | ok |
| Misc-C++-EH/spirit | 0.721 | 4.039 | 5.60× | 2.922 | 4.05× | ok |
| Misc-C++-Large/ray | 0.105 | 0.444 | 4.23× | 0.331 | 3.15× | ok |
| Misc-C++-Large/sphereflake | 0.101 | 0.726 | 7.19× | 0.344 | 3.41× | ok |
| Misc-C++/bigfib | 0.139 | 0.511 | 3.68× | 0.450 | 3.24× | ok |
| Misc-C++/oopack_v1p8 | 0.037 | 0.197 | 5.32× | 0.152 | 4.11× | ok |
| Misc-C++/stepanov_container | 0.220 | 0.907 | 4.12× | 0.946 | 4.30× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.200 | 5.13× | 0.177 | 4.54× | ok |
| PAQ8p | 0.314 | 3.961 | 12.61× | 1.712 | 5.45× | ok |
| Prolangs-C++/life | 0.009 | 0.094 | — | 0.062 | — | ok |
| Prolangs-C++/ocean | 0.020 | 0.191 | 9.55× | 0.106 | 5.30× | ok |
| Prolangs-C++/primes | 0.007 | 0.036 | — | 0.038 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.177 | 2.60× | 0.209 | 3.07× | ok |
| Shootout-C++/ackermann | 0.077 | 0.207 | 2.69× | 0.243 | 3.16× | ok |
| Shootout-C++/ary3 | 0.081 | 0.218 | 2.69× | 0.246 | 3.04× | ok |
| Shootout-C++/fibo | 0.075 | 0.202 | 2.69× | 0.236 | 3.15× | ok |
| Shootout-C++/hash | 0.126 | 0.407 | 3.23× | 0.462 | 3.67× | ok |
| Shootout-C++/hash2 | 0.120 | 0.396 | 3.30× | 0.414 | 3.45× | ok |
| Shootout-C++/heapsort | 0.096 | 0.219 | 2.28× | 0.234 | 2.44× | ok |
| Shootout-C++/lists | 0.078 | 0.217 | 2.78× | 0.244 | 3.13× | ok |
| Shootout-C++/lists1 | 0.092 | 0.249 | 2.71× | 0.293 | 3.18× | ok |
| Shootout-C++/matrix | 0.069 | 0.197 | 2.86× | 0.282 | 4.09× | ok |
| Shootout-C++/methcall | 0.066 | 0.183 | 2.77× | 0.208 | 3.15× | ok |
| Shootout-C++/moments | 0.094 | 0.284 | 3.02× | 0.307 | 3.27× | ok |
| Shootout-C++/random | 0.081 | 0.186 | 2.30× | 0.234 | 2.89× | ok |
| Shootout-C++/sieve | 0.102 | 0.235 | 2.30× | 0.271 | 2.66× | ok |
| SmallPT | 0.038 | 0.276 | 7.26× | 0.149 | 3.92× | ok |
| Stanford/Bubblesort | 0.010 | 0.051 | 5.10× | 0.047 | 4.70× | ok |
| Stanford/FloatMM | 0.012 | 0.060 | 5.00× | 0.064 | 5.33× | ok |
| Stanford/Puzzle | 0.020 | 0.123 | 6.15× | 0.113 | 5.65× | ok |
| Stanford/Treesort | 0.014 | 0.081 | 5.79× | 0.049 | 3.50× | ok |
| bg/binarytrees/2 | 0.070 | 0.397 | 5.67× | 0.212 | 3.03× | ok |
| bg/fannkuchredux/3 | 0.037 | 0.112 | 3.03× | 0.107 | 2.89× | ok |
| bg/fasta/1 | 0.059 | 0.163 | 2.76× | 0.171 | 2.90× | ok |
| bg/fasta/2 | 0.057 | 0.150 | 2.63× | 0.166 | 2.91× | ok |
| bg/fasta/3 | 0.080 | 0.216 | 2.70× | 0.254 | 3.17× | ok |
| bg/fasta/4 | 0.076 | 0.176 | 2.32× | 0.245 | 3.22× | ok |
| bg/fasta/6 | 0.153 | 0.497 | 3.25× | 0.511 | 3.34× | ok |
| bg/mandelbrot/0 | 0.171 | 0.597 | 3.49× | 0.635 | 3.71× | ok |
| bg/mandelbrot/2 | 0.082 | 0.239 | 2.91× | 0.292 | 3.56× | ok |
| bg/mandelbrot/3 | 0.086 | 0.225 | 2.62× | 0.258 | 3.00× | ok |
| bg/mandelbrot/5 | 0.049 | 0.150 | 3.06× | 0.170 | 3.47× | ok |
| bg/mandelbrot/7 | 0.051 | 0.203 | 3.98× | 0.168 | 3.29× | ok |
| bg/mandelbrot/9 | 0.048 | 0.185 | 3.85× | 0.156 | 3.25× | ok |
| bg/nbody/1 | 0.042 | 0.150 | 3.57× | 0.171 | 4.07× | ok |
| bg/nbody/2 | 0.028 | 0.120 | 4.29× | 0.114 | 4.07× | ok |
| bg/nbody/3 | 0.032 | 0.119 | 3.72× | 0.105 | 3.28× | ok |
| bg/nbody/6 | 0.039 | 0.164 | 4.21× | 0.165 | 4.23× | ok |
| bg/pidigits/4 | 0.110 | 0.315 | 2.86× | 0.395 | 3.59× | ok |
| bg/pidigits/5 | 0.086 | 0.191 | 2.22× | 0.222 | 2.58× | ok |
| bg/revcomp/1 | 0.096 | 0.240 | 2.50× | 0.271 | 2.82× | ok |
| bg/revcomp/5 | 0.082 | 0.231 | 2.82× | 0.279 | 3.40× | ok |
| bg/spectralnorm/1 | 0.113 | 0.331 | 2.93× | 0.332 | 2.94× | ok |
| box2d | 1.676 | 7.246 | 4.32× | 5.703 | 3.40× | ok |
| fmt | 0.995 | 5.020 | 5.05× | 3.746 | 3.76× | ok |
| hexxagon | 0.255 | 0.962 | 3.77× | 1.074 | 4.21× | ok |
| lambda | 0.108 | 0.996 | 9.22× | 0.478 | 4.43× | ok |
| minisat | 0.139 | 0.917 | 6.60× | 0.636 | 4.58× | ok |
| nlohmann-json | 0.747 | 3.399 | 4.55× | 2.949 | 3.95× | ok |
| pugixml | 0.663 | 5.360 | 8.08× | 3.884 | 5.86× | ok |
| pugixml-tests | 4.781 | 33.691 | 7.05× | 24.457 | 5.12× | ok |
| rapidjson | 0.226 | 1.122 | 4.96× | 0.673 | 2.98× | ok |
| re2 | 2.832 | 18.032 | 6.37× | 9.568 | 3.38× | ok |
| re2-test-re2 | 5.742 | 25.650 | 4.47× | 22.210 | 3.87× | ok |
| re2-test-search | 5.904 | 23.553 | 3.99× | 20.907 | 3.54× | ok |
| tramp3d-v4 | 2.556 | 16.872 | 6.60× | 13.221 | 5.17× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.134 | 2.27× | 0.181 | 3.07× | ok |
| Adobe-C++/loop_unroll | 0.035 | 0.099 | 2.83× | 0.099 | 2.83× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.098 | 2.80× | 0.105 | 3.00× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.090 | 2.65× | 0.099 | 2.91× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.065 | 2.10× | 0.084 | 2.71× | ok |
| Adobe-C++/stepanov_vector | 0.055 | 0.119 | 2.16× | 0.189 | 3.44× | ok |
| Bullet | 3.903 | 9.399 | 2.41× | 13.777 | 3.53× | ok |
| CLAMR | 1.925 | 4.330 | 2.25× | 5.680 | 2.95× | ok |
| CoyoteBench/almabench | 0.026 | 0.060 | 2.31× | 0.074 | 2.85× | ok |
| CoyoteBench/fftbench | 0.097 | 0.206 | 2.12× | 0.316 | 3.26× | ok |
| CoyoteBench/huffbench | 0.027 | 0.053 | 1.96× | 0.070 | 2.59× | ok |
| CoyoteBench/lpbench | 0.029 | 0.059 | 2.03× | 0.083 | 2.86× | ok |
| DOE/HACCKernels | 0.112 | 0.248 | 2.21× | 0.286 | 2.55× | ok |
| DOE/HPCCG | 0.561 | 1.268 | 2.26× | 1.705 | 3.04× | ok |
| DOE/PENNANT | 1.323 | 2.667 | 2.02× | 3.420 | 2.59× | ok |
| DOE/miniFE | 0.557 | 1.346 | 2.42× | 1.964 | 3.53× | ok |
| Misc-C++-EH/spirit | 0.287 | 0.838 | 2.92× | 1.024 | 3.57× | ok |
| Misc-C++-Large/ray | 0.107 | 0.233 | 2.18× | 0.256 | 2.39× | ok |
| Misc-C++-Large/sphereflake | 0.081 | 0.188 | 2.32× | 0.230 | 2.84× | ok |
| Misc-C++/bigfib | 0.101 | 0.231 | 2.29× | 0.289 | 2.86× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.057 | 2.11× | 0.075 | 2.78× | ok |
| Misc-C++/stepanov_container | 0.123 | 0.336 | 2.73× | 0.467 | 3.80× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.056 | 2.07× | 0.078 | 2.89× | ok |
| PAQ8p | 0.045 | 0.119 | 2.64× | 0.135 | 3.00× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.015 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.145 | 2.23× | 0.185 | 2.85× | ok |
| Shootout-C++/ackermann | 0.071 | 0.166 | 2.34× | 0.227 | 3.20× | ok |
| Shootout-C++/ary3 | 0.073 | 0.171 | 2.34× | 0.211 | 2.89× | ok |
| Shootout-C++/fibo | 0.072 | 0.163 | 2.26× | 0.220 | 3.06× | ok |
| Shootout-C++/hash | 0.101 | 0.225 | 2.23× | 0.292 | 2.89× | ok |
| Shootout-C++/hash2 | 0.090 | 0.195 | 2.17× | 0.254 | 2.82× | ok |
| Shootout-C++/heapsort | 0.096 | 0.192 | 2.00× | 0.209 | 2.18× | ok |
| Shootout-C++/lists | 0.070 | 0.156 | 2.23× | 0.199 | 2.84× | ok |
| Shootout-C++/lists1 | 0.079 | 0.169 | 2.14× | 0.226 | 2.86× | ok |
| Shootout-C++/matrix | 0.064 | 0.148 | 2.31× | 0.181 | 2.83× | ok |
| Shootout-C++/methcall | 0.068 | 0.140 | 2.06× | 0.179 | 2.63× | ok |
| Shootout-C++/moments | 0.082 | 0.179 | 2.18× | 0.219 | 2.67× | ok |
| Shootout-C++/random | 0.080 | 0.165 | 2.06× | 0.218 | 2.72× | ok |
| Shootout-C++/sieve | 0.081 | 0.180 | 2.22× | 0.225 | 2.78× | ok |
| SmallPT | 0.025 | 0.052 | 2.08× | 0.069 | 2.76× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.021 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.146 | 2.21× | 0.191 | 2.89× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.057 | 1.90× | 0.083 | 2.77× | ok |
| bg/fasta/1 | 0.049 | 0.097 | 1.98× | 0.120 | 2.45× | ok |
| bg/fasta/2 | 0.050 | 0.090 | 1.80× | 0.120 | 2.40× | ok |
| bg/fasta/3 | 0.072 | 0.189 | 2.62× | 0.198 | 2.75× | ok |
| bg/fasta/4 | 0.073 | 0.134 | 1.84× | 0.171 | 2.34× | ok |
| bg/fasta/6 | 0.117 | 0.252 | 2.15× | 0.312 | 2.67× | ok |
| bg/mandelbrot/0 | 0.131 | 0.331 | 2.53× | 0.390 | 2.98× | ok |
| bg/mandelbrot/2 | 0.082 | 0.175 | 2.13× | 0.238 | 2.90× | ok |
| bg/mandelbrot/3 | 0.098 | 0.189 | 1.93× | 0.250 | 2.55× | ok |
| bg/mandelbrot/5 | 0.041 | 0.086 | 2.10× | 0.102 | 2.49× | ok |
| bg/mandelbrot/7 | 0.041 | 0.087 | 2.12× | 0.113 | 2.76× | ok |
| bg/mandelbrot/9 | 0.040 | 0.085 | 2.12× | 0.102 | 2.55× | ok |
| bg/nbody/1 | 0.026 | 0.054 | 2.08× | 0.073 | 2.81× | ok |
| bg/nbody/2 | 0.026 | 0.053 | 2.04× | 0.068 | 2.62× | ok |
| bg/nbody/3 | 0.028 | 0.056 | 2.00× | 0.075 | 2.68× | ok |
| bg/nbody/6 | 0.026 | 0.051 | 1.96× | 0.074 | 2.85× | ok |
| bg/pidigits/4 | 0.126 | 0.255 | 2.02× | 0.342 | 2.71× | ok |
| bg/pidigits/5 | 0.069 | 0.154 | 2.23× | 0.214 | 3.10× | ok |
| bg/revcomp/1 | 0.077 | 0.176 | 2.29× | 0.210 | 2.73× | ok |
| bg/revcomp/5 | 0.071 | 0.151 | 2.13× | 0.180 | 2.54× | ok |
| bg/spectralnorm/1 | 0.106 | 0.224 | 2.11× | 0.266 | 2.51× | ok |
| box2d | 1.316 | 2.696 | 2.05× | 2.963 | 2.25× | ok |
| fmt | 0.430 | 1.052 | 2.45× | 1.567 | 3.64× | ok |
| hexxagon | 0.209 | 0.543 | 2.60× | 0.646 | 3.09× | ok |
| lambda | 0.035 | 0.104 | 2.97× | 0.125 | 3.57× | ok |
| minisat | 0.045 | 0.110 | 2.44× | 0.152 | 3.38× | ok |
| nlohmann-json | 0.321 | 0.744 | 2.32× | 1.268 | 3.95× | ok |
| pugixml | 0.197 | 0.481 | 2.44× | 0.735 | 3.73× | ok |
| pugixml-tests | 2.683 | 6.935 | 2.58× | 8.212 | 3.06× | ok |
| rapidjson | 0.085 | 0.201 | 2.36× | 0.275 | 3.24× | ok |
| re2 | 2.592 | 6.595 | 2.54× | 5.373 | 2.07× | ok |
| re2-test-re2 | 4.230 | 9.104 | 2.15× | 12.931 | 3.06× | ok |
| re2-test-search | 3.586 | 9.157 | 2.55× | 13.243 | 3.69× | ok |
| tramp3d-v4 | 0.551 | 1.972 | 3.58× | 1.402 | 2.54× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
