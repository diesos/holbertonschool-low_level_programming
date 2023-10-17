#include "main.h"

/**
 * print_alphabet - print alphabet with ascii code
 * Return: Always 0.
 */

void print_alphabet(void)
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
