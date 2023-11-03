#include <stdio.h>

/**
 * main - main file
 * @ac: argument counter
 * @av: argument value
 * Return: Always 0.
 */

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		printf("%s\n", av[0]);
		return (0);
	}
	else
	{
		printf("Error");
		return (0);
	}
}
