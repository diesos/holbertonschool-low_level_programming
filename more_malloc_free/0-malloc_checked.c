#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check the allocated memory
 * @b: the char insid
 * Return: void
 */



void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	if (b == 0)
		return (NULL);
	
	c = (unsigned int*)malloc(b);
	return (c);
}
