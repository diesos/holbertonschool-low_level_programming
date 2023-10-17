#include "main.h"

/**
 * print_alphabet_x10 - print alphabet with ascii code
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
