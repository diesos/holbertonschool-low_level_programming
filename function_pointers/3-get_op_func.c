#include "3-calc.h"

/**
 * get_op_func - Retrieves the corresponding arithmetic operation function
 *                based on the provided operator.
 * @s: String representing the operator.
 * Return: Pointer to the appropriate arithmetic operation function,
 *         or NULL if the operator is not recognized.
 */

int (*get_op_func(char *s))(int, int)
{
	int		j;
	int		i;
	op_t	ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
			{"%", op_mod}, {NULL, NULL}};

	j = 0;
	i = 0;
	while (ops[j].op != NULL)
	{
		if (strcmp(s, ops[j].op) == 0)
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
