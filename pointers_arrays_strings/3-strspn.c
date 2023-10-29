#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: ptr characters to match
 * Return: number of byte
 */

unsigned int	_strspn(char *s, char *accept)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	j = 0;
	found = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
			j++;
		}
		if (!found)
		{
			return (i);
		}
		i++;
	}
	return (i);
}
