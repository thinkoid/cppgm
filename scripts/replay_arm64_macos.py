#!/usr/bin/env python3
"""Package Mach-O objects on the cross host and qualify them with Apple's SDK."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import platform
import shutil
import tempfile

from check_arm64_macos import execute, run


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def build(directory, compiler):
    root = Path(__file__).resolve().parent.parent / "pa39"
    clang = os.getenv("CPPGM_AARCH64_CLANG", "clang++")
    cross = platform.system() == "Linux"
    manifest = {"objects": {}, "programs": [], "executables": {}}
    directory.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="cppgm-macho-cross-") as temp:
        scratch = Path(temp)
        for expect in sorted((root / "tests").glob("*/*.arm-expect")):
            spec = json.loads(expect.read_text())
            if not spec.get("macos") and spec.get("platform") != "macos":
                continue
            fixture = expect.with_suffix(".t")
            peer = spec.get("peer") or spec.get("hosted_peer")
            for level in range(4):
                units = [fixture] + ([root / "support" / peer] if peer else [])
                for tool, label in [(compiler, "cppgm"), (clang, "clang")]:
                    for i, unit in enumerate(units):
                        name = f"{fixture.stem}-O{level}-{label}-{i}.o"
                        path = directory / name
                        run(tool, "--target=arm64-apple-macos11", f"-O{level}", *spec.get("flags", []),
                            *(["-fno-stack-protector"] if not spec.get("hosted_peer") else []), "-x", "c++", "-c", unit, "-o", path)
                        manifest["objects"][name] = digest(path)
                pairs = [("cppgm", "clang"), ("clang", "cppgm"), ("clang", "clang"), ("cppgm", "cppgm")] if peer else [
                    ("clang",), ("cppgm",)]
                for producers in pairs:
                    names = [f"{fixture.stem}-O{level}-{label}-{i}.o" for i, label in enumerate(producers)]
                    manifest["programs"].append({"inputs": names, "exit": spec["exit"]})
                    if not spec.get("hosted_peer") and all(label == "cppgm" for label in producers):
                        run(compiler, "--target=arm64-apple-macos11", *(directory / name for name in names),
                            "-o", scratch / "program")
                        name = f"{fixture.stem}-O{level}"
                        execute(scratch, spec["exit"], not cross, clang)
                        shutil.copy2(scratch / "program", directory / name)
                        manifest["executables"][name] = {"sha256": digest(directory / name), "exit": spec["exit"]}
                    if cross and not spec.get("hosted_peer"):
                        run(clang, "--target=arm64-apple-macos11", "-nostdlib", "-fuse-ld=lld",
                            *(directory / name for name in names), "-o", scratch / "program")
                        execute(scratch, spec["exit"], False, clang)
    if not manifest["programs"]:
        raise ValueError("no macOS controls discovered")
    (directory / "manifest.json").write_text(json.dumps(manifest, indent=2, sort_keys=True) + "\n")
    print(f"Packaged {len(manifest['objects'])} objects for {len(manifest['programs'])} Apple Silicon executions")


def replay(directory):
    if (platform.system(), platform.machine()) != ("Darwin", "arm64"):
        raise SystemExit("native replay requires Apple Silicon macOS")
    manifest = json.loads((directory / "manifest.json").read_text())
    for name, expected in manifest["objects"].items():
        if digest(directory / name) != expected:
            raise ValueError(f"checksum mismatch for {name}")
    with tempfile.TemporaryDirectory(prefix="cppgm-macho-native-") as temp:
        scratch = Path(temp)
        for name, expected in manifest["executables"].items():
            binary = directory / name
            if digest(binary) != expected["sha256"]:
                raise ValueError(f"checksum mismatch for {name}")
            shutil.copy2(binary, scratch / "program")
            (scratch / "program").chmod(0o755)
            execute(scratch, expected["exit"], True, None)
        for program in manifest["programs"]:
            inputs = [directory / name for name in program["inputs"]]
            print("Link and execute", *(path.name for path in inputs), flush=True)
            run("xcrun", "--sdk", "macosx", "clang++", "-arch", "arm64", "-mmacosx-version-min=11.0",
                *inputs, "-o", scratch / "program")
            execute(scratch, program["exit"], True, None)
    print(f"Passed {len(manifest['programs'])} native macOS executions")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("mode", choices=["build", "replay"])
    parser.add_argument("directory", type=Path)
    parser.add_argument("--compiler", type=Path, default=Path("dev/cppgm"))
    args = parser.parse_args()
    if args.mode == "build":
        build(args.directory.resolve(), args.compiler.resolve())
    else:
        replay(args.directory.resolve())
