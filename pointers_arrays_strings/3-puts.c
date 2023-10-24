#include "main.h"

/**
 * _puts - putchar string
 * @str: pointer char str
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
