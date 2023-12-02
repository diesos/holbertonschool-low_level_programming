#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: int number
 * Return: void
 */

void	print_binary(unsigned long int n)
{
	unsigned long int	temp;
	unsigned long int	valueB;
	int					index;
	int					bits;

	temp = n;
	index = 0;
	bits = 0;
	while (temp >>= 1)
		bits++;
	for (index = bits; index >= 0; index--)
	{
		valueB = (n >> index) & 1;
		if (valueB == 1)
			putchar('1');
		else
			putchar('0');
	}
}
