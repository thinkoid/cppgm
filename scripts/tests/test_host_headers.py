#!/usr/bin/env python3
"""cppgm's --gcc-install-dir: the standard directories of a named GCC installation."""
from pathlib import Path
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]
COMPILER = ROOT / 'dev/cppgm'
TRIPLE = 'x86_64-test-linux'
VERSION = '99.1'
# Each directory of the installation defines its own macro; all define ORDER.
SOURCE = '''#include <order.h>
#include <library.h>
#include <target.h>
#include <backward.h>
#include <internal.h>
#if ORDER != 1 || LIBRARY + TARGET + BACKWARD + INTERNAL != 4
#error another directory order
#endif
'''


def installation(prefix, debian):
    """A GCC installation under `prefix` without real headers; `debian` selects that layout of the target's library."""
    directory = prefix / 'lib/gcc' / TRIPLE / VERSION
    library = prefix / 'include/c++' / VERSION
    target = prefix / 'include' / TRIPLE / 'c++' / VERSION if debian else library / TRIPLE
    for order, (path, name) in enumerate(((library, 'library'), (target, 'target'), (library / 'backward', 'backward'),
                                          (directory / 'include', 'internal')), 1):
        path.mkdir(parents=True)
        (path / (name + '.h')).write_text('#define %s 1\n' % name.upper())
        (path / 'order.h').write_text('#ifndef ORDER\n#define ORDER %d\n#endif\n' % order)
    return directory


def compile_with(work, *options):
    (work / 'source.cpp').write_text(SOURCE)
    return subprocess.run([str(COMPILER), *options, '-c', 'source.cpp', '-o', 'source.o'], cwd=work, text=True,
                          stdout=subprocess.PIPE, stderr=subprocess.STDOUT)


@unittest.skipUnless(COMPILER.is_file(), 'build dev/cppgm first')
class GccInstallDirTest(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory(prefix='cppgm-host-headers-')
        self.work = Path(self.directory.name)
        probe = compile_with(self.work, '--gcc-install-dir=' + str(self.work / 'lib/gcc' / TRIPLE / VERSION))
        if "needs a cppgm built with GCC's headers" in probe.stdout:
            self.skipTest('this cppgm was built with another compiler\'s headers')

    def tearDown(self):
        self.directory.cleanup()

    def test_reads_the_named_installation(self):
        for debian in (False, True):
            prefix = self.work / ('debian' if debian else 'gcc')
            directory = installation(prefix, debian)
            for spelling in (str(directory), str(directory) + '/'):
                result = compile_with(self.work, '--gcc-install-dir=' + spelling)
                self.assertEqual(result.returncode, 0, result.stdout)

    def test_reads_the_fixed_headers(self):
        directory = installation(self.work / 'gcc', False)
        (directory / 'include-fixed').mkdir()
        (directory / 'include-fixed/fixed.h').write_text('#define FIXED 1\n')
        (self.work / 'fixed.cpp').write_text('#include <fixed.h>\n#if FIXED != 1\n#error no fixed header\n#endif\n')
        result = subprocess.run([str(COMPILER), '--gcc-install-dir=' + str(directory), '-c', 'fixed.cpp', '-o',
                                 'fixed.o'], cwd=self.work, text=True, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)
        self.assertEqual(result.returncode, 0, result.stdout)

    def test_rejects_other_directories(self):
        directory = installation(self.work / 'gcc', False)
        result = compile_with(self.work, '--gcc-install-dir=' + str(self.work))
        self.assertNotEqual(result.returncode, 0)
        self.assertIn('not a GCC installation directory', result.stdout)
        # An installation without the C++ library's headers.
        bare = self.work / 'bare/lib/gcc' / TRIPLE / VERSION
        (bare / 'include').mkdir(parents=True)
        result = compile_with(self.work, '--gcc-install-dir=' + str(bare))
        self.assertNotEqual(result.returncode, 0)
        self.assertIn('no C++ library headers for the GCC installation', result.stdout)
        # -nostdinc removes the standard directories, the named ones too.
        result = compile_with(self.work, '-nostdinc', '--gcc-install-dir=' + str(directory))
        self.assertNotEqual(result.returncode, 0)
        self.assertIn('include file not found', result.stdout)


if __name__ == '__main__':
    unittest.main()
