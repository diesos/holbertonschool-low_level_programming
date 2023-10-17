#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 0;

	while (i <= 10)
	{
		print_alphabet_x10();
		i++;
	}
	_putchar('\n');
	return (0);
}
