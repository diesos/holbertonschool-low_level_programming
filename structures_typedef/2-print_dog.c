#include "dog.h"
#include <stdio.h>

/**
 * print_dog- print dog struct
 * @d: pointor struct to be printed
 * Return: void.
 */

void	print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
