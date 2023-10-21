#include <stdio.h>

/**
 * times_table - print the multiply table
 * @void: void
 * Return: Always 0.
 */

void times_table(void)
{
	int i;
	int j;
	int result;
	int nresult;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			result = i * j;
			nresult = j * (i + 1);
			if (result > 9)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
				_putchar('0' + result);
			if (i != 9 && (nresult < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (i != 9 && (nresult > 9))
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
