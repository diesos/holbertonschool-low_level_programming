#include "main.h"
#include <stdio.h>

/**
 * _strchr - search a char inside a string a print after this char
 * @s: pointor of char string
 * @c : char c
 * Return: s.
 */

char	*_strchr(char *s, char c)
{
	int		i;
	int		lettre;
	char	dest[256];
	int		j;

	i = 0;
	lettre = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			lettre = 1;
			j = 0;
			while (s[i] != '\0')
			{
				dest[j] = s[i];
				i++;
				j++;
			}
			dest[j] = '\0';
			break;
		}
		i++;
	}
	if (lettre)
	{
		return (dest);
	}
	else
	{
		return (NULL);
	}
}
