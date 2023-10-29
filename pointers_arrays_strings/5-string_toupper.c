#include "main.h"
#include <stdio.h>

/**
 * string_toupper - transform lowercase to uppercase
 * @s: pointor of char string
 *
 * Return: nothing.
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 96 && s[i] <= 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
