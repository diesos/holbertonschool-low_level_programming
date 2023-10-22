#include <stdio.h>

/**
 * print_to_98 - print number from n to 98
 * @n : starting int
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n == 98)
		printf("98\n");
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		if (n == 98)
		{
			printf("%d\n", n);
		}
	}
}
