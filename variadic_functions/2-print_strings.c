#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a separator
 * @separator: String to be printed between strings
 * @n: Number of parameters
 * @...: Variable number of parameters (strings) to be printed
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	char			*sum;
	unsigned int	i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, char *);
		if (sum == NULL)
			printf("(nil)");
		else
			printf("%s", sum);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
