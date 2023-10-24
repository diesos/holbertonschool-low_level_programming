#include <stdio.h>

/**
 * reset_to_98 - resetting a pointer value
 * @n: pointer int n
 * Return: void
 */

void reset_to_98(int *n)
{
	int *pt_n = n;
	*pt_n = 98;
}
