#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @j: integer to take the last digit from
 * Return: Always 0.
 */
int print_last_digit(int j)
{
	int i;

	if (j == '0')
		_putchar('0');
	if (j > '9')
	{
		i = j % 10;
		_putchar('0' + i);
	}
	if (j < '0')
	{
		i = j * -1;
		i = i % 10;
		_putchar('0'+ i);
	}
	else if (j <= '9' && j > '0')
		_putchar('0'+ j);
	return (i);
}
