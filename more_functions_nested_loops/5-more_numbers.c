#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 */
void	more_numbers(void)
{
	int i;
	int	j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j <= 9 || j == 10 || j == 11)
				putchar((j <= 9) ? ('0' + j) : '1');
			else
			{
				putchar('1');
				j = -1;
			}
		}
		putchar('\n');
	}
}
