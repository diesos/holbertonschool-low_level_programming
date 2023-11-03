#include "main.h"

/**
* _puts_recursion - function to puts recursively
* @s: pointor to be puts recursively
* Return: void
*/

int factorial(int n)
{
	int i;

	i = n - 1;
	if (n == 0)
		return 1;
	if (n < 0)
		return -1;
	if (i < n)
		n = n * factorial(n -1);
	return (n);
}
