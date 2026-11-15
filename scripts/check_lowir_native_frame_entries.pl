#!/usr/bin/perl

use strict;
use warnings;

use File::Copy qw(copy);
use File::Temp qw(tempdir);
use FindBin;
use lib $FindBin::Bin;

use CppgmBatchWorker qw(collect_tests run_command_capture);

# A function that returns on some paths without its frame sets the frame up
# on each path that needs it (dev/src/native/select/shrink_wrap.cpp), in the
# host exception model only: objects `cppgm -c` writes for the host
# toolchain. At -O1 and above each set-up lies before its path's code and
# falls into it, and a path that ends at a shared return of at most two
# saved registers returns itself (dev/src/native/select/branch_layout.cpp).
# No dump shows that model's MIR, so the check reads the host object's
# encoding: `frame_entries` saves its register on two paths, returns from
# four places and holds no `jmp`.

sub read_file
{
	my ($path) = @_;
	open(my $fh, '<', $path) or die "Unable to read $path: $!\n";
	local $/;
	my $data = <$fh>;
	close($fh) or die "Unable to close $path: $!\n";
	return defined($data) ? $data : '';
}

sub object_function
{
	my ($test, $code, $symbol) = @_;
	return $1 if $code =~
		/(^[0-9a-f]+ <\@?\Q$symbol\E>:\n.*?)(?=^[0-9a-f]+ <|\z)/ms;
	die "$test: host object has no $symbol function\n";
}

sub count_of
{
	my ($code, $mnemonic) = @_;
	my $count = () = $code =~ /^\s+[0-9a-f]+:\s+\Q$mnemonic\E(?:\s|$)/mg;
	return $count;
}

sub run_program
{
	my ($test, $program, $label, $directory) = @_;
	my $status = run_command_capture(
		cmd => [$program],
		stdout => "$directory/$label.run.stdout",
		stderr => "$directory/$label.run.stderr",
		timeout => 30,
	);
	die "$test: $label behavior failed with status $status\n"
		if $status != 0;
}

if(scalar(@ARGV) != 3)
{
	die "Usage: check_lowir_native_frame_entries.pl " .
		"<lowir2native> <cppgm> <test-or-directory>\n";
}

my ($app, $driver, $root) = @ARGV;
exit 0 unless CppgmTestPlatform::require_platform(
    'linux', "$FindBin::Script:$root", 'ELF symbol, section and code inspection');
my @tests = collect_tests($root, qr/host-frame-entries\.t$/);
die "No host frame-entry controls found under $root\n" if !@tests;

for my $test (@tests)
{
	my $directory = tempdir('native-frame-entries-XXXXXX',
		TMPDIR => 1, CLEANUP => 1);
	for my $level (qw(O0 O1 O2 O3)) {
		my $program = "$directory/$level.program";
		my $status = run_command_capture(
			cmd => [$app, "-$level", '-o', $program, $test],
			stdout => "$directory/$level.compile.stdout",
			stderr => "$directory/$level.compile.stderr",
			timeout => 30,
		);
		die "$test: native -$level compile failed\n" .
			read_file("$directory/$level.compile.stderr") if $status != 0;
		run_program($test, $program, $level, $directory);
	}

	my $driver_input = "$directory/driver.lowir";
	copy($test, $driver_input) or
		die "$test: unable to prepare cppgm replay: $!\n";
	for my $level (qw(O0 O1 O2 O3)) {
		my $object = "$directory/host-$level.o";
		my $status = run_command_capture(
			cmd => [$driver, '-c', "-$level", '-o', $object, $driver_input],
			stdout => "$directory/host-$level.compile.stdout",
			stderr => "$directory/host-$level.compile.stderr",
			timeout => 60,
		);
		die "$test: host -$level object compile failed\n" .
			read_file("$directory/host-$level.compile.stderr")
			if $status != 0;
		my $program = "$directory/host-$level.program";
		$status = run_command_capture(
			cmd => [$driver, '-o', $program, $object],
			stdout => "$directory/host-$level.link.stdout",
			stderr => "$directory/host-$level.link.stderr",
			timeout => 60,
		);
		die "$test: host -$level link failed\n" .
			read_file("$directory/host-$level.link.stderr") if $status != 0;
		run_program($test, $program, "host-$level", $directory);
		next if $level eq 'O0';
		my $disassembly = "$directory/host-$level.disassembly";
		$status = run_command_capture(
			cmd => ['objdump', '-dr', '-Mintel', '--no-show-raw-insn',
				$object],
			stdout => $disassembly,
			stderr => "$disassembly.stderr",
			timeout => 30,
		);
		die "$test: host -$level disassembly failed\n" if $status != 0;
		my $code = object_function($test, read_file($disassembly),
			'frame_entries');
		die "$test: host $level does not set the frame up on two paths\n"
			if count_of($code, 'push') != 2;
		die "$test: host $level does not return from four places\n"
			if count_of($code, 'ret') != 4;
		die "$test: host $level jumps from a frame set-up or to a return\n"
			if count_of($code, 'jmp') != 0;
	}
}

print "host frame entries: PASS (" . scalar(@tests) . "/" .
	scalar(@tests) . ")\n" unless $ENV{CPPGM_REPORT_QUIET};
