#include <stdio.h>

/**
 * print_square - Prints a square of a given size using the '#' character.
 *
 * @size: The size of the square.
 */

void	print_square(int size)
{
	int	i;
	int	j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
