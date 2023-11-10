#include "main.h"
#include <stdlib.h>

/**
 * _isupper - check if is uppercase
 * @c: int to test
 * Return: int
 */

int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
