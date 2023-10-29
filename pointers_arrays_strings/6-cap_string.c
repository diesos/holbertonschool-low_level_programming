#include "main.h"
#include <stdio.h>

/**
 * cap_string - transform to uppercase every first letter of word
 * @s: pointor of char string
 *
 * Return: s.
 */

#include <string.h>

char	*cap_string(char *s)
{
	int		i;
	char	*word_boundaries;

	i = 0;
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
	}
	word_boundaries = " \t.\n,;!?\"(){}";
	while (s[i] != '\0')
	{
		if (strchr(word_boundaries, s[i]) != NULL)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
