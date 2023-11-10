#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate mem for array
 * @nmemb: of nmemb
 * @size: of size byte
 * Return: void
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	i;
	void			*tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tmp = malloc((nmemb) * size);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)tmp + i) = 0;
	return (tmp);
}
