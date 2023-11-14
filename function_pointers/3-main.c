#include "3-calc.h"

int	main(int ac, char *av[])
{
	int		*first_value;
	int		*second_value;
	int		total_value;
	int		*sum;
	char	*operat;

	first_value = atoi(av[1]);
	second_value = atoi(av[3]);
	total_value = atoi(av[1]) + atoi(av[3]);
	operat = atoi(av[2]);
	sum = *get_op_func(*operat)(*first_value, *second_value);
	if (ac < 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (ac == 3)
	{
		printf("%d", sum);
	}
	if ((operat == '/' && first_value == 0 || second_value == 0)
		|| (operat == '%' && first_value == 0 || second_value == 0))
	{
		printf("Error\n");
		exit(100);
	}
}
