#!/usr/bin/env python3
"""A release package holds the built tools, the LowIR library and its headers, with fixed bytes."""
import json
from pathlib import Path
import subprocess
import sys
import tarfile
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
import check_release_package as checker
import package_release as release

ROOT = Path(__file__).resolve().parents[2]


def tree(root):
    """A committed source tree with stand-ins for the built files."""
    (root / 'dev/src').mkdir(parents=True)
    for tool in release.TOOLS:
        (root / 'dev' / tool).write_text('tool ' + tool)
    for name in ['libcppgm_lowir.a', 'libcppgm_lowir.so', 'libcppgm_lowir.dylib']:
        (root / 'dev' / name).write_text('library ' + name)
    (root / 'dev/src/lowir_interface.h').write_text('#include "lowir_records.h"\n#include <stdint.h>\n')
    (root / 'dev/src/lowir_records.h').write_text('#include "lowir_model.h"\n')
    (root / 'dev/src/lowir_model.h').write_text('// model\n')
    (root / 'dev/src/unrelated.h').write_text('// not part of the library interface\n')
    for name in ['LICENSE', 'NOTICE']:
        (root / name).write_text('committed ' + name)
    for arguments in (['init', '-q'], ['add', '-A'],
                      ['-c', 'user.name=Test', '-c', 'user.email=test@example.invalid', 'commit', '-qm', 'Source']):
        subprocess.run(['git', *arguments], cwd=root, check=True, stdout=subprocess.DEVNULL)


class PackageRelease(unittest.TestCase):
    def test_package_is_reproducible_and_complete(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            tree(root)
            first = release.package(root, 'v0.9.0', 'linux-x86_64', root / 'a', 'g++ 13')
            second = release.package(root, 'v0.9.0', 'linux-x86_64', root / 'b', 'g++ 13')
            self.assertEqual(first.name, 'cppgm-v0.9.0-linux-x86_64.tar.gz')
            self.assertEqual(first.read_bytes(), second.read_bytes())
            with tarfile.open(first) as archive:
                names = {member.name[len('cppgm-v0.9.0-linux-x86_64/'):]: member for member in archive.getmembers()}
                text = archive.extractfile('cppgm-v0.9.0-linux-x86_64/README.md').read().decode()
            self.assertEqual(set(names), checker.required('linux-x86_64') |
                             {'include/lowir_records.h', 'include/lowir_model.h'})
            self.assertEqual(names['bin/cppgm'].mode, 0o755)
            self.assertEqual(names['lib/libcppgm_lowir.a'].mode, 0o644)
            self.assertEqual({member.mtime for member in names.values()}, {0})
            self.assertIn('g++ 13', text)
            record = json.loads((root / 'a/cppgm-v0.9.0-linux-x86_64-provenance.json').read_text())
            self.assertEqual(record['source_sha'],
                             subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=root, text=True).strip())
            self.assertEqual(sorted(record['files']), sorted(names))
            with self.assertRaises(FileExistsError):
                release.package(root, 'v0.9.0', 'linux-x86_64', root / 'a', 'g++ 13')
            mac = release.package(root, 'v0.9.0', 'macos-x86_64', root / 'c', 'clang 21')
            with tarfile.open(mac) as archive:
                self.assertIn('cppgm-v0.9.0-macos-x86_64/lib/libcppgm_lowir.dylib', archive.getnames())

    def test_missing_build_output_and_other_names_are_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            tree(root)
            (root / 'dev/lowiropt').unlink()
            with self.assertRaisesRegex(FileNotFoundError, 'lowiropt'):
                release.package(root, 'v0.9.0', 'linux-x86_64', root / 'a', 'g++ 13')
            for tag in ['v9', 'v8.1', 'assignments-v9', 'main', '../v0.9.0', 'v0.9.0;command']:
                with self.assertRaises(ValueError):
                    release.package(root, tag, 'linux-x86_64', root / 'b', 'g++ 13')
            with self.assertRaisesRegex(ValueError, 'platform'):
                release.package(root, 'v0.9.0', 'windows-x86_64', root / 'b', 'g++ 13')

    def test_workflow_releases_semantic_versions_for_three_targets(self):
        workflow = (ROOT / '.github/workflows/release.yml').read_text()
        self.assertIn("tags: ['v[0-9]+.[0-9]+.[0-9]+', 'v[0-9]+.[0-9]+.[0-9]+-*']", workflow)
        self.assertNotIn("'v[0-9]*'", workflow)
        for part in ('--platform linux-x86_64', '--platform macos-x86_64', 'export-wasm-references.yml',
                     'scripts/export_release_source.py', 'scripts/check_release_package.py', 'macos-26-intel',
                     'gh release create'):
            self.assertIn(part, workflow)
        # Only a tag push publishes; a pull request builds and checks the same packages.
        self.assertIn("if: github.event_name == 'push'", workflow)


if __name__ == '__main__':
    unittest.main()
