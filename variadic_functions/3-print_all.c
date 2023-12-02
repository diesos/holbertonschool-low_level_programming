#include "variadic_functions.h"

/**
 * print_all - Prints values based on the provided format
 * @format: Format specifier for the types of parameters
 * @...: Variable number of parameters to be printed
 */

void	print_all(const char *const format, ...)
{
	va_list	args;
	int		i;
	int		j;
	int		_int;
	char	_c;
	float	_float;
	char	_string;
	char	detect;
	char	*op;
	int		(*f)(double a, double b);

	va_start(args, format);
	i = 0;
	while (format != NULL)
	{
		if ((strcmp(format[i], caractere.de[i]) == 0)
            {
			op = args[j];
            }
		i++;
        j++;
		if ((format[i] >= '0') && (format[i] <= '9'))
		{
			_int = va_arg(args, int);
			printf("%d", _int);
		}
		printf(",");
		i++;
	}
	printf("\n");
	va_end(args);
}
