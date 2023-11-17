#include "3-calc.h"

/**
 * main - Entry point of the calculator program.
 * @ac: Number of command-line arguments.
 * @av: Array of strings representing command-line arguments.
 * Return: 0 on success, exits with specific error codes on failure.
 */

int	main(int ac, char *av[])
{
	int		first_value;
	int		second_value;
	char	*operat;

	first_value = atoi(av[1]);
	second_value = (atoi(av[3]));
	operat = av[2];
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((av[2][0] == '/' && (second_value == 0 || first_value == 0))
			|| (av[2][0] == '%' && (second_value == 0 || first_value == 0))))
	{
		printf("Error\n");
		exit(100);
	}
	if (ac == 4)
	{
		return (printf("%d\n", get_op_func(operat)(first_value, second_value)));
	}
	return (0);
}
