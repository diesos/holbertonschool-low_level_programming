#include "main.h"

/**
 * _strcat - reproducing the strcat cmd
 * @dest: destination
 * @src: source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *tmp;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		tmp[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		tmp[i] = src[j];
		i++;
		j++;
	}
	*tmp = '\0';
	return (tmp);
}
