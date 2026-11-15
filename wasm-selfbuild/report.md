# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 7763 64-Core Processor | `13d6afdf5` | [Results](epyc/report.md) |
| Intel (CI) | Intel(R) Xeon(R) 6975P-C | `f9e97b328` | [Results](github-intel/report.md) |
