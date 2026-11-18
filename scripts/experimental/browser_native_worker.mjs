// Each invocation of cppgm or LLD runs inside this browser worker.
import {invoke, File, Directory, insert, lookup} from './wasi_runtime.mjs';
import {invokeEmscripten} from './emscripten_host.mjs';
import {fetchBytes} from './transport_bytes.mjs';

const targets = [
  ['linux-x86_64', 'x86_64-linux-gnu', 'elf_x86_64'],
  ['linux-arm64', 'aarch64-linux-gnu', 'aarch64elf'],
  ['macos-x86_64', 'x86_64-apple-macos', 'x86_64'],
  ['macos-arm64', 'arm64-apple-macos11', 'arm64'],
];
const encoder = new TextEncoder();
const peer = 'extern "C" int plus(int a,int b){return a+b;}';
const declaration = 'extern "C" int plus(int,int); ';
const linuxSource = {peer, main: declaration + 'int main(){return plus(17,22);}'};
const macSource = {peer, main: declaration + 'extern "C" void exit(int); int main(){exit(plus(17,22));}'};
const hostedSource = {
  peer: 'extern "C" void raise_remote(int n){throw n;}',
  main: 'extern "C" void raise_remote(int); int main(){try {raise_remote(39);} catch(int n){return n;} return 1;}',
};
const libSystem = `--- !tapi-tbd
tbd-version: 4
targets: [ x86_64-macos, arm64-macos ]
install-name: '/usr/lib/libSystem.B.dylib'
exports:
  - targets: [ x86_64-macos, arm64-macos ]
    symbols: [ _exit, dyld_stub_binder ]
...
`;

async function compile(compiler, triple, source, lto) {
  const root = new Directory([]);
  for (const [unit, code] of Object.entries(source))
    insert(root, unit + '.cpp', new File(encoder.encode(code)));
  const files = [];
  for (const group of lto ? [['main', 'peer']] : [['main'], ['peer']]) {
    const output = lto ? 'combined.o' : group[0] + '.o';
    const flags = lto ? ['-Oz', '-flto=full'] : ['-O2'];
    const result = await invoke(compiler, root, ['--target=' + triple, ...flags, '-c',
      ...group.map(unit => unit + '.cpp'), '-o', output]);
    if (result.status) throw Error(triple + ' compile: ' + result.log.join('\n'));
    files.push({path: output, bytes: lookup(root, output).data});
  }
  return files;
}

async function buildTarget(compiler, linker, hosted, [name, triple, arch], lto) {
  const elf = name.startsWith('linux');
  const source = hosted.includes(name) ? hostedSource : elf ? linuxSource : macSource;
  const files = await compile(compiler, triple, source, lto);
  const objects = files.map(file => file.path);
  let args;
  if (hosted.includes(name)) {
    const startup = ['crt1.o', 'crti.o', 'crtbeginT.o'];
    const libraries = ['libstdc++.a', 'libgcc_eh.a', 'libc.a', 'libgcc.a'];
    const end = ['crtend.o', 'crtn.o'];
    for (const path of [...startup, ...libraries, ...end])
      files.push({path, bytes: await fetchBytes(name + '-' + path)});
    args = ['-m', arch, '-static', '--eh-frame-hdr', '-e', '_start', ...startup, ...objects,
            '--start-group', ...libraries, '--end-group', ...end];
  } else if (elf) {
    files.push({path: 'start.o', bytes: await fetchBytes(name + '-start.o')});
    args = ['-m', arch, '-static', '-e', '_start', 'start.o', ...objects];
  } else {
    files.push({path: 'libSystem.tbd', bytes: encoder.encode(libSystem)});
    args = ['-arch', arch, '-platform_version', 'macos', arch === 'arm64' ? '11.0' : '10.15', '11.0',
            '-e', '_main', ...objects, 'libSystem.tbd'];
  }
  const result = await invokeEmscripten({
    module: linker, runtime: new URL('glue.mjs', self.location).href, program: elf ? 'ld.lld' : 'ld64.lld',
    files, args: [...args, '-o', 'program'], output: 'program',
  });
  postMessage({name: lto ? name + '-lto' : name, bytes: result.bytes}, [result.bytes.buffer]);
}

async function build() {
  const compiler = await WebAssembly.compile(await fetchBytes('cppgm.wasm'));
  const linker = await WebAssembly.compile(await fetchBytes('lld.wasm'));
  const hosted = await (await fetch('hosted.json')).json();
  for (const target of targets) {
    await buildTarget(compiler, linker, hosted, target, false);
    if (target[0].endsWith('-arm64'))
      await buildTarget(compiler, linker, hosted, target, true);
  }
  postMessage({done: true});
}

build().catch(error => postMessage({error: String(error)}));
