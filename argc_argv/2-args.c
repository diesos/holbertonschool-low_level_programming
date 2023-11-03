#include <stdio.h>

/**
 * main - main function
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0.
 */

int	main(int ac, char *av[])
{
	int	i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
