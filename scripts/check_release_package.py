#!/usr/bin/env python3
"""Check a platform package: its files, the packaged compiler on a program, and the LowIR library on a client."""
import argparse
from pathlib import Path
import subprocess
import sys
import tarfile
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import package_release

PROGRAM = '''#include <cstdio>
#include <string>
#include <vector>
template <class T> T total(const std::vector<T>& values) { T sum = T(); for (const T& v : values) sum += v; return sum; }
int main() {
  std::vector<int> values = {1, 2, 3, 4};
  std::string text = "sum=" + std::to_string(total(values));
  std::puts(text.c_str());
  return total(values) == 10 ? 0 : 1;
}
'''
# Prints the release the library states.
CLIENT = '''#include "lowir_interface.h"
#include <stdio.h>
int main(void) {
  if (cppgm_lowir_abi_version() != CPPGM_LOWIR_ABI_VERSION) return 2;
  CppgmLowir* module = cppgm_lowir_create(CPPGM_LOWIR_ABI_VERSION, CPPGM_TARGET_LINUX);
  if (!module) return 1;
  int valid = cppgm_lowir_validate(module);
  if (!valid) fprintf(stderr, "%s\\n", cppgm_lowir_error(module));
  cppgm_lowir_destroy(module);
  puts(cppgm_lowir_version());
  return valid ? 0 : 1;
}
'''


def run(command, **options):
    result = subprocess.run([str(part) for part in command], stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                            text=True, **options)
    if result.returncode:
        raise ValueError('%s failed (%d):\n%s' % (' '.join(str(part) for part in command), result.returncode,
                                                  result.stdout[-4000:]))
    return result.stdout


def required(platform):
    shared = package_release.PLATFORMS[platform]
    return set(['bin/' + tool for tool in package_release.TOOLS] +
               ['lib/libcppgm_lowir.a', 'lib/' + shared, 'include/lowir_interface.h', 'LICENSE', 'NOTICE',
                'README.md'])


def check(archive, host_cxx, cc, work):
    stem = archive.name[:-len('.tar.gz')]
    platform = next((p for p in package_release.PLATFORMS if stem.endswith('-' + p)), None)
    if platform is None or not archive.name.endswith('.tar.gz'):
        raise ValueError('expected cppgm-<tag>-<platform>.tar.gz: ' + archive.name)
    tag = package_release.version_tag(stem[len('cppgm-'):-len(platform) - 1])
    with tarfile.open(archive) as tar:
        listed = set(member.name for member in tar.getmembers())
        wanted = set(stem + '/' + name for name in required(platform))
        # Other members are only further headers of the library.
        other = [name for name in listed - wanted if not name.startswith(stem + '/include/') or '..' in name]
        if wanted - listed or other:
            raise ValueError('unexpected package contents: missing %s, other %s' % (sorted(wanted - listed), other))
        tar.extractall(work, **(dict(filter='data') if hasattr(tarfile, 'data_filter') else {}))
    root = work / stem
    version = run([root / 'bin/cppgm', '--version'])
    # `cppgm <release> (...)`: the release of the tag, which the library states too.
    release = version.split()[1] if version.startswith('cppgm ') else ''
    if not release or (tag != package_release.TRIAL_TAG and 'v' + release != tag):
        raise ValueError('the packaged compiler states another release than %s: %s' % (tag, version.strip()))
    (work / 'program.cpp').write_text(PROGRAM)
    # The packaged compiler makes the object; the host compiler links it with its standard library.
    run([root / 'bin/cppgm', '-std=c++17', '-O2', '-c', work / 'program.cpp', '-o', work / 'program.o'])
    run([host_cxx, work / 'program.o', '-o', work / 'program'])
    if run([work / 'program']) != 'sum=10\n':
        raise ValueError('the program built by the packaged compiler printed other text')
    (work / 'client.c').write_text(CLIENT)
    run([cc, '-std=c11', '-I', root / 'include', '-c', work / 'client.c', '-o', work / 'client.o'])
    # The shared library is found by its own name on the client's run path.
    for name, library in (('static', [root / 'lib/libcppgm_lowir.a']),
                          ('shared', ['-L', root / 'lib', '-lcppgm_lowir', '-Wl,-rpath,%s' % (root / 'lib')])):
        run([host_cxx, work / 'client.o', *library, '-pthread', '-o', work / name])
        if run([work / name], cwd=work).strip() != release:
            raise ValueError('the %s library states another release than %s' % (name, release))
    return version.splitlines()[0] if version else ''


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('archive', type=Path)
    parser.add_argument('--host-cxx', default='c++')
    parser.add_argument('--cc', default='cc')
    args = parser.parse_args()
    with tempfile.TemporaryDirectory() as directory:
        print('package passes:', check(args.archive.resolve(), args.host_cxx, args.cc, Path(directory)))
