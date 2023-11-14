#include "function_pointers.h"

/**
 * int_index - search and compare integer
 * @array: Array to search
 * @size: Size of the array
 * @cmp: Pointer to the comparison function
 * Return: Index of the first element for which the comparison function
 *         does not return (0); -1 if no such element is found or size <= 0.
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
	}
	else
		return (-1);
	return (-1);
}
