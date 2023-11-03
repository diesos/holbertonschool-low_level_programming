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
    if (ac > 2)
    {
        int num1 = atoi(av[1]);
        int num2 = atoi(av[2]);
	    printf("%d\n", num1 * num2);
    }
    else
    {
        printf("Error\n");
	    return (1);
    }
    return (0);
}
