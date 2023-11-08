#include <stdlib.h>
#include "main.h"

/**
 * str_concat - copy a string inside arrays
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *tmp;
	int size_s1, size_s2, i, j;

	size_s1 = 0;
	size_s2 = 0;
	j = 0;
	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	while (s1[size_s1] != '\0')
		size_s1++;
	while (s2[size_s2] != '\0')
		size_s2++;
	tmp = malloc((sizeof(char) * size_s1) + (sizeof(char) * j) + size_s2);
	if (s1 != NULL)
	{
		for (i = 0; i < size_s1; i++)
		{
			tmp[j] = s1[i];
			j++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; i < size_s2; i++)
		{
			tmp[j] = s2[i];
			j++;
		}
	}
	tmp[j] = '\0';
	return (tmp);
}
