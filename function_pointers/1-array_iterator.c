#include "function_pointers.h"

/**
 * array_iterator -iterates over the elements of an array
 * @array: array name
 * @size: size of array to be used
 * @action: function to be used
 * Return: void.
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long	i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
