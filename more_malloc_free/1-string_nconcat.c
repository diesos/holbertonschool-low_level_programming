#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concat 2 string until n byte
 * @s1: first string
 * @s2: second string
 * @n: n bytes
 * Return: char
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	char			*tmp;
	unsigned int i, j;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	tmp = malloc((sizeof(char) * (len_s1 + len_s2)) + 1);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		tmp[i] = s1[i];
	for (j = 0; j < len_s2 && j < n; j++)
	{
		tmp[i] = s2[j];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
