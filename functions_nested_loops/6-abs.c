#include "main.h"

/**
 * _abs - computes the abs value of an int
 * @r : integer to check the abs value of
 * Return: Always 0.
 */

int _abs(int r)
{
	if (r > 0)
		printf("%d", r);
	if (r == 0)
		printf("0");
	if (r < 0)
	{
		r = r * (-r);
		printf("%d", r);
}
