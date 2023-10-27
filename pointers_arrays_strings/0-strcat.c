#include "main.h"

/**
 * _strcat - reproducing the strcat cmd
 * @dest: destination
 * @src: source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *tmp;

	while (*dest!= '\0')
	{
		tmp = dest;
		tmp++;
		dest++;
	}
	while (*src != '\0')
	{
		tmp = src;
		src++;
		tmp++;
	}
	*tmp = '\0';
	return (tmp);
}
