#include "main.h"

/**
 * rev_string - reversed string
 * @s: pointer char s
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	for (i = i - 1; j < i; j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
	}
}
