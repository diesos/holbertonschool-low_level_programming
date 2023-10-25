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
	int j;
	int size;
	int index;

	i = 0;
	j = 0;
	while (a[i] != '\0')
		i++;
	size = i - n;
	index = size - 1;
	while (index > j)
	{
		if (index == j + 1)
			printf("%d\n", a[j]);
		else
			printf("%d, ", a[j]);
		j++;;
	}
}

