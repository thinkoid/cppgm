"""Exercise the actual WASI heap policy with bounded, deterministic memory calls."""
import os
from pathlib import Path
import shlex
import signal
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]


class WasiHeap(unittest.TestCase):
    def test_contiguous_break_growth_budget_fallback_and_failures(self):
        with tempfile.TemporaryDirectory() as directory:
            executable = Path(directory) / 'wasi-heap'
            object_file = Path(directory) / 'wasi-heap.o'
            compiler = shlex.split(os.environ.get('CPPGM_HOST_CXX', 'c++'))
            flags = ['-std=c++11', *shlex.split(os.environ.get('CPPGM_STDLIB_FLAGS', ''))]
            subprocess.run([*compiler, *flags, '-D__wasi__',
                            '-Dsbrk=cppgm_test_sbrk',
                            '-D__builtin_wasm_memory_size=cppgm_test_memory_size',
                            '-D__builtin_wasm_memory_grow=cppgm_test_memory_grow',
                            '-include', str(ROOT / 'scripts/tests/wasi_heap_mock.h'),
                            '-c', str(ROOT / 'dev/src/support/wasi_heap.cpp'), '-o', str(object_file)], check=True)
            subprocess.run([*compiler, *flags, str(ROOT / 'scripts/tests/wasi_heap_host.cpp'),
                            str(object_file), '-o', str(executable)], check=True)
            for mode in ['growth', 'overflow']:
                with self.subTest(mode=mode):
                    subprocess.run([str(executable), mode], check=True)
            if os.name == 'posix':
                import resource
                def no_core():
                    resource.setrlimit(resource.RLIMIT_CORE, (0, 0))
                for mode in ['negative', 'unaligned']:
                    with self.subTest(mode=mode):
                        result = subprocess.run([str(executable), mode], preexec_fn=no_core, capture_output=True)
                        self.assertEqual(result.returncode, -signal.SIGABRT)


if __name__ == '__main__':
    unittest.main()
