#include "main.h"

/**
* _pow_recursion - function to puts recursively
* @x: int to power
* @y: int to poweer
* Return: int
*/

int _pow_recursion(int x, int y)
{
	int sum;

	sum = 1;
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (sum = x * _pow_recursion(x, y - 1));
}
