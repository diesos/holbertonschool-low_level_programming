#include "main.h"
#include <string.h>

/**
 * _strlen_recursion -  recursively count length of str
 * @s: pointor to be counted
 * Return: int
 */

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
