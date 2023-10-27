#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: int n time word
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *debut;

	debut = dest;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (debut);
}
