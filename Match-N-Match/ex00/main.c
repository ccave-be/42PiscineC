/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 12:29:04 by ewolf             #+#    #+#             */
/*   Updated: 2018/06/30 15:57:36 by ewolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		match(char *s1, char *s2);

int main(void)
{
	char *word[2];
	char *res;

	word[0] = "a";
	word[1] = "*a";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "Hello";
	word[1] = "H*";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "Hello";
	word[1] = "*o";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "This is a match";
	word[1] = "This* is a match";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "fly";
	word[1] = "Fly";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"No Match\"\n\n");

	word[0] = "This is Dumb";
	word[1] = "This is***Dumb";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "";
	word[1] = "";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "";
	word[1] = "*";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "Hello WOrld";
	word[1] = " *Hello WOrld";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"No Match\"\n\n");

	word[0] = "   ";
	word[1] = "";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"No Match\"\n\n");

	word[0] = "   ";
	word[1] = "***";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

	word[0] = "\n\t\a\b\rÿüäï";
	word[1] = "\n\t\a\b\rÿüäï";
	res = (match(word[0], word[1])) ? "Match\n" : "No Match\n";
	printf("---Input: \"%s\" \"%s\"\n", word[0], word[1]);
	printf("%s", res);
	printf("%s", "+++Expected: \"Match\"\n\n");

}

/*
	I create the logic table of the two strings (1 -> string with content, 0 ->
	sting without content) to find all possible cases.

	Its a recursive function that looks for all possible cases.

	If the !s1 && !s2, have ended the two strings at the same time.
	In this case return a 1.

	If the !s1 && s2, if remains one * at the s2 call the function another time quiting
	it. Otherwise will return 0.

	If the s1 && s2, if s2 == '*' make two calls to the function with an or gate.
	The first call removing charcater form s1 to go * backwards. The second call
	removes from s2 to go * to front.

	If the s1 && !s2, returns 0 because the end haven't appear at the same time.

	Code without ternary statments:
	if (!*s1 && *s2)
	{
		if (*s2 == '*')
			return(match(s1, ++s2));
		else
			return (0)
	}
	else if (*s1 && *s2)
	{
		if (*s2 == '*')
			return(match(++s1, s2) || match(--s1, ++s2));
		else if (*s1 == *s2)
			return(match(++s1, ++s2));
	}
	else if (!*s1 && !*s2)
		return (1);
	else if (*s1 && !s2)
		return (0);
	return (0);
*/
