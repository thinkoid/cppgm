#!/usr/bin/env python3
"""Check Mach-O and the Apple PCS by exchanging objects with Clang."""
import hashlib
import json
import os
from pathlib import Path
import platform
import struct
import subprocess
import sys
import tempfile


def run(*args, cwd=None, expected=0):
    completed = subprocess.run(args, cwd=cwd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, timeout=90)
    if completed.returncode != expected:
        raise RuntimeError(f"{list(map(str, args))} returned {completed.returncode}, expected {expected}\n"
                           + completed.stdout.decode(errors="replace") + completed.stderr.decode(errors="replace"))
    return completed.stdout.decode()


def verify_signature(image, start, size):
    blob = memoryview(image)[start:start + size]
    magic, length, count = struct.unpack_from(">3I", blob)
    if magic != 0xfade0cc0 or length > len(blob):
        raise ValueError("invalid embedded signature")
    for index in range(count):
        kind, offset = struct.unpack_from(">2I", blob, 12 + 8 * index)
        if kind != 0:
            continue
        directory = blob[offset:length]
        magic, directory_length, _, _, hashes, _, _, slots, limit = struct.unpack_from(">9I", directory)
        width, algorithm, _, shift = struct.unpack_from("4B", directory, 36)
        page = 1 << shift
        if (magic, width, algorithm) != (0xfade0c02, 32, 2) or limit != start:
            raise ValueError("invalid primary SHA-256 code directory")
        if slots != (limit + page - 1) // page or hashes + slots * width > directory_length:
            raise ValueError("invalid number of code signature slots")
        for slot in range(slots):
            begin = slot * page
            digest = hashlib.sha256(image[begin:min(limit, begin + page)]).digest()
            if digest != directory[hashes + slot * width:hashes + (slot + 1) * width]:
                raise ValueError(f"Mach-O code signature mismatch on page {slot}")
        return
    raise ValueError("missing primary code directory")


def macho_image(path):
    image = path.read_bytes()
    magic, cpu, _, kind, count = struct.unpack_from("<5I", image)
    assert (magic, cpu, kind) == (0xfeedfacf, 0x100000c, 2), "expected an arm64 Mach-O executable"
    offset = 32
    segments = []
    initializers = []
    entry = signature = None
    for _ in range(count):
        command, size = struct.unpack_from("<II", image, offset)
        if command == 0x19:
            name, address, memory, start, length, _, protection = struct.unpack_from("<16s4Q2I", image, offset + 8)
            section_count, = struct.unpack_from("<I", image, offset + 64)
            for section in range(section_count):
                record = offset + 72 + section * 80
                section_size, file_offset = struct.unpack_from("<QI", image, record + 40)
                flags, = struct.unpack_from("<I", image, record + 64)
                kind = flags & 255
                if kind in (9, 0x16):
                    width = 8 if kind == 9 else 4
                    for position in range(file_offset, file_offset + section_size, width):
                        address_or_offset = int.from_bytes(image[position:position + width], "little")
                        initializers.append((kind, address_or_offset))
            name = name.rstrip(b"\0")
            if name not in (b"__LINKEDIT", b"__PAGEZERO"):
                segments.append((name, address, memory, start, length, protection))
        elif command == 0x80000028:
            entry, = struct.unpack_from("<Q", image, offset + 8)
        elif command == 0x1d:
            signature, length = struct.unpack_from("<II", image, offset + 8)
            verify_signature(image, signature, length)
        offset += size
    assert entry is not None and signature and any(s[0] == b"__TEXT" for s in segments)
    return entry, segments, initializers


def execute(directory, status, native, clang):
    binary = directory / "program"
    entry, segments, initializers = macho_image(binary)
    if native:
        run("codesign", "--verify", "--strict", binary)
        run(binary, expected=status)
        return
    # The SDK-free fixture has no dynamic imports or startup routine. Embed
    # its unchanged loadable segments at their preferred addresses and call
    # LC_MAIN from a Linux ELF entry point. dyld/SDK tests run on macOS.
    addresses = []
    assembly = []
    for index, (name, address, memory, start, size, protection) in enumerate(segments):
        section = f".guest{index}"
        flags = "aw" if protection & 2 else "ax" if protection & 4 else "a"
        assembly.extend([f'.section {section},"{flags}",%progbits', f'.incbin "program",{start},{size}',
                         f'.space {memory-size}'])
        addresses.append(f"--section-start={section}={address:#x}")
        if name == b"__TEXT":
            text_base = address - start
            main = text_base + entry
    assembly.extend([".text", ".globl _start", "_start:"])
    for kind, value in initializers:
        address = value if kind == 9 else text_base + value
        assembly += [f"ldr x16, ={address:#x}", "blr x16"]
    assembly.extend([f"ldr x16, ={main:#x}", "blr x16", "mov x8, #93", "svc #0"])
    (directory / "launch.S").write_text("\n".join(assembly) + "\n")
    run(clang, "--target=aarch64-linux-gnu", "-c", "launch.S", "-o", "launch.o", cwd=directory)
    run(os.getenv("CPPGM_AARCH64_LLD", "ld.lld"), "-static", "-e", "_start", *addresses,
        "launch.o", "-o", "linux-launch", cwd=directory)
    run(os.getenv("CPPGM_AARCH64_QEMU", "qemu-aarch64"), "-cpu", "max", directory / "linux-launch",
        expected=status)


def check(compiler, fixture, directory):
    spec = json.loads(fixture.with_suffix(".arm-expect").read_text())
    peer = fixture.parents[2] / "support" / spec["peer"]
    suffix = compiler.name.removeprefix("cppgm")
    opt = compiler.with_name("lowiropt" + suffix)
    backend = compiler.with_name("lowir2native" + suffix)
    clang = os.getenv("CPPGM_AARCH64_CLANG", "clang++")
    inspect = os.getenv("CPPGM_AARCH64_READOBJ", "llvm-readobj")
    native = platform.system() == "Darwin" and platform.machine() == "arm64"
    target = "--target=arm64-apple-macos11"
    link_flags = [] if native else ["-nostdlib"]
    for level in range(4):
        flags = [target, f"-O{level}"]
        for producer, tool in [("clang", clang), ("cppgm", compiler)]:
            for unit, src in [("callee", fixture), ("caller", peer)]:
                obj = directory / f"{producer}-{unit}.o"
                run(tool, *flags, "-x", "c++", "-c", src, "-o", obj)
                header = run(inspect, "--file-headers", "--relocations", obj)
                assert "Mach-O arm64" in header
                if unit == "caller":
                    assert "ARM64_RELOC_BRANCH26" in header
                if producer == "cppgm":
                    for optimized in (False, True):
                        mode = [f"-O{level}", "-S", "-emit-lowir"] if optimized else ["-O0", "--emit-lowir", "-g0"]
                        run(compiler, target, *mode, "-x", "c++", src, "-o", directory / "unit.lowir")
                        ir = directory / f"{unit}.lowir"
                        run(opt, "-O0", directory / "unit.lowir", "-o", ir)
                        assert "arm64_macos" in ir.read_text()
                        if not optimized:
                            (directory / f"{unit}-raw.lowir").write_bytes(ir.read_bytes())
                        run(compiler, *flags, *(["-fno-lowir-passes"] if optimized else []),
                            "-c", ir, "-o", directory / "round.o")
                        assert obj.read_bytes() == (directory / "round.o").read_bytes(), (unit, level, optimized)
        for caller, callee in [("clang", "clang"), ("cppgm", "clang"), ("clang", "cppgm"), ("cppgm", "cppgm")]:
            other = directory / f"{callee}-callee.o"
            tool = clang if caller == "clang" and callee == "clang" else compiler
            extra = ["-fuse-ld=lld"] if tool == clang and not native else []
            run(tool, target, *extra, *link_flags, directory / f"{caller}-caller.o", other, "-o", directory / "program")
            execute(directory, spec["exit"], native, clang)
        run(backend, target, *link_flags, f"-O{level}", directory / "caller-raw.lowir",
            directory / "clang-callee.o", "-o", directory / "program")
        execute(directory, spec["exit"], native, clang)


if __name__ == "__main__":
    with tempfile.TemporaryDirectory(prefix="cppgm-arm64-macos-") as temp:
        check(Path(sys.argv[1]).absolute(), Path(sys.argv[2]).resolve(), Path(temp))
    print("AArch64 control passed")
