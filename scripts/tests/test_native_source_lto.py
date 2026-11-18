#!/usr/bin/env python3
"""Check source LTO through the native driver and both ELF link paths."""

import os
import platform
import shlex
import subprocess
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
COMPILER = ROOT / "dev/cppgm"
FLAGS = ("--target=x86_64-linux-gnu", "-std=c++17", "-O3")


@unittest.skipUnless(platform.system() == "Linux" and platform.machine() == "x86_64",
                     "requires Linux x86-64")
class NativeSourceLto(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        if not COMPILER.is_file():
            subprocess.run(["make", "-C", ROOT / "dev", "cppgm"], check=True)

    def setUp(self):
        directory = tempfile.TemporaryDirectory()
        self.addCleanup(directory.cleanup)
        self.directory = Path(directory.name)
        (self.directory / "first.cpp").write_text("""
extern int next(int);
static int scale(int x) { return x * 3; }
inline int value = 7;
int main() { return next(scale(value)) != 35; }
""")
        (self.directory / "second.cpp").write_text("""
static int scale(int x) { return x + 3; }
inline int value = 7;
__attribute__((weak)) int adjustment() { return 0; }
int next(int x) { return scale(x) + value + adjustment(); }
""")
        (self.directory / "override.cpp").write_text("""
int adjustment() { return 4; }
""")

    def run_command(self, args, success=True):
        result = subprocess.run(args, cwd=self.directory, capture_output=True, text=True, timeout=30)
        if success:
            self.assertEqual(result.returncode, 0, result.stderr)
        return result

    def test_direct_link_with_an_existing_object(self):
        self.run_command([COMPILER, *FLAGS, "-c", "override.cpp", "-o", "override.obj"])
        self.run_command([COMPILER, *FLAGS, "-flto=full", "first.cpp", "second.cpp",
                          "override.obj", "-o", "program"])
        self.run_command(["./program"])

    def test_combined_host_object(self):
        self.run_command([COMPILER, *FLAGS, "-flto=full", "-c", "first.cpp", "second.cpp",
                          "-o", "combined.o"])
        host = shlex.split(os.environ.get("CPPGM_HOST_CXX") or os.environ.get("CXX") or "g++")
        self.run_command([*host, "combined.o", "override.cpp", "-o", "program"])
        self.run_command(["./program"])
        disassembly = self.run_command(["objdump", "-dr", "--disassemble=main", "combined.o"]).stdout
        self.assertIn("<main>:", disassembly)
        self.assertNotIn("_Z4nexti", disassembly)

    def test_source_group_errors_and_disable_flag(self):
        self.run_command([COMPILER, *FLAGS, "-c", "override.cpp", "-o", "override.obj"])
        result = self.run_command([COMPILER, *FLAGS, "-flto=full", "first.cpp", "override.obj",
                                   "second.cpp", "-o", "program"], success=False)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn("needs consecutive source inputs", result.stderr)
        self.run_command([COMPILER, *FLAGS, "-flto=full", "-fno-lto", "first.cpp",
                          "override.obj", "second.cpp", "-o", "program"])
        self.run_command(["./program"])
        result = self.run_command([COMPILER, *FLAGS, "-flto=full", "-c", "first.cpp", "second.cpp"],
                                  success=False)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn("requires source inputs and an explicit -o", result.stderr)

    def test_always_inline_copies_are_local_to_each_source(self):
        sources = []
        declarations = []
        checks = []
        for index in range(24):
            source = f"unit{index:02}.cpp"
            function = f"test{index:02}"
            (self.directory / source).write_text(f"""
static __attribute__((always_inline)) inline int value() {{ return {10 + index}; }}
int {function}() {{ return value(); }}
""")
            sources.append(source)
            declarations.append(f"int {function}();")
            checks.append(f"{function}() != {10 + index}")
        (self.directory / "main.cpp").write_text(
            "\n".join(declarations) + "\nint main() { return " + " || ".join(checks) + "; }\n")
        self.run_command([COMPILER, *FLAGS, "-flto=full", "main.cpp", *sources, "-o", "program"])
        self.run_command(["./program"])

    def test_thread_local_initialization_stays_local_to_each_source(self):
        (self.directory / "first.cpp").write_text("""
int observed;
int init() { return ++observed; }
thread_local int a = init();
int get_a() { return a; }
extern int get_b();
int main() {
    if (get_a() != 1 || observed != 1) return 1;
    if (get_b() != 2 || observed != 2) return 2;
    return 0;
}
""")
        (self.directory / "second.cpp").write_text("""
extern int init();
thread_local int b = init();
int get_b() { return b; }
""")
        self.run_command([COMPILER, *FLAGS, "-flto=full", "first.cpp", "second.cpp", "-o", "program"])
        self.run_command(["./program"])


if __name__ == "__main__":
    unittest.main()
