#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int begin;
	int	end;
	int	temp;

	begin = 0;
	end = n - 1;
	
	while (begin < end)
	{
		temp = a[begin];
		a[begin] = a[end];
		a[end] = temp;
		begin++;
		end--;
	}
}
