#!/usr/bin/perl
use strict;
use warnings;
use File::Basename qw(dirname basename);
use File::Path qw(make_path);
use Digest::SHA qw(sha256_hex);
use File::Compare qw(compare);
use File::Copy qw(copy);
use File::Spec;
use File::Temp qw(tempdir);
use FindBin;
use JSON::PP qw(decode_json);
use lib $FindBin::Bin;
use CppgmBatchWorker qw(collect_tests run_command_capture);

sub sidecar {
    my ($name) = @_;
    $name =~ s/\.t$/.arm-expect/;
    return $name;
}

if (@ARGV && $ARGV[0] eq '--list') {
    shift @ARGV;
    print "$_\n" for grep { -f sidecar($_) } map { collect_tests($_, qr/\.t$/) } @ARGV;
    exit 0;
}

sub read_file {
    open(my $file, '<:raw', $_[0]) or die "read $_[0]: $!\n";
    local $/;
    return <$file> // '';
}

@ARGV == 2 or die "usage: check_aarch64.pl <cppgm> <fixture>\n";
my ($compiler, $test) = @ARGV;
my $directory = tempdir('cppgm-aarch64-XXXXXX', TMPDIR => 1, CLEANUP => 1);
my $expect = decode_json(read_file(sidecar($test)));
my $suffix = $compiler =~ /(-ref|-self)$/ ? $1 : '';
my $bin = dirname($compiler);
my $opt = "$bin/lowiropt$suffix";
my $backend = "$bin/lowir2native$suffix";
my @target = ('--target=aarch64-linux-gnu');
my $clang = $ENV{CPPGM_AARCH64_CLANG} // 'clang';
my $lld = $ENV{CPPGM_AARCH64_LLD} // 'ld.lld';
my $inspect = $ENV{CPPGM_AARCH64_READOBJ} // 'llvm-readobj';
my $objdump = $ENV{CPPGM_AARCH64_OBJDUMP} // 'llvm-objdump';
my $ar = $ENV{CPPGM_AARCH64_AR} // 'llvm-ar';
my $qemu = $ENV{CPPGM_AARCH64_QEMU} // 'qemu-aarch64';
my $support = "$FindBin::Bin/../pa39/support";
my @libraries;
if ($expect->{builtins}) {
    my $archive = $ENV{CPPGM_AARCH64_BUILTINS} // '/usr/lib/gcc-cross/aarch64-linux-gnu/14/libgcc.a';
    -r $archive or die "set CPPGM_AARCH64_BUILTINS to the target libgcc.a or compiler-rt builtins archive\n";
    push @libraries, $archive;
}

sub run {
    my ($want, @args) = @_;
    my $status = run_command_capture(cmd => \@args, stdout => "$directory/out", stderr => "$directory/err",
        timeout => 30, supervisor => $compiler,
        limits => {cpu_seconds => 30, rss_bytes => 2147483648, file_bytes => 67108864});
    die "@args: expected $want, got $status\n" . read_file("$directory/out") . read_file("$directory/err")
        if $status != $want;
    return read_file("$directory/out");
}

my $bundle;
my ($level_name, $producers, @manifest);
if ($ENV{CPPGM_AARCH64_ARTIFACTS}) {
    $bundle = File::Spec->catdir($ENV{CPPGM_AARCH64_ARTIFACTS}, basename(dirname($test)), basename($test, '.t'));
    make_path($bundle);
}
sub execute_image {
    my ($linker) = @_;
    run($expect->{exit}, $qemu, '-cpu', 'cortex-a53', "$directory/program");
    if ($bundle) {
        my $digest = sha256_hex(read_file("$directory/program"));
        my $guest = "$bundle/$digest";
        copy("$directory/program", $guest) or die "copy $guest: $!" unless -f $guest;
        push @manifest, join("\t", $digest, $expect->{exit}, $level_name, $producers, $linker) . "\n";
    }
}

sub link_external {
    run(0, $lld, '-m', 'aarch64elf', '-static', '-e', '_start', "$directory/start.o", @_, @libraries, '-o', "$directory/program");
    execute_image('lld');
}

sub link_course {
    run(0, $compiler, @target, @_, @libraries, '-o', "$directory/program");
    execute_image('course');
}

sub link_hosted {
    my $sysroot = $ENV{CPPGM_AARCH64_SDK_ROOT} // '/';
    my $c = "$sysroot/usr/aarch64-linux-gnu/lib";
    my $gcc = "$sysroot/usr/lib/gcc-cross/aarch64-linux-gnu/14";
    -r "$gcc/libstdc++.a" && -r "$c/crt1.o" or die "missing AArch64 static C++ runtime in $sysroot\n";
    run(0, $lld, "--sysroot=$sysroot", '-m', 'aarch64elf', '-static', '--eh-frame-hdr', '-e', '_start',
        "$c/crt1.o", "$c/crti.o", "$gcc/crtbeginT.o", @_, "-L$gcc", "-L$c", '--start-group',
        '-lstdc++', '-lm', '-lgcc_eh', '-lc', '-lgcc', '--end-group', "$gcc/crtend.o", "$c/crtn.o", '-o', "$directory/program");
    execute_image('lld-hosted');
}

run(0, $clang, @target, '-march=armv8-a', '-c', "$support/start.S", '-o', "$directory/start.o");
for my $level (0..3) {
    $level_name = "O$level";
    $producers = 'clang';
    my @flags = (@target, "-O$level", @{$expect->{flags} // []});
    my @reference = ($clang, '-fno-pic', @flags, '-march=armv8-a', '-mno-outline-atomics', '-x', 'c++');
    my $object = "$directory/unit.o";
    my $other = "$directory/reference.o";
    run(0, @reference, '-c', $test, '-o', $other);
    run(0, $compiler, @flags, '-x', 'c++', '-c', $test, '-o', $object);
    my $header = run(0, $inspect, '--file-headers', '--relocations', $object);
    die "$test: wrong ELF architecture\n" unless $header =~ /Machine: EM_AARCH64\b/;
    die "$test: expected relocation $expect->{relocation}\n"
        if $expect->{relocation} && index($header, $expect->{relocation}) < 0;
    if ($level && $expect->{register_leaf}) {
        my $symbol = $expect->{register_leaf};
        my $assembly = run(0, $objdump, '-d', '--no-show-raw-insn', "--disassemble-symbols=$symbol", $object);
        die "$test: missing function $symbol\n" unless $assembly =~ /<\Q$symbol\E>:/;
        die "$test: register-only leaf $symbol accesses memory or calls\n"
            if $assembly =~ /\b(?:ld\w*|st\w*|bl|blr|sp)\b/i;
    }
    for my $optimized (0,1) {
        my @emit = $optimized ? ("-O$level", '-S', '-emit-lowir') :
            ('-O0', '--emit-lowir', '-g0', ($level ? '-D__OPTIMIZE__=1' : ()));
        run(0, $compiler, @target, @emit, @{$expect->{flags} // []}, '-x', 'c++', $test, '-o', "$directory/unit.lowir");
        run(0, $opt, '-O0', "$directory/unit.lowir", '-o', "$directory/roundtrip.lowir");
        run(0, $compiler, @flags, ($optimized ? '-fno-lowir-passes' : ()), '-c', "$directory/roundtrip.lowir", '-o', "$directory/roundtrip.o");
        copy("$directory/roundtrip.lowir", "$directory/raw.lowir") or die "$!" unless $optimized;
        die "$test: O$level LowIR object differs (optimized=$optimized)\n" if compare($object, "$directory/roundtrip.o");
    }
    if ($expect->{unwind_peer}) {
        run(0, @reference, '-c', "$support/$expect->{unwind_peer}", '-o', "$directory/clang-peer.o");
        link_hosted($other, "$directory/clang-peer.o");
        $producers = 'cppgm+clang';
        link_hosted($object, "$directory/clang-peer.o");
    } elsif ($expect->{peer}) {
        my $peer = "$support/$expect->{peer}";
        run(0, @reference, '-c', $peer, '-o', "$directory/clang-peer.o");
        run(0, $compiler, @flags, '-c', $peer, '-o', "$directory/cppgm-peer.o");
        link_external($other, "$directory/clang-peer.o");
        for my $pair ([$object, "$directory/clang-peer.o"], [$other, "$directory/cppgm-peer.o"]) {
            $producers = $pair->[0] eq $object ? 'cppgm+clang' : 'clang+cppgm';
            link_external(@$pair);
            link_course(@$pair);
        }
        if ($expect->{archive}) {
            $producers = 'cppgm+clang-archive';
            run(0, @reference, '-c', "$support/archive-unused.cpp", '-o', "$directory/unused.o");
            run(0, $ar, 'rcs', "$directory/libwitness.a", "$directory/unused.o", "$directory/clang-peer.o");
            link_course($object, "-L$directory", '-lwitness');
            run(0, $backend, @target, "-O$level", '--dump-machine-ir', "$directory/unit.mir",
                "$directory/raw.lowir", "$directory/libwitness.a", '-o', "$directory/program");
            execute_image('lowir2native');
            die "$test: missing selected Arm instructions\n" unless
                read_file("$directory/unit.mir") =~ /^machine_ir aarch64 1\nfunction [^\n]+\n  0 \w+ rd=/;
        }
    } else {
        link_external($other);
        $producers = 'cppgm';
        link_external($object);
        link_course($object);
        run(0, $backend, @flags, "$directory/raw.lowir", '-o', "$directory/program");
        execute_image('lowir2native');
    }
}
if ($bundle) {
    open(my $file, '>', "$bundle/executions.tsv.tmp") or die "manifest: $!";
    print {$file} @manifest or die "manifest: $!";
    close $file or die "manifest: $!";
    rename "$bundle/executions.tsv.tmp", "$bundle/executions.tsv" or die "manifest: $!";
}
print "AArch64 control passed\n";
