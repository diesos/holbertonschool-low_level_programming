#include "search_algos.h"

/**
 * linear_search - Executes a linear search algorithm on an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return:index where value is located, -1 if null or non present
 */

int	linear_search(int *array, size_t size, int value)
{
	size_t	i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}
