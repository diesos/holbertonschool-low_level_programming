#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @ac: argument counter
 * @av: argument vector
 * Return: Always 0.
 */

int	main(int ac, char *av[])
{
	int	i;
	int	num;
	int	sum;

	sum = 0;
	for (i = 1; i < ac; i++)
	{
		num = atoi(av[i]);
		if (!(num >= 1 && num <= 9))
		{
			printf("Error");
			return (1);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
