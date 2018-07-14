# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Map_Gen.pl                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/10 16:57:13 by otahirov          #+#    #+#              #
#    Updated: 2018/07/10 17:06:35 by otahirov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl

use warnings;
use strict;

die "program x y density" unless (scalar(@ARGV) == 3);

my ($x, $y, $density) = @ARGV;

print "$y.ox\n";
for (my $i = 0; $i < $y; $i++)
{
	for (my $j = 0; $j < $x; $j++)
	{
		if (int(rand($y) * 2) < $density)
		{
			print "o";
		}
		else
		{
			print ".";
		}
	}
	print "\n";
}