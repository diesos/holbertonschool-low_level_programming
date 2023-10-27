#include "main.h"

/**
 * _strcat - resetting a pointer value
 * @dest: destination
 * @src: source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i--;
	while (*src != '\0')
	{
		dest = src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
