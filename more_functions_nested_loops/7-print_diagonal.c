#include <stdio.h>

/**
 * print_diagonal - Prints a diagonal line using the '\' character.
 * @n: The number of times the '\' character should be printed.
 */

void	print_diagonal(int n)
{
	int	i;
	int	j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		putchar('\\');
		putchar('\n');
		for (i = 1; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
