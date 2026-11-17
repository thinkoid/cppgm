#!/usr/bin/perl
use strict;
use warnings;
use Cwd qw(abs_path);
use Digest::SHA;
use File::Basename qw(dirname);
use File::Find;
use FindBin;
use Getopt::Long qw(GetOptions);

my $qemu;
GetOptions('qemu=s' => \$qemu) && @ARGV == 1 or die "usage: replay_aarch64.pl [--qemu path] bundle\n";
my $root = abs_path($ARGV[0]);
my @manifests;
find({no_chdir => 1, wanted => sub {
    push @manifests, $File::Find::name if m{/executions\.tsv$} && -f $_;
}}, $root);
@manifests or die "$root: no PA39 execution manifests\n";
my ($groups, $observations) = (0, 0);
for my $manifest (sort @manifests) {
    open(my $file, '<', $manifest) or die "$manifest: $!";
    my %verified;
    while (<$file>) {
        chomp;
        my ($digest, $expected, $level, $producers, $linker) = split /\t/;
        defined $linker && $digest =~ /^[a-f0-9]{64}$/ && $expected =~ /^\d+$/ && $expected < 256
            or die "$manifest: malformed execution\n";
        my $guest = dirname($manifest) . "/$digest";
        if (!$verified{$digest}++) {
            open(my $image, '<:raw', $guest) or die "$guest: $!";
            Digest::SHA->new(256)->addfile($image)->hexdigest eq $digest or die "$guest: digest mismatch\n";
            chmod 0755, $guest or die "chmod $guest: $!";
        }
        my @runner = defined($qemu) ? ($qemu, '-cpu', 'cortex-a53') : ();
        system($^X, "$FindBin::Bin/run_with_timeout.pl", '--timeout-sec', '30', '--label', "$manifest $level $producers $linker",
            '--', @runner, $guest);
        $? == $expected << 8 or die "$manifest $level $producers $linker: expected $expected, wait status $?\n";
        ++$observations;
    }
    ++$groups;
}
print "$observations guest executions passed across $groups fixtures\n";
