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
				putchar('0' + (result / 10));
				putchar('0' + (result % 10));
			}
			else
				putchar('0' + result);
			if (i != 9 && (nresult < 10))
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
			}
			else if (i != 9 && (nresult > 9))
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
	}
}
