# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 9V74 80-Core Processor | `fd8d08c23` | [Results](epyc/report.md) |
| Intel (CI) | Intel(R) Xeon(R) 6975P-C | `bb0980105` | [Results](github-intel/report.md) |
