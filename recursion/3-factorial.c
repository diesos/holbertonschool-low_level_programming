#include "main.h"

/**
 * factorial - function to find factorial of an int
 * @n: int for finding factorial
 * Return: int
 */

int	factorial(int n)
{
	int	i;

	i = n - 1;
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	if (i < n)
		n = n * factorial(n - 1);
	return (n);
}
