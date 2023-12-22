#include <stdio.h>

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void	print_triangle(int size)
{
	int	lower;
	int	power;

	if (size > 0)
	{
		for (lower = 1; lower <= size; lower++)
		{
			for (power = size - lower; power > 0; power--)
				putchar(' ');
			for (power = 0; power < lower; power++)
				putchar('#');
			if (lower == size)
				continue ;
			putchar('\n');
		}
	}
	putchar('\n');
}
