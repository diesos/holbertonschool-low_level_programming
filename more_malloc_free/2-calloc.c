#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate mem for array
* @nmemb: of nmemb
* @size: of size byte
* Return: void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *tmp;

	for (i = 0; i < nmemb; i++)
	{
		tmp = malloc((size) * (1));
		tmp = (char *)tmp + 1;
	}
	return (tmp);
}
