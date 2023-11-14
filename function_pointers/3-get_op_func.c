#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int		i;
	int		j;
	op_t	ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
			{"%", op_mod}, {NULL, NULL}};

	i = 0;
	j = 0;
}
