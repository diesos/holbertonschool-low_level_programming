#include "main.h"

/**
* _puts_recursion - function to puts recursively
* @s: pointor to be puts recursively
* Return: void
*/

int compt(int n, int i)
{
	i = 0;
	while (i < n)
	{
		if (n == i * i)
			break;
		else
			i++;
	}
	return (i);
}

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
		return (-1);
	if (n > 0)
	{
		n = compt(n, i) * compt(n, i);
	}
	return (i);
}
