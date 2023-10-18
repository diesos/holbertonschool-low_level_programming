#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @j: integer to take the last digit from
 * Return: Always 0.
 */
int print_last_digit(int j)
{
	int last_digit;

	last_digit = j % 10;
	if (j < 0)
	{
		last_digit *= -1;
		_putchar('0' + last_digit);
	}
	else
		_putchar('0' + last_digit);
	return (last_digit);
}
