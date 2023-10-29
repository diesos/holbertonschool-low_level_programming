#include "main.h"
#include <stdio.h>

/**
 * leet - transform to uppercase every first letter of word
 * @s: pointor of char string
 *
 * Return: s.
 */

char	*leet(char *s)
{
	int		i;
	int		j;
	char	*leetChars;
	char	*leetReplacements;

	leetChars = "aAeEoOtTlL";
	leetReplacements = "44337011";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (s[i] == leetChars[j])
			{
				s[i] = leetReplacements[j];
				break ;
			}
		}
	}
	return (s);
}
