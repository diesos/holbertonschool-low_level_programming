#include "main.h"

/**
* puts_half - puts half
* @str: pointer string
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int longueur;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 != 0)
		longueur = i - 1 / 2;
	else
		longueur = i / 2;
	for (; longueur <= i; longueur++)
		putchar(str[longueur]);
	putchar('\n');
}



