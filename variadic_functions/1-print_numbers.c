#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a separator
 * @separator: String to be printed between numbers
 * @n: Number of parameters
 * @...: Variable number of parameters (integers) to be printed
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	sum;
	unsigned int	i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, unsigned int);
		printf("%d", sum);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
