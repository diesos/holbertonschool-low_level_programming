#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - recursive reverse printing
 * @s: pointer to the string to be printed in reverse
 * Return: void
 */

void	_print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}
