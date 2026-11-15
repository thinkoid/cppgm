# Embedding the LowIR backend

The optional `libcppgm_lowir` library lets another frontend construct typed
LowIR and obtain a host-linkable x86-64 object in the same process. The library
uses the compiler's existing model, validator, optimizer and object emitter.
It contains no source frontend, LowIR text reader or command-line driver.

Build both library forms and run the C consumer checks:

```sh
make -C dev lowir-library
make test-lowir-library
```

This produces `dev/libcppgm_lowir.a` and `dev/libcppgm_lowir.so` (or `.dylib`
on macOS). Its objects use a separate `obj/lowir-library` directory and PIC;
normal tool and self-host objects keep their existing flags. Choose a host
compiler and standard library consistently, passing `CXX`, `CPPGM_HOST_CXX`
and `CPPGM_STDLIB_FLAGS` as with a normal build.

The public C header is [`dev/src/lowir_interface.h`](../dev/src/lowir_interface.h).
A complete C producer is in
[`pa27/tests/lowir-library/client.c`](../pa27/tests/lowir-library/client.c).
Compile C sources with a C compiler; link with the C++ host driver. For example:

```sh
cc -std=c11 -Idev/src -c producer.c -o producer.o
g++ producer.o dev/libcppgm_lowir.a -pthread -o producer
# Or use -Ldev -lcppgm_lowir and configure the shared library's loader path.
```

## Producer sequence

1. Create a module with `CPPGM_LOWIR_ABI_VERSION` and its target:
   `CPPGM_TARGET_LINUX` (ELF) or `CPPGM_TARGET_MACOS` (Mach-O). Both targets use
   the x86-64 object backend.
2. Intern top-level symbols once; IDs support forward references. Add function
   signatures from numeric type records. Define local functions directly and
   declare unresolved externals before compilation. A declaration can also be
   upgraded to a definition with the same signature ID. Functions use C language
   linkage unless `cppgm_lowir_symbol_fact` states another. Conventional
   entry/init/fini roles are applied as by the text reader.
3. Supply structured global initializers. For each function, reserve writable
   instruction, operand, literal, slot and layout buffers with
   `cppgm_lowir_body_reserve`. Write records directly into those library-owned
   pools. Allocate dense temporary IDs only when emitting definitions; parameters
   come first. An instruction's construction-time `location` carries its block
   ID. Supply the block-layout permutation and commit the initialized counts with
   `cppgm_lowir_body_commit`. Commit binds definition metadata and block links
   in place; it neither copies records nor remaps IDs.
4. Compile at O0–O3. The library validates construction once, runs the ordinary
   optimizer, selects and encodes functions, and releases their bodies.
5. Read the module-owned object byte buffer. Write or link those bytes using
   the embedding application's existing object/link workflow, then destroy the
   module. There are no subprocesses or temporary files inside the library.

The authoritative records and batched construction contract live in the shipped
LowIR scaffold, `dev/src/lowir_records.h` and `dev/src/lowir_interface.h`. The compiler builder, optimizer,
backends and foreign API use these same types. C uses the fixed-width projection
of the same declarations; its enum constants are generated from `lowir_model.h`,
`ir_symbol_model.h` and `asm_model.h` (`dev/src/lowir_c_vocabulary.h`).
No duplicate private/wire layouts, per-instruction adapter or offset matching is
needed. ABI version 2 replaces the prototype copying body API. C/C++ producers
write typed records directly; foreign FFI producers use corresponding stores.
Pointers expire on reserve, commit, compilation or destruction; IDs survive growth.

Provide known capacity hints to reserve once. Otherwise pools grow geometrically,
which may relocate their allocations. There is no second retained instruction
or operand representation and no instruction interning, parsing, flattening or
ID-remapping pass. Commit performs one metadata-binding pass, followed by the
shared structural validator before compilation.

Symbol strings, signature parameters and global initializer arrays are copied
once. Object encoding and the caller's eventual file write remain necessary work.

`cppgm_lowir_write` is an optional diagnostic view through the existing writer.
It uses the same program as compilation and must run before compilation consumes
it. The course lane checks behavior. Maintainers can additionally run
`python3 scripts/test_lowir_library.py --exact-objects` to check this solution
against its CLI byte for byte for both ELF and Mach-O.

Each module owns independent state. Serialize calls on one module. Separate
modules can construct and validate concurrently; compilation calls serialize
inside the library because the existing optimizer and register allocator reuse
process-wide scratch buffers. The lock is taken once per object. Concurrent
optimization/emission will need explicit per-compilation scratch ownership. Failures return a status or `CPPGM_NO_ID`, preserve a
module-owned diagnostic, and poison that module. Inspect the error and destroy
it. Exceptions from the compiler are contained at the foreign boundary.
A failed creation returns null. The object buffer lives until module destruction;
compilation is allowed once.

## Names and versions

Every number that an argument or a record field takes has a name. The
vocabulary's numbers are the generated enumerators of `lowir_c_vocabulary.h`:
`CPPGM_TYPE_*`, `CPPGM_OP_*`, `CPPGM_VALUE_*`, `CPPGM_FLAG_*`, `CPPGM_DATA_*`,
`CPPGM_BINDING_*`, `CPPGM_STORAGE_*`, `CPPGM_ARITY_*` and the others.
`lowir_interface.h` names the rest: `CPPGM_TARGET_*`, `CPPGM_FUNCTION_*`,
`CPPGM_GLOBAL_*` and `CPPGM_CODE_*`.

`cppgm_lowir_abi_version()` returns the library's `CPPGM_LOWIR_ABI_VERSION`.
`cppgm_lowir_version()` returns the cppgm release of the library, such as
`"0.9.2"`; `cppgm --version` prints the same release. Neither function needs a
module. A client that loads the library at run time compares
`cppgm_lowir_abi_version()` with the version it was written for.
`cppgm_lowir_create` accepts `CPPGM_LOWIR_ABI_VERSION_MIN` to
`CPPGM_LOWIR_ABI_VERSION`.

## ABI version 3

Version 3 adds functions and records to version 2. It changes no function or
record of version 2: a version 2 client works with a version 3 library.

| Addition | Functions | LowIR text |
| --- | --- | --- |
| Boundary metadata | `cppgm_lowir_boundary` | `arity=`, `effects=`, `unwind=`, `return=`, `repeatable=`, `noalias_result=`, `this_return=`, `result_classes=`, `result_shape=`; parameter `pass=`, `alias=`, `object_bytes=`, `classes=`, `shape=` |
| Symbol metadata | `cppgm_lowir_symbol_fact`, `cppgm_lowir_symbol_name` | `role=`, `linkage=`, `binding=`, `storage=`, `tls_for=`, `keep_alias=` to `cold=`; `object=`, `section=` |
| Argument facts | `cppgm_lowir_body_argument_facts` | call `classes=N:`, `argument_type=N:`, `argument_shape=N:`; `va_arg` `classes=`, `shape=` |
| Assembly templates | `cppgm_lowir_assembly` | `assembly @name ... { ... }`, invoked by an `asm` instruction |
| Debug information | `cppgm_lowir_debug_file`, `cppgm_lowir_function_location`, `cppgm_lowir_body_locations`, `cppgm_lowir_debug_type`, `cppgm_lowir_debug_scope`, `cppgm_lowir_debug_local` | `!dbg(file, line, column, scope)`, `debug_type`, `debug_scope`, `debug_local` |

`cppgm_lowir_boundary` returns a signature ID, as `cppgm_lowir_signature` does.
Use it for a function, or for a call that sets `CPPGM_FLAG_SIGNATURE`.
`CPPGM_CLASSES(first, second)` makes the `classes=` value of a direct object
from the classes of its two eightbytes.

State symbol metadata after `cppgm_lowir_function` or `cppgm_lowir_global`
declares the symbol. State argument facts and instruction locations after
`cppgm_lowir_body_commit`; both name an instruction by its position in the
instruction buffer.

An `asm` instruction has `CPPGM_OP_ASM`, type void, the template ID in
`immediate` and its arguments in the operand pool. [The assembly
boundary](../pa29/assembly.md) describes the template records. Assembly-defined
functions and ordered module assembly are not in the library.

Debug type and scope IDs count from 1, and 0 is absent. The object has line
tables when locations exist. It has source types, lexical blocks and locals when
a debug type, scope or local exists.

The library accepts a record when the LowIR text can state it. The text that
`cppgm_lowir_write` writes then reads back as the same program:
`cppgm -c module.lowir` makes the object that `cppgm_lowir_compile` makes.
`python3 scripts/tests/test_lowir_library_extensions.py` checks this for the
additions of version 3, with the client
[`scripts/tests/lowir_library_extensions.c`](../scripts/tests/lowir_library_extensions.c).

## ABI version 4

Version 4 adds record types to version 3 and changes nothing in it.
`cppgm_lowir_record` takes an object's size, alignment and fields, and returns
a type of kind `CPPGM_TYPE_RECORD`. A field is an offset, a type and an element
count (0 is one). Its type is a scalar type or an earlier record type. Fields can
overlap (a union). A field that is not at a multiple of its type's alignment
makes a packed record.

A record type can be used wherever the library takes a type: in signatures,
boundaries, globals, data items, and the instruction and slot records of a body.
The library replaces it with `obj<bytes x align>`. It passes and returns an
object of a record type directly, with the classes that the System V psABI
gives a C object with the same fields:

| Use | Classes in the LowIR text |
| --- | --- |
| Parameter of a signature or boundary | parameter `classes=` |
| Result of a signature or boundary | `result_classes=` |
| Call argument after a variadic boundary's fixed parameters | call `classes=N:` |
| `va_arg` result | `va_arg` `classes=` |

A boundary parameter, a boundary result or an argument fact that states classes
keeps them. An object of more than 16 bytes keeps the default classes, which
pass and return it in memory. A record that C returns in memory, such as a packed
record, has `result_classes=memory`: the caller passes the result address.
The LowIR text has no record types. `cppgm_lowir_write` writes `obj` types
and the classes. `python3 scripts/tests/test_lowir_library_records.py` links
the library's object with C code that passes records of nine layouts, with the
client [`scripts/tests/lowir_library_records.c`](../scripts/tests/lowir_library_records.c).

The library does not expose Wasm object generation. PA27 owns the optional O0
library lane and PA33 adds O1–O3;
[the student contract](../pa27/lowir-library.md) describes the shared interface.
The course lane does not use the additions of versions 3 and 4.
These checks remain outside default assignment reports. The myc integration and
its timing comparisons are separate maintainer work, with no course dependency
on Crystal or myc.
