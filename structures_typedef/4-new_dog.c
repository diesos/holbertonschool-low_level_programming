#include "dog.h"
#include <stdio.h>

/**
 * new_dog- add a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct.
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	struct dog	*dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	free(dog);
	return (dog);
}
