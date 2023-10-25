#include "main.h"

/**
* _strycpy - copy a string pointed to by src to destination
* @dest: array n
* @src: which array number needed to be print
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	char *debut;

	debut = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (debut);
}
