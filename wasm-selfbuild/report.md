# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 9V74 80-Core Processor | `50b6ccfce` | [Results](epyc/report.md) |
| Intel (CI) | Intel(R) Xeon(R) Platinum 8370C CPU @ 2.80GHz | `33a92f123` | [Results](github-intel/report.md) |
