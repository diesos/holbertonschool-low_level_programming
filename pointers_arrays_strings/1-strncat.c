#include "main.h"

/**
 * _strncat - resetting a pointer value
 * @dest: destination
 * @src: source
 * @n: int n time to copy
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src != '\0' && j < n)
	{
			*dest = *src;
			src++;
			dest++;
			j++;
	}
	*dest = '\0';
	return (dest);
}
