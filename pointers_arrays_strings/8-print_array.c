#include "main.h"

/**
* print_array - print array number content
* @a: array name pointor
* @n: which array number needed to be print
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; n > i; i++)
	{
		printf("%d", a[i]);
		if (n != (i + 1))
			printf(", ");
		else
			printf("\n");
	}
}
