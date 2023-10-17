#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @r : integer to take the last digit from
 * Return: Always 0.
 */

int print_last_digit(int r)
{
	int i;

	i = r % 10;

	if (i < 0 || i <= -9)
	{
		i = i * -1;
		printf("%d", i);
	}
	else
		printf("%d", i);
	return (0);
}
