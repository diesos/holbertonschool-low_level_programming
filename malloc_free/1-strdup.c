#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: size of memory
 * @c: the char inside value
 *
 * Return: char
 *
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int n;
	char *tmp;

	i = 0;
	j = 0;
	n = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	tmp = malloc(sizeof(char) * i);

	while (j < i)
	{
		tmp[j] = str[j];
		j++;
	}
	return(tmp);
}
