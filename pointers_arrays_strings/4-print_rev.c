#include "main.h"

/**
 * print_rev - putchar string
 * @s: pointer char s
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
