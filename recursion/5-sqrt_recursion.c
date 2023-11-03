#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n: int to check sqrt
 * Return: result
 */

int	_sqrt_recursion(int n)
{
	int	result;

	result = 1;
	if (n > 0)
	{
		result *= n * _sqrt_recursion(n - 1);
		n -= 1;
	}
	if (n < 0)
		return (0);
	return (result);
}
