#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of int
 * @min: minimum range
 * @max: maximum range
 * Return: int
 */

int	*array_range(int min, int max)
{
	int *debut;
	int	*tmp;
	int	i;
	
	if (min == 0 || max == 0)
		return (NULL);
	tmp = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (tmp == NULL)
		return (NULL);
	debut = tmp;
	for (i = 0; min <= max; i++)
	{
		tmp[i]  = min;
		min++;
	}
	return (debut);
}
