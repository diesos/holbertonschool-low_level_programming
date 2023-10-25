#include "main.h"

/**
 * puts2 - skip 2 char and print
 * @str: pointer string
 * Return: void
 */

void puts2(char *str)
{
		int i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
		i++;
	}
	putchar('\n');
}
