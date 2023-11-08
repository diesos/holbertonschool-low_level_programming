#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string inside arrays
 * @str: string to copy
 *
 * Return: char
 *
 */
char	*_strdup(char *str)
{
	int		i;
	int		j;
	int		n;
	char	*tmp;

	i = 0;
	j = 0;
	n = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	tmp = malloc(sizeof(char) * i + 1);
	while (j < i)
	{
		tmp[j] = str[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
