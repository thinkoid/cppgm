#!/usr/bin/env node
// Use the downloadable linker and host glue from an incpption checkout.
const fs = require('node:fs');
const http = require('node:http');
const os = require('node:os');
const path = require('node:path');
const {createHash} = require('node:crypto');
const {execFileSync} = require('node:child_process');
const {gunzipSync} = require('node:zlib');

const [pkg, site, dest, runtimes] = process.argv.slice(2).map(arg => path.resolve(arg));
if (!dest) throw Error('Usage: browser_native_downloads.cjs WASI_PACKAGE INCPPTION NEW_OUTPUT [LINUX_RUNTIME_JSON]');
const {chromium} = require(path.join(site, 'node_modules/playwright'));
const scratch = fs.mkdtempSync(path.join(os.tmpdir(), 'pa39-browser-'));
const copy = (source, name) => fs.copyFileSync(source, path.join(scratch, name));
const hash = bytes => createHash('sha256').update(bytes).digest('hex');

function prepare() {
  copy(path.join(pkg, 'inputs/w1/cppgm.wasm'), 'cppgm.wasm');
  fs.cpSync(path.join(pkg, 'shim'), path.join(scratch, 'shim'), {recursive: true});
  for (const file of ['wasi_runtime.mjs', 'transport_bytes.mjs', 'browser_native_worker.mjs'])
    copy(path.join(__dirname, file), file);
  for (const file of ['emscripten_host.mjs', 'emscripten_inputs.mjs', 'emscripten_process.mjs', 'error_text.mjs', 'memory_image.mjs'])
    copy(path.join(site, 'web', file), file);
  const seed = path.join(site, 'dist/clang-seed');
  const manifest = JSON.parse(fs.readFileSync(path.join(seed, 'manifest.json')));
  const spec = manifest.tools.lld;
  const linker = Buffer.concat(spec.chunks.map(chunk => gunzipSync(fs.readFileSync(path.join(seed, chunk.path)))));
  if (hash(linker) !== spec.sha256) throw Error('Linker seed checksum mismatch');
  fs.writeFileSync(path.join(scratch, 'lld.wasm'), linker);
  copy(path.join(seed, spec.runtime.path), 'glue.mjs');

  const assembler = process.env.CPPGM_AARCH64_CLANG || 'clang';
  const arm = path.resolve(__dirname, '../../pa39/support/start.S');
  execFileSync(assembler, ['--target=aarch64-linux-gnu', '-c', arm, '-o', path.join(scratch, 'linux-arm64-start.o')]);
  execFileSync(assembler, ['--target=x86_64-linux-gnu', '-x', 'assembler', '-c', '-', '-o', path.join(scratch, 'linux-x86_64-start.o')],
    {input: '.text\n.globl _start\n_start:\n and $-16,%rsp\n call main\n mov %eax,%edi\n mov $60,%eax\n syscall\n'});

  const sdk = runtimes ? JSON.parse(fs.readFileSync(runtimes)) : {};
  for (const [target, directories] of Object.entries(sdk)) {
    if (!['linux-x86_64', 'linux-arm64'].includes(target)) throw Error('Unknown Linux runtime target ' + target);
    for (const file of ['crt1.o', 'crti.o', 'crtn.o', 'libc.a'])
      copy(path.join(directories.libc, file), target + '-' + file);
    for (const file of ['crtbeginT.o', 'crtend.o', 'libstdc++.a', 'libgcc_eh.a', 'libgcc.a'])
      copy(path.join(directories.gcc, file), target + '-' + file);
  }
  fs.writeFileSync(path.join(scratch, 'hosted.json'), JSON.stringify(Object.keys(sdk)));
}

const pageHtml = `<!doctype html><body><script>
  const state = window.state = {};
  const worker = new Worker('browser_native_worker.mjs', {type: 'module'});
  worker.onerror = event => state.error = event.message;
  worker.onmessage = ({data}) => {
    if (!data.bytes) { Object.assign(state, data); return; }
    const link = document.createElement('a');
    link.download = link.textContent = data.name;
    link.href = URL.createObjectURL(new Blob([data.bytes], {type: 'application/octet-stream'}));
    document.body.append(link);
  };
</script></body>`;

function serve(request, response) {
  if (request.url === '/') {
    response.setHeader('Content-Type', 'text/html');
    response.end(pageHtml);
    return;
  }
  const file = path.resolve(scratch, '.' + request.url);
  if (!file.startsWith(scratch + '/') || !fs.existsSync(file)) {
    response.writeHead(404);
    response.end();
    return;
  }
  response.setHeader('Content-Type', /\.m?js$/.test(file) ? 'text/javascript' : 'application/octet-stream');
  fs.createReadStream(file).pipe(response);
}

function checkExecutable(name, bytes) {
  const arm = name.endsWith('arm64');
  const matches = name.startsWith('linux')
    ? bytes.readUInt32BE(0) === 0x7f454c46 && bytes.readUInt16LE(16) === 2 && bytes.readUInt16LE(18) === (arm ? 183 : 62)
    : bytes.readUInt32LE(0) === 0xfeedfacf && bytes.readUInt32LE(4) === (arm ? 0x100000c : 0x1000007) && bytes.readUInt32LE(12) === 2;
  if (!matches) throw Error('Wrong executable format for ' + name);
}

async function test() {
  prepare();
  fs.mkdirSync(dest);
  const server = http.createServer(serve);
  await new Promise(resolve => server.listen(0, '127.0.0.1', resolve));
  let browser;
  try {
    browser = await chromium.launch({headless: true});
    const page = await browser.newPage();
    await page.goto('http://127.0.0.1:' + server.address().port + '/');
    await page.waitForFunction(() => window.state.done || window.state.error, null, {timeout: 240000});
    const error = await page.evaluate(() => window.state.error);
    if (error) throw Error(error);
    const names = await page.locator('a[download]').allTextContents();
    if (new Set(names).size !== 4) throw Error('Expected four distinct executable downloads');
    for (const name of names) {
      const [download] = await Promise.all([page.waitForEvent('download'), page.getByText(name, {exact: true}).click()]);
      const file = path.join(dest, name);
      await download.saveAs(file);
      fs.chmodSync(file, 0o755);
      const bytes = fs.readFileSync(file);
      checkExecutable(name, bytes);
      console.log(name, bytes.length, hash(bytes));
    }
  } finally {
    if (browser) await browser.close();
    await new Promise(resolve => server.close(resolve));
  }
}

test().catch(error => {console.error(error); process.exitCode = 1;})
  .finally(() => fs.rmSync(scratch, {recursive: true, force: true}));
