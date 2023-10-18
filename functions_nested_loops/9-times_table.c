#include "main.h"
#include <stdio.h>

/**
 * times_table - print the multiply table
 * @void: void
 * Return: Always 0.
 */

int times_table(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
				if ((i * j) > 9)
				{
					putchar('0' + ((i * j) / 10));
					putchar('0' + ((i * j) % 10));
				}
				else
					putchar('0' + (i * j));
				if (i != 9)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
				}
				else
					putchar('\n');
		}
	}
}
