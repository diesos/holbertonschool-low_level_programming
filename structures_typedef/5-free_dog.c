#include "dog.h"
#include <stdio.h>

/**
 * free_dog- free dogs
 * @d: pointor of struct dog
 * Return: void.
 */

void	free_dog(dog_t *d)
{
	free(d);
}
