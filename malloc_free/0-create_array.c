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
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (NULL);
	tmp = (malloc(sizeof(char) * size));
	if (tmp == NULL)
		return (NULL);
	while (i < size)
	{
		tmp[i] = c;
		i++;
	}
	return (tmp);
}
