#include "main.h"

/**
 * _abs - computes the abs value of an int
 * @r : integer to check the abs value of
 * Return: Always 0.
 */

int _abs(int r)
{
	if (r > 0)
		return (r);
	if (r == 0)
		return (0);
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	return (0);
}
