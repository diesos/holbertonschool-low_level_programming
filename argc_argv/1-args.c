#include <stdio.h>

/**
 * main - main function
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0.
 */

int	main(int ac, char *av[])
{
	if (ac == 0)
		printf("0");
	else
		printf("%d\n", ac - 1);
	(void)av;
	return (0);
}
