#include "main.h"

/**
 * print_alphabet_x10 - print alphabet with ascii code
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	int y;

	i = 97;
	y = 0;

	while (y <= 234)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
			y++;
		}
		i = 97;
		_putchar('\n');
	}
	write(1, "\n", 2);
}
