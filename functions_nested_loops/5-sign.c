#include "main.h"

/**
 * print_sign - check if n is positive or negative
 * @n : for testing
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
