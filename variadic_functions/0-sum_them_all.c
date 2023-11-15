#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the parameters passed to the function
 * @n: Number of parameters
 * @...: Variable number of parameters to sum
 * Return: Sum of all parameters
 */
int	sum_them_all(const unsigned int n, ...)
{
	va_list			args;
	unsigned int	sum;
	unsigned int	total;
	unsigned int	i;

	va_start(args, n);
	total = 0;
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, unsigned int);
		total += sum;
	}
	va_end(args);
	return (total);
}
