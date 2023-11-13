#include "function_pointers.h"

/**
 * print_name - check if nothing is null
 * @name: name of dog
 * @f: function to be used
 * Return: void.
 */

void	print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
