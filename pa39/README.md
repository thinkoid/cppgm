## PA39 — AArch64 Linux backend (experimental)

Implement the little-endian Armv8-A Linux target in the existing compiler after PA34 and PA37. The target has LP64 pointers and integers, unsigned plain char and 32-bit unsigned wchar_t, binary128 long double, and 16-byte stack alignment. Use the Linux AAPCS64 calling convention and AAELF64 relocatable objects. Use a distinct target profile (`aarch64` in version-one LowIR) selected before parsing. Keep architecture-specific instructions and their encoder under `dev/src/aarch64/`. The frontend and optimizer pass typed data directly to the selector. [AAPCS64](https://github.com/ARM-software/abi-aa/blob/main/aapcs64/aapcs64.rst) · [AAELF64](https://github.com/ARM-software/abi-aa/blob/main/aaelf64/aaelf64.rst)

### Compile and run

```sh
cppgm --target=aarch64-linux-gnu -O2 -c sum.cpp -o sum.o
cppgm --target=aarch64-linux-gnu sum.o main.o -o program
qemu-aarch64 -cpu cortex-a53 ./program
cppgm --target=aarch64-linux-gnu -S -emit-lowir -O2 main.cpp -o main.lowir
lowir2native --target=aarch64-linux-gnu main.lowir -o main
```

### Test from x86 Linux

Use Clang, LLD and llvm-readobj with the AArch64 target enabled and the `qemu-aarch64` Linux user emulator. The first verified configuration uses LLVM 22.1.2 and QEMU 10.2.1. Static tests need no target sysroot. The runner accepts the paths in `CPPGM_AARCH64_CLANG`, `CPPGM_AARCH64_LLD`, `CPPGM_AARCH64_READOBJ` and `CPPGM_AARCH64_QEMU`. Run `make test-pa39` from the root or `make check TEST=tests/control/300-mixed-loop.t` here. This assignment is opt-in.

Each fixture declares its expected exit status. The checker compiles at O0 through O3, inspects the object format, tests LowIR serialization, and executes the linked code. Mixed-object fixtures exchange caller and callee between cppgm and Clang. The checked-in entry stub lets LLD link the same objects independently. A full Clang build supplies a third observation. Code quality checks should bound work, memory traffic and size in named functions. Collect runtime measurements on AArch64 hardware.

### Implementation coverage

The initial fixtures cover scalar integer and pointer calls, loops, comparisons, conditional control, loads and stores, separate ELF objects, and static process startup. Additional ABI, runtime, and optimized machine operations join the corresponding fixture lanes as they are qualified.

### Cross-tool setup and native replay

The reference lane uses LLVM 22.1.2, QEMU user-mode 10.2.1 (Cortex-A53),
GCC 14.3 AArch64 builtins and the GNU/Linux AArch64 C++ static runtime.
On Ubuntu 26.04 install `clang-22 lld-22 llvm-22 qemu-user
libgcc-14-dev-arm64-cross libstdc++-14-dev-arm64-cross libc6-dev-arm64-cross`.
Use the suffixed LLVM tool names in the checker variables if your PATH lacks
the unsuffixed commands. `CPPGM_AARCH64_OBJDUMP` selects llvm-objdump and
`CPPGM_AARCH64_AR` selects llvm-ar. The libgcc and hosted unwinding controls
use `CPPGM_AARCH64_BUILTINS` and `CPPGM_AARCH64_SDK_ROOT`. These default
to the GCC 14 Arm cross archive and the installed Debian-style sysroot layout
under `/`. Integer and control-flow fixtures use only the LLVM tools and QEMU.

The mixed ABI controls also cover homogeneous four-float records, indirect
aggregate results, variadic GP and vector save areas, i128 arithmetic and
binary128 helper calls. The link controls check GOT addressing, lazy archive
member selection, and DWARF unwinding through a cppgm frame. The memory lane
checks acquire/release, exclusive updates and compare-exchange. At O1 through
O3 the integer leaf kernel must execute entirely in registers.

To save the exact guests that passed on the cross host:

```sh
CPPGM_AARCH64_ARTIFACTS="$PWD/obj/pa39-guests" make test-pa39
```

Copy that directory to Linux AArch64 and run
`perl scripts/replay_aarch64.pl obj/pa39-guests`. Each manifest records the
SHA-256, exit status, optimization level, producers and linker. Native replay
checks the digest and status for every recorded execution.
