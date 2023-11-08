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
char	*create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	if (size == 0)
		return (NULL);
	tmp =  (malloc(sizeof(char) * size));
	while ( i < size)
	{
		tmp[j] = c;
		i++;
		j++;
	}
	return (tmp);
}
