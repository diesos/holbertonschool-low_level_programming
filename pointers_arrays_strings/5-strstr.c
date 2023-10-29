#include "main.h"
#include <stdio.h>

/**
 * _strstr - search a string inside a string a print after this char
 * @haystack: pointor of char string
 * @needle : pointor of char to search
 * Return: s.
 */

char	*_strstr(char *haystack, char *needle)
{
	int			i;
	int			j;
	int			k;
	int			temp;
	int			found;
	static char	dest[256];

	i = 0;
	while (haystack[i] != '\0')
	{
		temp = i;
		j = 0;
		k = 0;
		found = 1;
		while (needle[j] != '\0')
		{
			if (haystack[temp] != needle[j])
			{
				found = 0;
				break;
			}
			dest[k] = haystack[temp];
			k++;
			j++;
			temp++;
		}
		if (found)
		{
			dest[k] = '\0';
			return (dest);
		}
		i++;
	}
	return (NULL);
}
