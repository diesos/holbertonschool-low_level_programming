#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using Binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: Index of valueor -1 if value is no value of array null.
 */

int	binary_search(int *array, size_t size, int value)
{
	int				left_array;
	int				right_array;
	unsigned long	mid;
	int				i;

	/* We check if Array is not null and the Size has a correct value*/
	if (array == NULL || size < 1)
		exit(0);
	left_array = 0;
	right_array = size - 1;
	mid = size - 1;
	while (left_array <= right_array)
	{
		printf("Searching in array: %d", array[left_array]);
		for (i = left_array + 1; i <= right_array; ++i)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		mid = (((right_array) + (left_array)) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left_array = mid + 1;
		else
			right_array = mid - 1;
	}
	return (-1);
}
