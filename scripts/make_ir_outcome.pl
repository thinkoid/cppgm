#!/usr/bin/perl
# Derive outcome lines for an expectation sidecar from what an optimizer
# did to a LowIR fixture: the calls, loads, stores, phis and definitions
# the course solution removed must stay removed.  The lines are facts about
# the input and the output, not about the pass that produced them, so any
# design that reaches the same outcome passes.
#
# Every line names the function it is about.  A function that keeps an
# instruction kind gets no line for it, so a control function beside the
# fixture's subject is not made a requirement.  A function whose parameters
# or result the solution retyped gets no line: its instructions follow the
# new signature, which no other design has to choose.
#
#   make_ir_outcome.pl <input.t> <output.lowir>
use strict;
use warnings;

my ($input_path, $output_path) = @ARGV;
die "usage: make_ir_outcome.pl <input.t> <output.lowir>\n"
	if !defined($input_path) || !defined($output_path);

sub facts
{
	my ($path) = @_;
	open(my $fh, '<', $path) or die "Unable to read $path: $!\n";
	my %f = (functions => {}, signatures => {}, kinds => {}, callees => {});
	my $function = '';
	while (my $line = <$fh>)
	{
		chomp($line);
		if ($line =~ /^function\s+\@([^\s(]+)(.*)$/)
		{
			# The parameter and result types, without names and facts.
			($function, my $header) = ($1, $2);
			$header =~ s/\[[^\]]*\]//g;
			my @types = $header =~ /:\s*([^,)\s]+)/g;
			my ($result) = $header =~ /->\s*(\S+)/;
			$f{functions}{$function} = 1;
			$f{signatures}{$function} = join(',', @types) . '->' . (defined($result) ? $result : 'void');
			next;
		}
		if ($line =~ /^(?:declare|global)\b/ || $line =~ /^\}/) { $function = ''; next; }
		next if $function eq '' || $line !~ /^\s{4}(\S.*)$/;
		my $body = $1;
		$body =~ s/^%[^\s=]+\s*=\s*//;
		my ($kind) = split(/[\s,()]+/, $body);
		next if !defined($kind);
		++$f{kinds}{$function}{$kind};
		++$f{callees}{$function}{$1} if $kind eq 'call' && $body =~ /\@([^\s(]+)/;
	}
	close($fh);
	return \%f;
}

my $in = facts($input_path);
my $out = facts($output_path);
my $name = $output_path;
$name =~ s{.*/}{};
my @lines;
for my $function (sort keys %{$in->{functions}})
{
	if (!exists($out->{functions}{$function}))
	{
		push @lines, "absent(\@$function)";
		next;
	}
	next if $in->{signatures}{$function} ne $out->{signatures}{$function};
	for my $callee (sort keys %{$in->{callees}{$function} || {}})
	{
		next if !exists($in->{functions}{$callee});   # only calls into the fixture's own definitions
		next if exists($out->{callees}{$function}{$callee});
		push @lines, "none(call \@$callee) in \@$function";
	}
	for my $kind (qw(load store phi copyobj zeroinit))
	{
		push @lines, "none($kind) in \@$function"
			if $in->{kinds}{$function}{$kind} && !$out->{kinds}{$function}{$kind};
	}
}
exit(0) if !@lines;
print "# outcomes from $name: what the course solution removed stays removed (a call inlined, memory promoted, a definition pruned)\n";
print "$_\n" for @lines;
