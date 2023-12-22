#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints a line of a specified length.
 *
 * @n: The length of the line to be printed.
 */

void	print_line(int n)
{
	int	compteur;

	compteur = 0;
	if (n <= 0)
		putchar('\n');
	else
	{
		while (n > compteur)
		{
			putchar('_');
			compteur++;
		}
		putchar('\n');
	}
}
