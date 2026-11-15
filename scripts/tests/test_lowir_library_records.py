#!/usr/bin/env python3
"""The LowIR library's record types (ABI version 4).

The client declares records of nine layouts and passes them as parameters, results, variadic arguments and va_arg
results. The library's object must equal the object that cppgm makes from the text the library writes, and the C
compiler's code must agree with it on how each record is passed.
"""
import os
from pathlib import Path
import platform
import shlex
import subprocess
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[2]
DEV = ROOT / 'dev'
LIBRARY = DEV / 'libcppgm_lowir.a'
COMPILER = DEV / 'cppgm'
CLIENT = ROOT / 'scripts/tests/lowir_library_records.c'
HOST = ROOT / 'scripts/tests/lowir_library_records_host.c'
LINUX, MACOS = 0, 1
# The classes the written text states for each record.
TEXT = (
    '@ext_id_di(%__param0 : obj<16x8> [classes=sse_integer]) -> obj<16x8> [result_classes=sse_integer',
    '@ext_id_fff(%__param0 : obj<12x4> [classes=sse_sse]) -> obj<12x4> [result_classes=sse_sse',
    '@ext_id_if(%__param0 : obj<8x4> [classes=integer]) -> obj<8x4> [result_classes=integer',
    '@ext_id_packed(%__param0 : obj<5x1> [classes=memory]) -> obj<5x1> [result_classes=memory',
    '@ext_id_big(%__param0 : obj<24x8>) -> obj<24x8> [linkage=c',
    '@ext_id_union(%__param0 : obj<8x8> [classes=integer]) -> obj<8x8> [result_classes=integer',
    '@ext_id_nested(%__param0 : obj<16x8> [classes=sse_sse]) -> obj<16x8> [result_classes=sse_sse',
    '@ext_id_ld(%__param0 : obj<16x16> [classes=x87]) -> obj<16x16> [result_classes=x87',
    '@ext_id_array(%__param0 : obj<12x4> [classes=integer_integer]) -> obj<12x4> [result_classes=integer_integer',
    '@host_di(%arg0 : obj<16x8> [classes=sse_integer]) -> obj<16x8> [result_classes=sse_integer',
    '[classes=1:sse_integer, classes=2:sse_sse, classes=3:memory, classes=4:x87]',
    'va_arg obj<16x8> %t1 [classes=sse_integer]', 'va_arg obj<12x4> %t1 [classes=sse_sse]',
    'global @ext_pair : obj<16x8>',
)
# Each bad record, and the error that reports it.
REJECTED = {
    'bad-alignment': 'invalid record type',
    'bad-size': 'invalid record type',
    'bad-bounds': 'invalid record field',
    'bad-field-type': 'invalid record field',
    'bad-record-id': 'invalid record field',
}


def run(args, **options):
    return subprocess.run([str(a) for a in args], cwd=ROOT, timeout=120, text=True, stdout=subprocess.PIPE,
                          stderr=subprocess.STDOUT, **options)


@unittest.skipUnless(platform.machine().lower() in ('x86_64', 'amd64'), 'the library makes x86-64 objects')
@unittest.skipUnless(LIBRARY.is_file() and COMPILER.is_file(), 'build dev/cppgm and the LowIR library first')
class LibraryRecordsTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.directory = tempfile.TemporaryDirectory(prefix='cppgm-library-records-')
        cls.out = Path(cls.directory.name)
        cls.cc = shlex.split(os.environ.get('CC', 'cc'))
        cxx = shlex.split(os.environ.get('CPPGM_HOST_CXX', os.environ.get('CXX', 'g++')))
        stdlib = shlex.split(os.environ.get('CPPGM_STDLIB_FLAGS', ''))
        cls.client = cls.out / 'client'
        built = run([*cls.cc, '-std=c11', '-Wall', '-Wextra', '-Werror', '-I', DEV / 'src', '-c', CLIENT, '-o',
                     cls.out / 'client.o'])
        assert built.returncode == 0, built.stdout
        linked = run([*cxx, *stdlib, cls.out / 'client.o', LIBRARY, '-pthread', '-o', cls.client])
        assert linked.returncode == 0, linked.stdout
        cls.host_target = MACOS if platform.system() == 'Darwin' else LINUX

    @classmethod
    def tearDownClass(cls):
        cls.directory.cleanup()

    def client_run(self, name, level, case, target):
        return run([self.client, self.out / (name + '.o'), self.out / (name + '.lowir'), level, case, target])

    def objects(self, level, target, case='valid'):
        """The library's object for `target`, the object cppgm makes from the written text, and the text."""
        name = '%s-%d-%d' % (case, target, level)
        result = self.client_run(name, level, case, target)
        self.assertEqual(result.returncode, 0, result.stdout)
        text = self.out / (name + '.lowir')
        from_text = self.out / ('text-%s-%d-%d.o' % (case, target, level))
        triple = ['--target=x86_64-apple-darwin'] if target == MACOS else ['--target=x86_64-linux-gnu']
        compiled = run([COMPILER, *triple, '-O%d' % level, '-c', text, '-o', from_text])
        self.assertEqual(compiled.returncode, 0, compiled.stdout)
        return self.out / (name + '.o'), from_text, text.read_text()

    def test_records_pass_as_c_passes_them(self):
        for level in range(4):
            direct, from_text, text = self.objects(level, self.host_target)
            self.assertEqual(direct.read_bytes(), from_text.read_bytes(), 'level %d' % level)
            for words in TEXT:
                self.assertIn(words, text)
            program = self.out / 'program'
            linked = run([*self.cc, '-std=c11', HOST, direct, '-o', program])
            self.assertEqual(linked.returncode, 0, linked.stdout)
            self.assertEqual(run([program]).returncode, 0, 'level %d' % level)

    def test_objects_of_the_other_target_equal_the_text_path(self):
        other = LINUX if self.host_target == MACOS else MACOS
        for level in (0, 3):
            direct, from_text, _ = self.objects(level, other)
            self.assertEqual(direct.read_bytes(), from_text.read_bytes(), 'level %d' % level)

    def test_a_stated_argument_fact_keeps_its_classes(self):
        _, _, text = self.objects(0, self.host_target, 'stated-classes')
        self.assertIn('[classes=1:integer_integer, classes=2:sse_sse, classes=3:memory, classes=4:x87]', text)

    def test_bad_records_are_rejected(self):
        for case, message in REJECTED.items():
            result = self.client_run(case, 0, case, self.host_target)
            self.assertEqual(result.returncode, 0, case + ': ' + result.stdout)
            self.assertIn(message, result.stdout, case)


if __name__ == '__main__':
    unittest.main()
